#include "filedialog.h"
#include "ui_filedialog.h"

FileDialog::FileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileDialog)
{
    ui->setupUi(this);
    model=new QFileSystemModel(this); //QFileSystemModel提供单独线程，推荐使用
    model->setRootPath(QDir::currentPath()); //设置根目录
    ui->treeView->setModel(model); //设置数据模型
    ui->listView->setModel(model); //设置数据模型
    ui->tableView->setModel(model); //设置数据模型
    //信号与槽关联，treeView单击时，其目录设置为listView和tableView的根节点
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),
            ui->listView,SLOT(setRootIndex(QModelIndex)));
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),
            ui->tableView,SLOT(setRootIndex(QModelIndex)));
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),
            this,SLOT(on_treeView_clicked(QModelIndex)));
}

FileDialog::~FileDialog()
{
    delete ui;
}
