#ifndef UITEST_H
#define UITEST_H

#include <QWidget>
#include<qlabel.h>
#include"mainwindow.h"
#include<qstring.h>
#include <QInputDialog>

namespace Ui {
class uitest;
}

class uitest : public QWidget
{
    Q_OBJECT

public:
    explicit uitest(MainWindow *main,QWidget *parent = nullptr);
    ~uitest();

private slots:
    void on_torank_clicked();
    void on_newgame_clicked();
    void on_leave_clicked();
    void setTitle(Player *player);
    void inputName();
private:

    Ui::uitest *ui;
    MainWindow *mainwindow;
    long long money;
    long long health;
    long long fame;
    QString title;
    QString name;
};

#endif // UITEST_H
