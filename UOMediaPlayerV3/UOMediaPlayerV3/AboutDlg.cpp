#include "AboutDlg.h"

AboutDlg::AboutDlg()
{
	ui.setupUi(this);
}

void AboutDlg::UIDLGClickedOk()
{
	this->close();
}