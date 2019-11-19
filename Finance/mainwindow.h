#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots: // handlers for events
    void OnFileNew();
    void OnFileOpen();
    void OnFileSave();
};

#endif // MAINWINDOW_H
