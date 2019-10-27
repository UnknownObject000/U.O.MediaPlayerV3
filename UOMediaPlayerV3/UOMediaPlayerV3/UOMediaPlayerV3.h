#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_UOMediaPlayerV3.h"
#include "AboutDlg.h"

class UOMediaPlayerV3 : public QMainWindow
{
	Q_OBJECT

public:
	UOMediaPlayerV3(QWidget *parent = Q_NULLPTR);

private:
	Ui::UOMediaPlayerV3Class ui;
	void MenuInit();

private slots:
	//function naming:
	//type UIEventFor(...);
	//exp: void UIClickedPause();

	void UIClickedOpenVA();
	void UIClickedOpenPicture();
	void UIClickedPlay();
	void UIClickedPause();
	void UIClickedStop();
	void UIClickedFastForward();
	void UIClickedFastReverse();
	void UIClickedVolumeUp();
	void UIClickedVolumeDown();
	void UIClickedMute();
	void UIClickedSpeedUp();
	void UIClickedSpeedDown();
	void UIClickedFullScreen();
	void UIClickedOutput();
	void UIClickedChangeFormat();
	void UIClickedEdit();
	void UIClickedPrintFarme();
	void UIClickedPlaySettings();
	void UIClickedImageSettings();
	void UIClickedOutputSettings();
	void UIClickedAbout();
	void UIClickedOSInfo();
};
