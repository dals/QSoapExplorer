/********************************************************************************
** Form generated from reading UI file 'qsoapexplorer.ui'
**
** Created: Fri Apr 2 15:21:43 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSOAPEXPLORER_H
#define UI_QSOAPEXPLORER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_QSoapExplorer
{
public:
    QWidget *centralWidget;
    QLineEdit *iUrl;
    QLabel *lUrlLabel;
    QWebView *vWeb;
    QPushButton *bGetWsdl;
    QPushButton *bExecScenario;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QSoapExplorer)
    {
        if (QSoapExplorer->objectName().isEmpty())
            QSoapExplorer->setObjectName(QString::fromUtf8("QSoapExplorer"));
        QSoapExplorer->resize(734, 564);
        centralWidget = new QWidget(QSoapExplorer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        iUrl = new QLineEdit(centralWidget);
        iUrl->setObjectName(QString::fromUtf8("iUrl"));
        iUrl->setGeometry(QRect(60, 10, 551, 23));
        lUrlLabel = new QLabel(centralWidget);
        lUrlLabel->setObjectName(QString::fromUtf8("lUrlLabel"));
        lUrlLabel->setGeometry(QRect(20, 13, 61, 20));
        vWeb = new QWebView(centralWidget);
        vWeb->setObjectName(QString::fromUtf8("vWeb"));
        vWeb->setGeometry(QRect(340, 40, 371, 441));
        vWeb->setUrl(QUrl("about:blank"));
        bGetWsdl = new QPushButton(centralWidget);
        bGetWsdl->setObjectName(QString::fromUtf8("bGetWsdl"));
        bGetWsdl->setGeometry(QRect(620, 10, 97, 22));
        bExecScenario = new QPushButton(centralWidget);
        bExecScenario->setObjectName(QString::fromUtf8("bExecScenario"));
        bExecScenario->setGeometry(QRect(340, 490, 371, 22));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 40, 321, 321));
        QSoapExplorer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QSoapExplorer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 734, 19));
        QSoapExplorer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QSoapExplorer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QSoapExplorer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QSoapExplorer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QSoapExplorer->setStatusBar(statusBar);

        retranslateUi(QSoapExplorer);

        QMetaObject::connectSlotsByName(QSoapExplorer);
    } // setupUi

    void retranslateUi(QMainWindow *QSoapExplorer)
    {
        QSoapExplorer->setWindowTitle(QApplication::translate("QSoapExplorer", "QSoapExplorer", 0, QApplication::UnicodeUTF8));
        lUrlLabel->setText(QApplication::translate("QSoapExplorer", "Url:", 0, QApplication::UnicodeUTF8));
        bGetWsdl->setText(QApplication::translate("QSoapExplorer", "Get WSDL", 0, QApplication::UnicodeUTF8));
        bExecScenario->setText(QApplication::translate("QSoapExplorer", "Execute", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QSoapExplorer: public Ui_QSoapExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSOAPEXPLORER_H
