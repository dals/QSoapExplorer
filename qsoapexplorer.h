#ifndef QSOAPEXPLORER_H
#define QSOAPEXPLORER_H

#include <QMainWindow>

namespace Ui {
    class QSoapExplorer;
}

class QSoapExplorer : public QMainWindow {
    Q_OBJECT
public:
    QSoapExplorer(QWidget *parent = 0);
    ~QSoapExplorer();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::QSoapExplorer *ui;
};

#endif // QSOAPEXPLORER_H
