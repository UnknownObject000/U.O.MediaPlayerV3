#include "UOMediaPlayerV3.h"
#include "UString.h"

UOMediaPlayerV3::UOMediaPlayerV3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	MenuInit();
}

void Report(UString func)
{
	std::string str = "这里是" + func.std_str() + "函数，您所请求的功能暂未实现。";
	MessageBoxA(NULL, str.c_str(), "UOMediaPlayerV3", MB_OK | MB_ICONINFORMATION);
	return;
}

void UOMediaPlayerV3::MenuInit()
{
	QObject::connect(ui.MenuOpenVA, SIGNAL(triggered()), this, SLOT(UIClickedOpenVA()));
	QObject::connect(ui.MenuOpenImg, SIGNAL(triggered()), this, SLOT(UIClickedOpenPicture()));
	QObject::connect(ui.MenuOutput, SIGNAL(triggered()), this, SLOT(UIClickedOutput()));
	QObject::connect(ui.MenuEdit, SIGNAL(triggered()), this, SLOT(UIClickedEdit()));
	QObject::connect(ui.MenuFormat, SIGNAL(triggered()), this, SLOT(UIClickedChangeFormat()));
	QObject::connect(ui.MenuPlaySettings, SIGNAL(triggered()), this, SLOT(UIClickedPlaySettings()));
	QObject::connect(ui.MenuOutputSettings, SIGNAL(triggered()), this, SLOT(UIClickedOutputSettings()));
	QObject::connect(ui.MenuImgSettings, SIGNAL(triggered()), this, SLOT(UIClickedImageSettings()));
	QObject::connect(ui.MenuPlay, SIGNAL(triggered()), this, SLOT(UIClickedPlay()));
	QObject::connect(ui.MenuPause, SIGNAL(triggered()), this, SLOT(UIClickedPause()));
	QObject::connect(ui.MenuStop, SIGNAL(triggered()), this, SLOT(UIClickedStop()));
	QObject::connect(ui.MenuFF, SIGNAL(triggered()), this, SLOT(UIClickedFastForward()));
	QObject::connect(ui.MenuFB, SIGNAL(triggered()), this, SLOT(UIClickedFastReverse()));
	QObject::connect(ui.MenuFaster, SIGNAL(triggered()), this, SLOT(UIClickedSpeedUp()));
	QObject::connect(ui.MenuSlower, SIGNAL(triggered()), this, SLOT(UIClickedSpeedDown()));
	QObject::connect(ui.MenuFullScreen, SIGNAL(triggered()), this, SLOT(UIClickedFullScreen()));
	QObject::connect(ui.MenuAbout, SIGNAL(triggered()), this, SLOT(UIClickedAbout()));
	QObject::connect(ui.MenuOpenSource, SIGNAL(triggered()), this, SLOT(UIClickedOSInfo()));
	return;
}

void UOMediaPlayerV3::UIClickedOpenVA()
{
	Report("UIClickedOpenVA");
}

void UOMediaPlayerV3::UIClickedOpenPicture()
{
	Report("UIClickedOpenPicture");
}

void UOMediaPlayerV3::UIClickedPlay()
{
	Report("UIClickedPlay");
}

void UOMediaPlayerV3::UIClickedPause()
{
	Report("UIClickedPause");
}

void UOMediaPlayerV3::UIClickedStop()
{
	Report("UIClickedStop");
}

void UOMediaPlayerV3::UIClickedFastForward()
{
	Report("UIClickedFastForward");
}

void UOMediaPlayerV3::UIClickedFastReverse()
{
	Report("UIClickedFastReverse");
}

void UOMediaPlayerV3::UIClickedVolumeUp()
{
	Report("UIClickedVolumeUp");
}

void UOMediaPlayerV3::UIClickedVolumeDown()
{
	Report("UIClickedVolumeDown");
}

void UOMediaPlayerV3::UIClickedMute()
{
	Report("UIClickedMute");
}

void UOMediaPlayerV3::UIClickedSpeedUp()
{
	Report("UIClickedSpeedUp");
}

void UOMediaPlayerV3::UIClickedSpeedDown()
{
	Report("UIClickedSpeedDown");
}

void UOMediaPlayerV3::UIClickedFullScreen()
{
	Report("UIClickedFullScreen");
}

void UOMediaPlayerV3::UIClickedOutput()
{
	Report("UIClickedOutput");
}

void UOMediaPlayerV3::UIClickedChangeFormat()
{
	Report("UIClickedChangeFormat");
}

void UOMediaPlayerV3::UIClickedEdit()
{
	Report("UIClickedEdit");
}

void UOMediaPlayerV3::UIClickedPrintFarme()
{
	Report("UIClickedPrintFarme");
}

void UOMediaPlayerV3::UIClickedPlaySettings()
{
	Report("UIClickedPlaySettings");
}

void UOMediaPlayerV3::UIClickedImageSettings()
{
	Report("UIClickedImageSettings");
}

void UOMediaPlayerV3::UIClickedOutputSettings()
{
	Report("UIClickedOutputSettings");
}

void UOMediaPlayerV3::UIClickedAbout()
{
	AboutDlg about;
	about.exec();
	return;
}

void UOMediaPlayerV3::UIClickedOSInfo()
{
	Report("UIClickedOSInfo");
}
