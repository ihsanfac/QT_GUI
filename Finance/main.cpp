#include <QApplication> //Links
#include "buttons.h" //Header with bottom right buttons
#include <verticalbox.h>
#include <QPushButton> //Buttons
#include "window.h" //Header with window creation
#include <QSlider>
#include <QProgressBar>
#include <mainwindow.h>

int main (int argc, char **argv)
{
    QApplication app (argc, argv);
    //Bottom right buttons ---------------------------------------
//    Buttons window;

//    window.resize(290, 170);
//    window.setWindowTitle("Buttons");
//    window.show();

    //VerticalBox ----------------------------------------------

//    VerticalBox window;

//    window.resize(240, 230);
//    window.setWindowTitle("VerticalBox");
//    window.show();

    //Progress bar -------------------------------------------------

//    //Container window
//    QWidget window;
//    window.setFixedSize(200, 80);

//    //Progress bar, range of 100
//    QProgressBar *progressBar = new QProgressBar (&window);
//    progressBar->setRange(0, 100);//Sets range
//    progressBar->setValue(0);
//    progressBar->setGeometry(10, 10, 180, 30);

//    //Create hori slider
//    QSlider *slider = new QSlider (&window);
//    slider->setOrientation (Qt::Horizontal);
//    slider->setRange(0, 100);
//    slider->setValue(0);
//    slider->setGeometry(10, 40, 180, 30);

//    window.show();

//    //Connects slider to progress bar
//    QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));


    //fourth attempt
    MainWindow w;
    w.show();

    return app.exec();
}
