#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Client.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_u_listenButton_clicked();

private:
    Ui::MainWindow *ui;
    Client client;

    QHash<float, QList<Spot3DCoordinate> > spot;
    QHash<float, QList<int> > spotOrder;
    SpotSonicationParam parameter;
};

#endif // MAINWINDOW_H
