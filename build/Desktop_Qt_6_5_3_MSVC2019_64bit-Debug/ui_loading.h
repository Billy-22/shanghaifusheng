/********************************************************************************
** Form generated from reading UI file 'loading.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loading
{
public:
    QLabel *label;
    QPushButton *begin;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QWidget *loading)
    {
        if (loading->objectName().isEmpty())
            loading->setObjectName("loading");
<<<<<<< HEAD
<<<<<<< HEAD
        loading->resize(410, 583);
        label = new QLabel(loading);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 381, 421));
=======
        loading->resize(411, 578);
        label = new QLabel(loading);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 100, 391, 361));
>>>>>>> parent of dcd2381 (优化)
=======
        loading->resize(638, 578);
        label = new QLabel(loading);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 601, 421));
>>>>>>> parent of 4caa02a (优化)
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setWordWrap(true);
        begin = new QPushButton(loading);
        begin->setObjectName("begin");
<<<<<<< HEAD
<<<<<<< HEAD
        begin->setGeometry(QRect(120, 500, 131, 51));
=======
        begin->setGeometry(QRect(130, 500, 131, 51));
>>>>>>> parent of dcd2381 (优化)
=======
        begin->setGeometry(QRect(470, 510, 131, 51));
>>>>>>> parent of 4caa02a (优化)
        QFont font1;
        font1.setPointSize(14);
        begin->setFont(font1);
        label_2 = new QLabel(loading);
        label_2->setObjectName("label_2");
<<<<<<< HEAD
<<<<<<< HEAD
        label_2->setGeometry(QRect(0, -10, 381, 71));
=======
        label_2->setGeometry(QRect(20, 10, 381, 71));
>>>>>>> parent of dcd2381 (优化)
=======
        label_2->setGeometry(QRect(130, 0, 381, 71));
>>>>>>> parent of 4caa02a (优化)
        QFont font2;
        font2.setPointSize(18);
        label_2->setFont(font2);
        label_3 = new QLabel(loading);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 490, 151, 71));
        label_3->setFont(font);
        lineEdit = new QLineEdit(loading);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(192, 515, 211, 41));

        retranslateUi(loading);

        QMetaObject::connectSlotsByName(loading);
    } // setupUi

    void retranslateUi(QWidget *loading)
    {
        loading->setWindowTitle(QCoreApplication::translate("loading", "Form", nullptr));
        label->setText(QCoreApplication::translate("loading", "<html><head/><body><p align=\"justify\">        \350\277\231\346\230\257\346\210\221\344\273\254\346\240\271\346\215\256\342\200\234\345\214\227\344\272\254\346\265\256\347\224\237\350\256\260\342\200\235\346\224\271\347\274\226\350\200\214\346\235\245\347\232\204\351\235\242\345\220\221\345\257\271\350\261\241\345\256\236\351\252\214\350\257\276\347\250\213\350\256\276\350\256\241\351\241\271\347\233\256\343\200\202</p><p>        \346\202\250\345\260\206\346\211\256\346\274\224\344\270\200\344\275\215\346\262\252\346\274\202\343\200\202\344\270\200\345\274\200\345\247\213\357\274\214\346\202\250\346\234\2110\345\205\203\351\222\261\357\274\214\345\271\266\344\270\224\346\254\240\346\235\221\351\225\2775k\345\205\203\351\222\261\343\200\202\346\235\221\351\225\277\346\230\257\344\270\252\351\253\230\345\210\251\350\264\267\345\244\264\345\255\220\357\274\214\345\200\272\345\212\241\345\210\251\346\201\257\351\253\230\350\276\27610%\346\257\217\345\244\251\343\200\202\345\246\202\346\236\234\345\234\250\346\270"
                        "\270\346\210\217\345\221\250\346\234\237\345\206\205\346\262\241\346\234\211\350\277\230\346\270\205\357\274\214\346\202\250\345\217\257\350\203\275\347\211\272\347\211\262\345\234\250\344\270\212\346\265\267\347\232\204\346\237\220\345\244\204\345\260\217\345\267\267\345\206\205\343\200\202\346\202\250\345\206\263\345\256\232\345\234\250\344\270\212\346\265\267\345\220\204\345\214\272\351\273\221\345\270\202\345\200\222\345\215\226\345\220\204\347\247\215\347\211\251\345\223\201\346\235\245\345\217\221\350\264\242\350\207\264\345\257\214\357\274\214\344\270\215\344\273\205\350\246\201\350\277\230\346\270\205\345\200\272\345\212\241\357\274\214\346\233\264\350\246\201\345\207\272\344\272\272\345\244\264\345\234\260\343\200\202</p><p>        \346\202\250\345\217\252\350\203\275\345\234\250\344\270\212\346\265\267\345\276\20540\345\244\251\357\274\214\346\257\217\346\254\241\345\245\224\350\265\260\351\273\221\345\270\202\347\256\227\344\270\200\345\244\251\343\200\202\344\270\200\345\274\200\345\247\213\357\274"
                        "\214\346\202\250\347\247\237\347\232\204\346\210\277\345\255\220\345\217\252\350\203\275\346\224\276100\344\273\266\344\270\234\350\245\277\357\274\214\346\202\250\345\217\257\344\273\245\345\234\250\347\247\237\346\210\277\344\270\255\345\277\203\347\247\237\346\233\264\345\244\247\347\232\204\346\210\277\345\255\220\343\200\202\345\271\266\344\270\224\350\246\201\346\263\250\346\204\217\351\232\217\346\234\272\344\272\213\344\273\266\345\257\271\346\202\250\350\272\253\345\277\203\345\201\245\345\272\267\345\270\246\346\235\245\347\232\204\345\275\261\345\223\215\343\200\202</p><p>        \351\202\243\344\271\210\357\274\214\345\246\202\346\236\234\346\202\250\345\207\206\345\244\207\345\245\275\344\272\206\357\274\214\345\260\261\350\277\233\345\205\245\346\270\270\346\210\217\345\220\247\357\274\201</p></body></html>", nullptr));
        begin->setText(QCoreApplication::translate("loading", "\345\207\272\345\217\221", nullptr));
        label_2->setText(QCoreApplication::translate("loading", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\344\270\212\346\265\267\346\265\256\347\224\237\350\256\260\347\232\204\346\225\205\344\272\213</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("loading", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\244\247\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loading: public Ui_loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
