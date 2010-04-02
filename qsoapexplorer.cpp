#include "qsoapexplorer.h"
#include "ui_qsoapexplorer.h"

QSoapExplorer::QSoapExplorer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QSoapExplorer)
{
    ui->setupUi(this);
}

QSoapExplorer::~QSoapExplorer()
{
    delete ui;
}

void QSoapExplorer::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
