/********************************************************************************
** Form generated from reading UI file 'AboutDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AboutDlg
{
public:
    QFrame *icon;
    QLabel *label;
    QPushButton *UIDLGOK;

    void setupUi(QDialog *AboutDlg)
    {
        if (AboutDlg->objectName().isEmpty())
            AboutDlg->setObjectName(QString::fromUtf8("AboutDlg"));
        AboutDlg->setWindowModality(Qt::WindowModal);
        AboutDlg->resize(451, 105);
        AboutDlg->setModal(true);
        icon = new QFrame(AboutDlg);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(0, 0, 111, 101));
        icon->setFrameShape(QFrame::StyledPanel);
        icon->setFrameShadow(QFrame::Raised);
        label = new QLabel(AboutDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 0, 251, 101));
        UIDLGOK = new QPushButton(AboutDlg);
        UIDLGOK->setObjectName(QString::fromUtf8("UIDLGOK"));
        UIDLGOK->setGeometry(QRect(370, 70, 75, 23));

        retranslateUi(AboutDlg);
        QObject::connect(UIDLGOK, SIGNAL(clicked()), AboutDlg, SLOT(UIDLGClickedOk()));

        QMetaObject::connectSlotsByName(AboutDlg);
    } // setupUi

    void retranslateUi(QDialog *AboutDlg)
    {
        AboutDlg->setWindowTitle(QApplication::translate("AboutDlg", "\345\205\263\344\272\216 UnknownObjectMediaPlayer", nullptr));
        label->setText(QApplication::translate("AboutDlg", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">UnknownObjectMediaPlayer V3.0</span></p><p align=\"center\"><span style=\" font-size:7pt; font-weight:600;\">UnknownObject\347\211\210\346\235\203\346\211\200\346\234\211 \302\2512019-2020 All rights reversed.</span></p></body></html>", nullptr));
        UIDLGOK->setText(QApplication::translate("AboutDlg", "\347\241\256\345\256\232", nullptr));
#ifndef QT_NO_SHORTCUT
        UIDLGOK->setShortcut(QApplication::translate("AboutDlg", "Return", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class AboutDlg: public Ui_AboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
