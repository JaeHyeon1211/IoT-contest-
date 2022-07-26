#include "tab5mysql.h"
#include "ui_tab5mysql.h"

Tab5Mysql::Tab5Mysql(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab5Mysql)
{
    ui->setupUi(this);
    qDebug() << "드라이버" <<QSqlDatabase::drivers();
    qDebug() << QCoreApplication::libraryPaths();
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("10.10.141.188");
    db.setUserName("iot");
    db.setPassword("kcci");
    db.setDatabaseName("vehicle_info");
    bool ok =db.open();
    if(ok)
    {
        qDebug() << "Database open\n";
    }
    else
        qDebug() << "Database not open\n" ;

    model = new QSqlTableModel(this);
    model->setTable("now_stat");
    ui->pTvNowStatDb->setModel(model);

    connect(ui->pPbReport,SIGNAL(clicked()),this,SLOT(slottab5database()));
}

Tab5Mysql::~Tab5Mysql()
{
    delete ui;
}

void Tab5Mysql::slottab5database()
{
    model->select();
}
