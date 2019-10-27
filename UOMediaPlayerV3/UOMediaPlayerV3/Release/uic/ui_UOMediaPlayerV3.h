/********************************************************************************
** Form generated from reading UI file 'UOMediaPlayerV3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UOMEDIAPLAYERV3_H
#define UI_UOMEDIAPLAYERV3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UOMediaPlayerV3Class
{
public:
    QAction *MenuOutput;
    QAction *MenuEdit;
    QAction *MenuPlaySettings;
    QAction *MenuImgSettings;
    QAction *MenuOutputSettings;
    QAction *MenuFormat;
    QAction *MenuAbout;
    QAction *MenuOpenSource;
    QAction *MenuOpenVA;
    QAction *MenuOpenImg;
    QAction *MenuPlay;
    QAction *MenuPause;
    QAction *MenuStop;
    QAction *MenuFF;
    QAction *MenuFB;
    QAction *MenuFaster;
    QAction *MenuSlower;
    QAction *MenuFullScreen;
    QWidget *centralWidget;
    QOpenGLWidget *openGLWidget;
    QPushButton *UIPlay;
    QPushButton *UIPause;
    QPushButton *UIStop;
    QPushButton *UIFastFoward;
    QPushButton *UIFastReverse;
    QPushButton *UISpeedUp;
    QPushButton *UISpeedDown;
    QPushButton *UIVolumeUp;
    QSlider *horizontalSlider;
    QLabel *label;
    QPushButton *UIVolumeUp_2;
    QLabel *label_2;
    QPushButton *UIMute;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UOMediaPlayerV3Class)
    {
        if (UOMediaPlayerV3Class->objectName().isEmpty())
            UOMediaPlayerV3Class->setObjectName(QString::fromUtf8("UOMediaPlayerV3Class"));
        UOMediaPlayerV3Class->resize(557, 420);
        MenuOutput = new QAction(UOMediaPlayerV3Class);
        MenuOutput->setObjectName(QString::fromUtf8("MenuOutput"));
        MenuEdit = new QAction(UOMediaPlayerV3Class);
        MenuEdit->setObjectName(QString::fromUtf8("MenuEdit"));
        MenuPlaySettings = new QAction(UOMediaPlayerV3Class);
        MenuPlaySettings->setObjectName(QString::fromUtf8("MenuPlaySettings"));
        MenuImgSettings = new QAction(UOMediaPlayerV3Class);
        MenuImgSettings->setObjectName(QString::fromUtf8("MenuImgSettings"));
        MenuOutputSettings = new QAction(UOMediaPlayerV3Class);
        MenuOutputSettings->setObjectName(QString::fromUtf8("MenuOutputSettings"));
        MenuFormat = new QAction(UOMediaPlayerV3Class);
        MenuFormat->setObjectName(QString::fromUtf8("MenuFormat"));
        MenuAbout = new QAction(UOMediaPlayerV3Class);
        MenuAbout->setObjectName(QString::fromUtf8("MenuAbout"));
        MenuOpenSource = new QAction(UOMediaPlayerV3Class);
        MenuOpenSource->setObjectName(QString::fromUtf8("MenuOpenSource"));
        MenuOpenVA = new QAction(UOMediaPlayerV3Class);
        MenuOpenVA->setObjectName(QString::fromUtf8("MenuOpenVA"));
        MenuOpenImg = new QAction(UOMediaPlayerV3Class);
        MenuOpenImg->setObjectName(QString::fromUtf8("MenuOpenImg"));
        MenuPlay = new QAction(UOMediaPlayerV3Class);
        MenuPlay->setObjectName(QString::fromUtf8("MenuPlay"));
        MenuPause = new QAction(UOMediaPlayerV3Class);
        MenuPause->setObjectName(QString::fromUtf8("MenuPause"));
        MenuStop = new QAction(UOMediaPlayerV3Class);
        MenuStop->setObjectName(QString::fromUtf8("MenuStop"));
        MenuFF = new QAction(UOMediaPlayerV3Class);
        MenuFF->setObjectName(QString::fromUtf8("MenuFF"));
        MenuFB = new QAction(UOMediaPlayerV3Class);
        MenuFB->setObjectName(QString::fromUtf8("MenuFB"));
        MenuFaster = new QAction(UOMediaPlayerV3Class);
        MenuFaster->setObjectName(QString::fromUtf8("MenuFaster"));
        MenuSlower = new QAction(UOMediaPlayerV3Class);
        MenuSlower->setObjectName(QString::fromUtf8("MenuSlower"));
        MenuFullScreen = new QAction(UOMediaPlayerV3Class);
        MenuFullScreen->setObjectName(QString::fromUtf8("MenuFullScreen"));
        centralWidget = new QWidget(UOMediaPlayerV3Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        openGLWidget = new QOpenGLWidget(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(0, 0, 461, 341));
        UIPlay = new QPushButton(centralWidget);
        UIPlay->setObjectName(QString::fromUtf8("UIPlay"));
        UIPlay->setGeometry(QRect(470, 10, 75, 23));
        UIPause = new QPushButton(centralWidget);
        UIPause->setObjectName(QString::fromUtf8("UIPause"));
        UIPause->setGeometry(QRect(470, 40, 75, 23));
        UIStop = new QPushButton(centralWidget);
        UIStop->setObjectName(QString::fromUtf8("UIStop"));
        UIStop->setGeometry(QRect(470, 70, 75, 23));
        UIFastFoward = new QPushButton(centralWidget);
        UIFastFoward->setObjectName(QString::fromUtf8("UIFastFoward"));
        UIFastFoward->setGeometry(QRect(470, 100, 75, 23));
        UIFastReverse = new QPushButton(centralWidget);
        UIFastReverse->setObjectName(QString::fromUtf8("UIFastReverse"));
        UIFastReverse->setGeometry(QRect(470, 130, 75, 23));
        UISpeedUp = new QPushButton(centralWidget);
        UISpeedUp->setObjectName(QString::fromUtf8("UISpeedUp"));
        UISpeedUp->setGeometry(QRect(470, 160, 75, 23));
        UISpeedDown = new QPushButton(centralWidget);
        UISpeedDown->setObjectName(QString::fromUtf8("UISpeedDown"));
        UISpeedDown->setGeometry(QRect(470, 190, 75, 23));
        UIVolumeUp = new QPushButton(centralWidget);
        UIVolumeUp->setObjectName(QString::fromUtf8("UIVolumeUp"));
        UIVolumeUp->setGeometry(QRect(470, 220, 75, 23));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(0, 350, 411, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 350, 51, 16));
        UIVolumeUp_2 = new QPushButton(centralWidget);
        UIVolumeUp_2->setObjectName(QString::fromUtf8("UIVolumeUp_2"));
        UIVolumeUp_2->setGeometry(QRect(470, 250, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(470, 310, 71, 16));
        UIMute = new QPushButton(centralWidget);
        UIMute->setObjectName(QString::fromUtf8("UIMute"));
        UIMute->setGeometry(QRect(470, 280, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 340, 71, 16));
        UOMediaPlayerV3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UOMediaPlayerV3Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 557, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        UOMediaPlayerV3Class->setMenuBar(menuBar);
        statusBar = new QStatusBar(UOMediaPlayerV3Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        UOMediaPlayerV3Class->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(MenuOpenVA);
        menu->addAction(MenuOpenImg);
        menu_2->addAction(MenuOutput);
        menu_2->addAction(MenuEdit);
        menu_2->addAction(MenuFormat);
        menu_3->addAction(MenuPlaySettings);
        menu_3->addAction(MenuImgSettings);
        menu_3->addAction(MenuOutputSettings);
        menu_4->addAction(MenuAbout);
        menu_4->addAction(MenuOpenSource);
        menu_5->addAction(MenuPlay);
        menu_5->addAction(MenuPause);
        menu_5->addAction(MenuStop);
        menu_5->addAction(MenuFF);
        menu_5->addAction(MenuFB);
        menu_5->addAction(MenuFaster);
        menu_5->addAction(MenuSlower);
        menu_5->addAction(MenuFullScreen);

        retranslateUi(UOMediaPlayerV3Class);
        QObject::connect(UIPlay, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedPlay()));
        QObject::connect(UIPause, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedPause()));
        QObject::connect(UIStop, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedStop()));
        QObject::connect(UIFastFoward, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedFastForward()));
        QObject::connect(UIFastReverse, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedFastReverse()));
        QObject::connect(UISpeedUp, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedSpeedUp()));
        QObject::connect(UISpeedDown, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedSpeedDown()));
        QObject::connect(UIVolumeUp, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedVolumeUp()));
        QObject::connect(UIVolumeUp_2, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedVolumeDown()));
        QObject::connect(UIMute, SIGNAL(clicked()), UOMediaPlayerV3Class, SLOT(UIClickedMute()));

        QMetaObject::connectSlotsByName(UOMediaPlayerV3Class);
    } // setupUi

    void retranslateUi(QMainWindow *UOMediaPlayerV3Class)
    {
        UOMediaPlayerV3Class->setWindowTitle(QApplication::translate("UOMediaPlayerV3Class", "UOMediaPlayerV3", nullptr));
        MenuOutput->setText(QApplication::translate("UOMediaPlayerV3Class", "\346\214\211\345\275\223\345\211\215\351\205\215\347\275\256\345\257\274\345\207\272", nullptr));
        MenuEdit->setText(QApplication::translate("UOMediaPlayerV3Class", "\350\260\203\346\225\264\345\271\266\345\257\274\345\207\272", nullptr));
        MenuPlaySettings->setText(QApplication::translate("UOMediaPlayerV3Class", "\346\222\255\346\224\276\350\256\276\347\275\256", nullptr));
        MenuImgSettings->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\233\276\347\211\207\346\265\217\350\247\210\350\256\276\347\275\256", nullptr));
        MenuOutputSettings->setText(QApplication::translate("UOMediaPlayerV3Class", "\351\237\263\350\247\206\351\242\221\345\257\274\345\207\272\350\256\276\347\275\256", nullptr));
        MenuFormat->setText(QApplication::translate("UOMediaPlayerV3Class", "\350\275\254\346\215\242\346\240\274\345\274\217", nullptr));
        MenuAbout->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\205\263\344\272\216UOMediaPlayer", nullptr));
        MenuOpenSource->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\274\200\346\272\220\344\277\241\346\201\257", nullptr));
        MenuOpenVA->setText(QApplication::translate("UOMediaPlayerV3Class", "\351\237\263\350\247\206\351\242\221", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuOpenVA->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        MenuOpenImg->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\233\276\347\211\207", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuOpenImg->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "Ctrl+Shift+O", nullptr));
#endif // QT_NO_SHORTCUT
        MenuPlay->setText(QApplication::translate("UOMediaPlayerV3Class", "\346\222\255\346\224\276", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuPlay->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        MenuPause->setText(QApplication::translate("UOMediaPlayerV3Class", "\346\232\202\345\201\234", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuPause->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "Space", nullptr));
#endif // QT_NO_SHORTCUT
        MenuStop->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\201\234\346\255\242", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuStop->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        MenuFF->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\277\253\350\277\233", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuFF->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "Right", nullptr));
#endif // QT_NO_SHORTCUT
        MenuFB->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\277\253\351\200\200", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuFB->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "Left", nullptr));
#endif // QT_NO_SHORTCUT
        MenuFaster->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\212\240\351\200\237\346\222\255\346\224\276", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuFaster->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "Up", nullptr));
#endif // QT_NO_SHORTCUT
        MenuSlower->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\207\217\351\200\237\346\222\255\346\224\276", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuSlower->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "Down", nullptr));
#endif // QT_NO_SHORTCUT
        MenuFullScreen->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\205\250\345\261\217\345\271\225", nullptr));
#ifndef QT_NO_SHORTCUT
        MenuFullScreen->setShortcut(QApplication::translate("UOMediaPlayerV3Class", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        UIPlay->setText(QApplication::translate("UOMediaPlayerV3Class", "\346\222\255\346\224\276", nullptr));
        UIPause->setText(QApplication::translate("UOMediaPlayerV3Class", "\346\232\202\345\201\234", nullptr));
        UIStop->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\201\234\346\255\242", nullptr));
        UIFastFoward->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\277\253\350\277\233", nullptr));
        UIFastReverse->setText(QApplication::translate("UOMediaPlayerV3Class", "\345\277\253\351\200\200", nullptr));
        UISpeedUp->setText(QApplication::translate("UOMediaPlayerV3Class", "\346\222\255\346\224\276\351\200\237\345\272\246+", nullptr));
        UISpeedDown->setText(QApplication::translate("UOMediaPlayerV3Class", "\346\222\255\346\224\276\351\200\237\345\272\246-", nullptr));
        UIVolumeUp->setText(QApplication::translate("UOMediaPlayerV3Class", "\351\237\263\351\207\217+", nullptr));
        label->setText(QApplication::translate("UOMediaPlayerV3Class", "00:00/05:14", nullptr));
        UIVolumeUp_2->setText(QApplication::translate("UOMediaPlayerV3Class", "\351\237\263\351\207\217-", nullptr));
        label_2->setText(QApplication::translate("UOMediaPlayerV3Class", "\351\237\263\351\207\217\357\274\23285", nullptr));
        UIMute->setText(QApplication::translate("UOMediaPlayerV3Class", "\351\235\231\351\237\263", nullptr));
        label_3->setText(QApplication::translate("UOMediaPlayerV3Class", "\346\222\255\346\224\276\351\200\237\345\272\246\357\274\2321.0x", nullptr));
        menu->setTitle(QApplication::translate("UOMediaPlayerV3Class", "\346\211\223\345\274\200", nullptr));
        menu_2->setTitle(QApplication::translate("UOMediaPlayerV3Class", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QApplication::translate("UOMediaPlayerV3Class", "\350\256\276\347\275\256", nullptr));
        menu_4->setTitle(QApplication::translate("UOMediaPlayerV3Class", "\345\205\263\344\272\216", nullptr));
        menu_5->setTitle(QApplication::translate("UOMediaPlayerV3Class", "\346\222\255\346\224\276\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UOMediaPlayerV3Class: public Ui_UOMediaPlayerV3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UOMEDIAPLAYERV3_H
