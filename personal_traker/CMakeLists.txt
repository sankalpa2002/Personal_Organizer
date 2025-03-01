cmake_minimum_required(VERSION 3.16)

project(personal_traker VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql Charts)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql Charts)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        signup.h
        signup.cpp
        signup.ui
        dashboard.cpp
        dashboard.h
        dashboard.ui
        databaseheader.h
        addincome.cpp
        addincome.h
        addincome.ui
        addexpenses.cpp
        addexpenses.h
        addexpenses.ui
        setbudget.cpp
        setbudget.h
        setbudget.ui
        financialstate.cpp
        financialstate.h
        financialstate.ui
        report.cpp
        report.h
        report.ui
        edittimetable.cpp
        edittimetable.h
        edittimetable.ui
        viewtimetable.cpp
        viewtimetable.h
        viewtimetable.ui
        specialdates.cpp
        specialdates.h
        specialdates.ui
        newresource.qrc

)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(personal_traker
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        signup.h signup.cpp signup.ui
        dashboard.h dashboard.cpp dashboard.ui
        databaseheader.h
        addincome.h addincome.cpp addincome.ui
        addexpenses.h addexpenses.cpp addexpenses.ui
        setbudget.h setbudget.cpp setbudget.ui
        financialstate.h financialstate.cpp financialstate.ui
        report.h report.cpp report.ui
        viewtimetable.h viewtimetable.cpp viewtimetable.ui
        specialdates.h specialdates.cpp specialdates.ui
        newresource.qrc


    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET personal_traker APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(personal_traker SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(personal_traker
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(personal_traker PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql Qt${QT_VERSION_MAJOR}::Charts )

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.personal_traker)
endif()
set_target_properties(personal_traker PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS personal_traker
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(personal_traker)
endif()
