/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lecture_lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *teacher_lineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *team_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QComboBox *comboBox;
    QPushButton *search_lecture;
    QTableWidget *lecture_tableWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEditFio;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEditGroupStudent;
    QHBoxLayout *horizontalLayout_6;
    QLabel *infoLesson;
    QLabel *infoLecturer;
    QLabel *infoGroup;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QPushButton *searchStudent;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1103, 703);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_4->addWidget(pushButton_4);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lecture_lineEdit = new QLineEdit(centralwidget);
        lecture_lineEdit->setObjectName(QString::fromUtf8("lecture_lineEdit"));

        verticalLayout->addWidget(lecture_lineEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        teacher_lineEdit = new QLineEdit(centralwidget);
        teacher_lineEdit->setObjectName(QString::fromUtf8("teacher_lineEdit"));

        verticalLayout_2->addWidget(teacher_lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        team_lineEdit = new QLineEdit(centralwidget);
        team_lineEdit->setObjectName(QString::fromUtf8("team_lineEdit"));

        verticalLayout_3->addWidget(team_lineEdit);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setContextMenuPolicy(Qt::DefaultContextMenu);

        horizontalLayout_2->addWidget(comboBox);

        search_lecture = new QPushButton(centralwidget);
        search_lecture->setObjectName(QString::fromUtf8("search_lecture"));

        horizontalLayout_2->addWidget(search_lecture);


        verticalLayout_4->addLayout(horizontalLayout_2);

        lecture_tableWidget = new QTableWidget(centralwidget);
        if (lecture_tableWidget->columnCount() < 3)
            lecture_tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        lecture_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lecture_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        lecture_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (lecture_tableWidget->rowCount() < 2)
            lecture_tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        lecture_tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        lecture_tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        lecture_tableWidget->setObjectName(QString::fromUtf8("lecture_tableWidget"));

        verticalLayout_4->addWidget(lecture_tableWidget);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        lineEditFio = new QLineEdit(centralwidget);
        lineEditFio->setObjectName(QString::fromUtf8("lineEditFio"));

        verticalLayout_5->addWidget(lineEditFio);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_7->addWidget(label_7);

        lineEditGroupStudent = new QLineEdit(centralwidget);
        lineEditGroupStudent->setObjectName(QString::fromUtf8("lineEditGroupStudent"));

        verticalLayout_7->addWidget(lineEditGroupStudent);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        infoLesson = new QLabel(centralwidget);
        infoLesson->setObjectName(QString::fromUtf8("infoLesson"));

        horizontalLayout_6->addWidget(infoLesson);

        infoLecturer = new QLabel(centralwidget);
        infoLecturer->setObjectName(QString::fromUtf8("infoLecturer"));

        horizontalLayout_6->addWidget(infoLecturer);

        infoGroup = new QLabel(centralwidget);
        infoGroup->setObjectName(QString::fromUtf8("infoGroup"));

        horizontalLayout_6->addWidget(infoGroup);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_6->addWidget(comboBox_2);

        searchStudent = new QPushButton(centralwidget);
        searchStudent->setObjectName(QString::fromUtf8("searchStudent"));

        horizontalLayout_6->addWidget(searchStudent);


        verticalLayout_6->addLayout(horizontalLayout_6);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_6->addWidget(tableWidget);


        horizontalLayout_5->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1103, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\321\202\320\270\321\202\321\214 \320\277\321\200\320\270\321\201\321\203\321\202\321\201\320\262\321\203\321\216\321\211\320\270\321\205", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "18:00, 237 \320\260\321\203\320\264., \320\257\320\267\321\213\320\272\320\270 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\275\320\270\321\217", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270 \320\272\320\260\320\272 \320\277\321\200\320\265\320\277\320\276\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202\321\203", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\216", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\265", nullptr));

        search_lecture->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = lecture_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = lecture_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = lecture_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = lecture_tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = lecture_tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        infoLesson->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202", nullptr));
        infoLecturer->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        infoGroup->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\321\213", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 ", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202\321\203", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\265", nullptr));

        searchStudent->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "02.09.2020", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "05.09.2020", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\321\201\321\2021", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\321\201\321\2022", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\321\201\321\2023", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\321\201\321\2024", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
