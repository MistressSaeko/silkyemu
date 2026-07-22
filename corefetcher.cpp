#include "corefetcher.h"
#include "ui_corefetcher.h"

corefetcher::corefetcher(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::corefetcher)
{
    ui->setupUi(this);
}

corefetcher::~corefetcher()
{
    delete ui;
}
