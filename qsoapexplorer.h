#ifndef QSOAPEXPLORER_H
#define QSOAPEXPLORER_H

#include <QMainWindow>
#include <QHttp>
#include "qtsoap.h"

class QTreeWidgetItem;

namespace Ui {
    class QSoapExplorer;
}

class QSoapExplorer : public QMainWindow {
    Q_OBJECT
public:
    QSoapExplorer(QWidget *parent = 0);
    ~QSoapExplorer();
    QtSoapMessage request;

public slots:
    void getWsdl();
    void parseWsdl();
    void buildOperationsList();
    void itemActivated(QTreeWidgetItem * item);
protected:
    void changeEvent(QEvent *e);

private:
    Ui::QSoapExplorer *ui;

    QtSoapHttpTransport soaptrans;

    QHttp http;
    int httpConnId;

    QXmlStreamReader xml;
    QString operation;
};

#endif // QSOAPEXPLORER_H
