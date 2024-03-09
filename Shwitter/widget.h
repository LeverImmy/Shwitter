#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_registerButton_clicked();

    void on_backButton_1_clicked();

    void on_backButton_2_clicked();

    void on_helpButton_clicked();

    void on_loginButton_clicked();

    void on_confirmButton_clicked();

    void on_logoutButton_clicked();

private:
    Ui::Widget *ui;
    QString global_user_uuid;
    QSqlDatabase db;
};
#endif // WIDGET_H