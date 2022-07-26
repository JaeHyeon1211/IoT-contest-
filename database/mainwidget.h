#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <tab1socketclient.h>
#include <tab2database.h>
#include <qfilesocket.h>
#include <tab4onoff.h>
#include <tab5mysql.h>
#include <tab6parkinglotlog.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
    Tab1SocketClient *pTab1SocketClient;
    Tab2DataBase *ptab2database;
    QfileSocket *pqfilesocket;
    Tab4OnOff *pTab4OnOff;
    Tab5Mysql *pTab5Mysql;
    Tab6ParkinglotLog *pTab6ParkinglotLog;
};
#endif // MAINWIDGET_H
