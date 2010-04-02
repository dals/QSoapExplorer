#include "qsoapexplorer.h"
#include "ui_qsoapexplorer.h"

QSoapExplorer::QSoapExplorer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QSoapExplorer),
    soaptrans(this)
{
    ui->setupUi(this);
    connect(ui->bGetWsdl,SIGNAL(clicked()), this, SLOT(getWsdl()));
    connect(ui->treeWidget, SIGNAL(itemActivated(QTreeWidgetItem*,int)),
            this, SLOT(itemActivated(QTreeWidgetItem*)));

    parseWsdl();
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

void QSoapExplorer::getWsdl()
{
    ui->treeWidget->clear();
    xml.clear();

    QUrl url(ui->iUrl->text());
    http.setHost(url.host());
    httpConnId = http.get(url.path());

//    xml.addData(http.readAll());
    qDebug()<<QString(url.host());
}

void QSoapExplorer::parseWsdl()
{
    QList<QTreeWidgetItem *> items;
    for (int i = 0; i < 10; ++i) {
         items.append(new QTreeWidgetItem((QTreeWidget*)0, QStringList(QString("item: %1").arg(i))));
     }
     ui->treeWidget->insertTopLevelItems(0, items);
}

void QSoapExplorer::buildOperationsList()
{

}

void QSoapExplorer::itemActivated(QTreeWidgetItem * item)
{
    qDebug()<<item->text(0);
}
