/********************************************************************************
** Form generated from reading UI file 'createfoto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEFOTO_H
#define UI_CREATEFOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_createFoto
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *createFoto)
    {
        if (createFoto->objectName().isEmpty())
            createFoto->setObjectName(QString::fromUtf8("createFoto"));
        createFoto->resize(674, 650);
        verticalLayout_2 = new QVBoxLayout(createFoto);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(createFoto);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);

        tableWidget = new QTableWidget(createFoto);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 30)
            tableWidget->setRowCount(30);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(30);

        verticalLayout_2->addWidget(tableWidget);


        retranslateUi(createFoto);

        QMetaObject::connectSlotsByName(createFoto);
    } // setupUi

    void retranslateUi(QDialog *createFoto)
    {
        createFoto->setWindowTitle(QCoreApplication::translate("createFoto", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("createFoto", "PushButton", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("createFoto", "\320\244\320\230\320\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("createFoto", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("createFoto", "\320\237\321\200\320\270\321\201\321\203\321\202\321\201\321\202\320\262\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createFoto: public Ui_createFoto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEFOTO_H
