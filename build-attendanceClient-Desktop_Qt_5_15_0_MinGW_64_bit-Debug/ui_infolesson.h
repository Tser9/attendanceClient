/********************************************************************************
** Form generated from reading UI file 'infolesson.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOLESSON_H
#define UI_INFOLESSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_infoLesson
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lesson;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *date;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *time;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lecturer;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *audit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *groups;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *attendance;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *noAttendance;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *verticalSpacer;
    QLabel *foto;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *infoLesson)
    {
        if (infoLesson->objectName().isEmpty())
            infoLesson->setObjectName(QString::fromUtf8("infoLesson"));
        infoLesson->resize(696, 747);
        gridLayout = new QGridLayout(infoLesson);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(infoLesson);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lesson = new QLineEdit(infoLesson);
        lesson->setObjectName(QString::fromUtf8("lesson"));

        horizontalLayout->addWidget(lesson);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(infoLesson);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        date = new QLineEdit(infoLesson);
        date->setObjectName(QString::fromUtf8("date"));

        horizontalLayout_2->addWidget(date);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(infoLesson);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        time = new QLineEdit(infoLesson);
        time->setObjectName(QString::fromUtf8("time"));

        horizontalLayout_3->addWidget(time);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(infoLesson);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lecturer = new QLineEdit(infoLesson);
        lecturer->setObjectName(QString::fromUtf8("lecturer"));

        horizontalLayout_4->addWidget(lecturer);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(infoLesson);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        audit = new QLineEdit(infoLesson);
        audit->setObjectName(QString::fromUtf8("audit"));

        horizontalLayout_8->addWidget(audit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(infoLesson);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        groups = new QLineEdit(infoLesson);
        groups->setObjectName(QString::fromUtf8("groups"));

        horizontalLayout_5->addWidget(groups);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(infoLesson);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        attendance = new QLineEdit(infoLesson);
        attendance->setObjectName(QString::fromUtf8("attendance"));

        horizontalLayout_6->addWidget(attendance);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(infoLesson);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        noAttendance = new QLineEdit(infoLesson);
        noAttendance->setObjectName(QString::fromUtf8("noAttendance"));

        horizontalLayout_7->addWidget(noAttendance);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_9->addItem(verticalSpacer);

        foto = new QLabel(infoLesson);
        foto->setObjectName(QString::fromUtf8("foto"));

        horizontalLayout_9->addWidget(foto);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_9->addItem(verticalSpacer_2);


        gridLayout->addLayout(horizontalLayout_9, 1, 0, 1, 1);


        retranslateUi(infoLesson);

        QMetaObject::connectSlotsByName(infoLesson);
    } // setupUi

    void retranslateUi(QDialog *infoLesson)
    {
        infoLesson->setWindowTitle(QCoreApplication::translate("infoLesson", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("infoLesson", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202:                            ", nullptr));
        lesson->setText(QString());
        label_2->setText(QCoreApplication::translate("infoLesson", "\320\224\320\260\321\202\320\260:                                 ", nullptr));
        date->setText(QString());
        label_3->setText(QCoreApplication::translate("infoLesson", "\320\222\321\200\320\265\320\274\321\217:                               ", nullptr));
        time->setText(QString());
        label_4->setText(QCoreApplication::translate("infoLesson", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214                   ", nullptr));
        lecturer->setText(QString());
        label_8->setText(QCoreApplication::translate("infoLesson", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217:                         ", nullptr));
        audit->setText(QString());
        label_5->setText(QCoreApplication::translate("infoLesson", "\320\223\321\200\321\203\320\277\320\277\321\213:                              ", nullptr));
        groups->setText(QString());
        label_6->setText(QCoreApplication::translate("infoLesson", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\321\200\320\270\321\201\321\203\321\202\321\201\320\262\321\203\321\216\321\211\320\270\321\205:", nullptr));
        attendance->setText(QString());
        label_7->setText(QCoreApplication::translate("infoLesson", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\321\202\321\201\321\203\321\202\321\201\320\262\321\203\321\216\321\211\320\270\321\205:  ", nullptr));
        noAttendance->setText(QString());
        foto->setText(QCoreApplication::translate("infoLesson", "\320\242\321\203\321\202 \320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \320\262\320\260\321\210\320\260 \321\200\320\265\320\272\320\273\320\260\320\274\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class infoLesson: public Ui_infoLesson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOLESSON_H
