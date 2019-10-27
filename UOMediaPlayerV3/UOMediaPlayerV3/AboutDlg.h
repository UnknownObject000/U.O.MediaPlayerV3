#pragma once
#pragma once

#include <qwidget.h>
#include <QtWidgets/qdialog.h>
#include "ui_AboutDlg.h"

class AboutDlg : public QDialog
{
	Q_OBJECT

public:
	AboutDlg();

private:
	Ui::AboutDlg ui;

private slots:
	void UIDLGClickedOk();
};
