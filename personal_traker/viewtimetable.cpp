#include "viewtimetable.h"
#include "ui_viewtimetable.h"

viewtimetable::viewtimetable(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewtimetable)
{
    ui->setupUi(this);
}

viewtimetable::~viewtimetable()
{
    delete ui;
    delete model;
}

void viewtimetable::on_timetableview_2_clicked()
{
     QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
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
    }
    model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM timetable");
         ui ->timetabletableview -> setModel (model);
}


void viewtimetable::on_resettimetable_clicked()
{
    ui ->timetabletableview -> setModel(nullptr);
}


void viewtimetable::on_gotodashboard_clicked()
{
    this -> close();
}

