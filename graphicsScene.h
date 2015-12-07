#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QtWidgets>

class GraphicsScene : public QGraphicsScene {
    Q_OBJECT

    public:
        QGraphicsPixmapItem * you;
        QGraphicsTextItem * keys;
        QGraphicsItem * whiteArea;
        int keyCount;
        int health;
        int immune;
        bool boots;
        bool snorkle;
        bool iceBoots;
        bool active;
        int difficulty;

        void keyPressEvent (QKeyEvent *qkeyevent);

        void addItem(QGraphicsItem *item);
        QGraphicsPixmapItem * addPixmap(const QPixmap &pixmap);
        void clear();


        QGraphicsItem * QGIA[500];
        QGraphicsPixmapItem * QGPIA[500];
        int QGI;
        int QGPI;

     public slots:
        void restartClicked();
        void advancePlayer();
        void setEasy();
        void setMedium();
        void setHard();

};

bool canMove(int dir);
void updateKeyCount();
void updateHealthBar();
void updateWhiteArea();
void updateDifficulty();
void updateBoots();
void updateIceBoots();
void updateSnorkle();
void decHealthBar();
void gameOver();
void gameWin();

#endif
