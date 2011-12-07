/********************************************************************************
** Form generated from reading UI file 'mainwindowmod.ui'
**
** Created: Sun Dec 4 23:23:00 2011
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWMOD_H
#define UI_MAINWINDOWMOD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowMod
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowMod)
    {
        if (MainWindowMod->objectName().isEmpty())
            MainWindowMod->setObjectName(QString::fromUtf8("MainWindowMod"));
        MainWindowMod->resize(800, 600);
        menubar = new QMenuBar(MainWindowMod);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        MainWindowMod->setMenuBar(menubar);
        centralwidget = new QWidget(MainWindowMod);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindowMod->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindowMod);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowMod->setStatusBar(statusbar);

        retranslateUi(MainWindowMod);

        QMetaObject::connectSlotsByName(MainWindowMod);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowMod)
    {
        MainWindowMod->setWindowTitle(QApplication::translate("MainWindowMod", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowMod: public Ui_MainWindowMod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWMOD_H
