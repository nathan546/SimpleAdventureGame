#include <QtWidgets>
#include "graphicsScene.h"
#include <math.h>
#include "monster.h"
#include "room.h"

GraphicsScene * s;
QTimer timer;
QTimer timer2;

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    GraphicsScene scene;
    s = &scene;
    scene.setItemIndexMethod(QGraphicsScene::NoIndex);

    QGraphicsView view(&scene);
    view.setRenderHint(QPainter::Antialiasing);
    view.setBackgroundBrush(QPixmap(":/images/background.png"));
    view.setCacheMode(QGraphicsView::CacheBackground);
    view.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    //view.setDragMode(QGraphicsView::ScrollHandDrag);
    view.setWindowTitle(QT_TRANSLATE_NOOP(QGraphicsView, "Simple Adventure Game"));
    view.resize(903, 543);
    view.show();

    QObject::connect(&timer, SIGNAL(timeout()), &scene, SLOT(advance()));
    s->difficulty = 0;
    s->QGI = 0;
    s->QGPI = 0;

    QObject::connect(&timer2, SIGNAL(timeout()), &scene, SLOT(advancePlayer()));
    timer2.start(50);

    initializeGame();


    QGraphicsRectItem * item = new QGraphicsRectItem(-450,240,900,60);
    item->setBrush(QBrush(Qt::white));
    s->addItem(item);
    s->whiteArea = item;

    QPushButton * restart = new QPushButton();
    restart->setGeometry(QRect(-200,250,80,35));
    restart->setText("Reset Game");
    s->addWidget(restart);
    QObject::connect(restart, SIGNAL(clicked()), s, SLOT(restartClicked()));

    QPushButton * easy = new QPushButton();
    easy->setGeometry(QRect(-80,250,80,35));
    easy->setText("Easy");
    s->addWidget(easy);
    QObject::connect(easy, SIGNAL(clicked()), s, SLOT(setEasy()));

    QPushButton * medium = new QPushButton();
    medium->setGeometry(QRect(0,250,80,35));
    medium->setText("Medium");
    s->addWidget(medium);
    QObject::connect(medium, SIGNAL(clicked()), s, SLOT(setMedium()));

    QPushButton * hard = new QPushButton();
    hard->setGeometry(QRect(80,250,80,35));
    hard->setText("Hard");
    s->addWidget(hard);
    QObject::connect(hard, SIGNAL(clicked()), s, SLOT(setHard()));

    return app.exec();
}

