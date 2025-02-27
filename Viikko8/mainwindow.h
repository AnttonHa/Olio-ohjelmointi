#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime = 120;
    QTimer * pQTimer;
    Ui::MainWindow *ui;

private slots:
    void updateProgressBar();
    void setGameInfoText(QString T);
    void startHandler();
    void handlerTimer();
    void timer120Handler();
    void timer5Handler();
    void stopHandler();
    void player1Handler();
    void player2Handler();


};
#endif // MAINWINDOW_H
