/********************************************************************************
** Form generated from reading UI file 'todolist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOLIST_H
#define UI_TODOLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToDoList
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *ToDoList)
    {
        if (ToDoList->objectName().isEmpty())
            ToDoList->setObjectName("ToDoList");
        ToDoList->resize(500, 500);
        ToDoList->setMinimumSize(QSize(500, 500));
        ToDoList->setMaximumSize(QSize(500, 500));
        listWidget = new QListWidget(ToDoList);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 500, 500));
        listWidget->setMinimumSize(QSize(500, 500));
        listWidget->setMaximumSize(QSize(500, 500));

        retranslateUi(ToDoList);

        QMetaObject::connectSlotsByName(ToDoList);
    } // setupUi

    void retranslateUi(QWidget *ToDoList)
    {
        ToDoList->setWindowTitle(QCoreApplication::translate("ToDoList", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToDoList: public Ui_ToDoList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOLIST_H
