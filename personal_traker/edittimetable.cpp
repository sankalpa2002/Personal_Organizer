#include "edittimetable.h"
#include "ui_edittimetable.h"
#include <QMessageBox>

edittimetable::edittimetable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edittimetable)
{
    ui->setupUi(this);
}

edittimetable::~edittimetable()
{
    delete ui;
}

void edittimetable::on_createshedule_clicked()
{
    QString starttime = ui -> starttime ->text();
    QString endtime = ui -> endtime ->text();
    QString monday = ui -> mondayedit ->text();
    QString tuesday = ui -> tuesdayedit ->text();
    QString wednesday = ui-> wednesdayedit ->text();
    QString thursday = ui -> thursdayedit ->text();
    QString friday = ui -> fridayedit -> text();
    if(monday==nullptr && tuesday==nullptr && wednesday==nullptr &&thursday==nullptr &&friday==nullptr)
    {QMessageBox::warning(this,"Warning","Fields Cannot be Empty!");}
    else{

    QSqlDatabase database =QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("E:/QT/database/personalorganizer.db");
    if(QFile::exists("E:/QT/database/personalorganizer.db"))
    {

        qDebug()<<"Database file exists";
    }
    else
    {
        qDebug()<<"Database file doesn't exist";
        return;
    }

    if(!database.open())
    {
        qDebug()<<"Error: Unable to open Database";
        return;
    }
    else
    {
        qDebug()<<"Database open successfully...";
        QMessageBox::information(this,"Success","Lecture Added Successfully!");
    }
    QSqlQuery query(database);
    query.prepare("insert into timetable (Starttime, Endtime, Monday, Tuesday, Wednesday, Thursday, Friday) values('" + starttime + "','" + endtime + "', '" + monday +"','" + tuesday + "','" + wednesday + "','" + thursday + "','" + friday + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() <<"last error : " <<query.lastError().text();

    ui -> starttime -> setTime(QTime(0,0,0));
    ui -> endtime -> setTime(QTime(0,0,0));
    ui -> mondayedit -> clear();
    ui -> tuesdayedit -> clear();
    ui -> wednesdayedit -> clear();
    ui -> thursdayedit -> clear();
    ui -> fridayedit -> clear();
    }
}


void edittimetable::on_resetshedule_clicked()
{
    ui -> starttime -> setTime(QTime(0,0,0));
    ui -> endtime -> setTime(QTime(0,0,0));
    ui -> mondayedit -> clear();
    ui -> tuesdayedit -> clear();
    ui -> wednesdayedit -> clear();
    ui -> thursdayedit -> clear();
    ui -> fridayedit -> clear();
}


void edittimetable::on_resetshedule_2_clicked()
{
    this -> close();
}

