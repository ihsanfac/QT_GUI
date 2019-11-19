#include "window.h"
#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) :
    QWidget(parent)
{
    //Set size of window
    setFixedSize (300, 200);

    //Create and position button
    m_button = new QPushButton ("hello", this);
    m_button->setGeometry(50, 50, 100, 100);

    //Connection
    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
}
