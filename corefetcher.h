#ifndef COREFETCHER_H
#define COREFETCHER_H

#include <QDialog>

namespace Ui {
class corefetcher;
}

class corefetcher : public QDialog
{
    Q_OBJECT

public:
    explicit corefetcher(QWidget *parent = nullptr);
    ~corefetcher();

private:
    Ui::corefetcher *ui;
};

#endif // COREFETCHER_H
