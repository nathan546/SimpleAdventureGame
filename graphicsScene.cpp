#include <QtWidgets>
#include "graphicsScene.h"
#include "room.h"
#include "monster.h"

extern Room * currentRoom;
extern GraphicsScene * s;
extern Room rooms[15];
extern QTimer timer;
extern QTimer timer2;
extern Monster * monsters[100];
extern int monsterCount;

void updateDifficulty(){
    timer.stop();
    switch(s->difficulty){
        case 0:
            timer.start(225);
            break;
        case 1:
            timer.start(150);
            break;
        case 2:
            timer.start(100);
            break;
    }
}

void gameOver(){
    timer.stop();
    timer2.stop();
    s->active = 0;
    QPixmap pixmap(":/images/youlose.png");
    QGraphicsPixmapItem * item = s->addPixmap(pixmap);
    item->setPos(-350,-50);
}

void gameWin(){
    timer.stop();
    timer2.stop();
    s->active = 0;
    QPixmap pixmap(":/images/youwin.png");
    QGraphicsPixmapItem * item = s->addPixmap(pixmap);
    item->setPos(-250,-50);
}

//Decrement health bar
void decHealthBar(){
    if(s->immune == 0){
        s->immune = 30;
        s->health--;
        updateHealthBar();
        if(s->health <= 0){
            gameOver();
        }
    }
}

//Add boots to UI
void updateBoots(){
    if(s->boots){
        QPixmap pixmap(":/images/fireboots.png");
        QGraphicsPixmapItem* item = s->addPixmap(pixmap);
        item->setPos(380, 260);
        item->setZValue(item->zValue() + 100);
    }
}

void updateSnorkle(){
    if(s->snorkle){
        QPixmap pixmap(":/images/snorkle.png");
        QGraphicsPixmapItem* item = s->addPixmap(pixmap);
        item->setPos(350, 260);
        item->setZValue(item->zValue() + 100);
    }
}

void updateIceBoots(){
    if(s->iceBoots){
        QPixmap pixmap(":/images/iceboots.png");
        QGraphicsPixmapItem* item = s->addPixmap(pixmap);
        item->setPos(320, 260);
        item->setZValue(item->zValue() + 100);
    }
}

//Update health bar
void updateHealthBar(){
    int x = -280;
    for(int i = 5; i > 0; i--){
        QGraphicsRectItem* item = new QGraphicsRectItem(x,260,40,25);
        if(s->health >= i){
            item->setBrush(QBrush(Qt::red));
        }else{
            item->setBrush(QBrush(Qt::white));
        }
        s->addItem(item);
        item->setZValue(item->zValue() + 100);
        x-=40;
    }
}

//Update key graphic
void updateKeyCount(){
    char temp[22];
    sprintf(temp, "x%d", s->keyCount);
    s->keys->setPlainText(temp);
}

//Check if player allowed to move
bool canMove(int dir){
    int val = currentRoom->layout[dir + (int) (30*(s->you->y()/30 + 8) + s->you->x()/30 + 15)];
    if(val == 1){
        return false;
    }else if(isLocked(val)){
        if(s->keyCount <= 0){
            return false;
        }else{
            s->keyCount--;
            currentRoom->doorsLocked[val] = 0;
            return true;
        }
    }else if(val == 5 && !s->boots){
        decHealthBar();
        return false;
    }else if(val == 8 && !s->snorkle){
        decHealthBar();
        return false;
    }else if(val == 10 && !s->iceBoots){
        decHealthBar();
        return false;
    }
    return true;
}

//Update the room after player movement
void updateRoom(){
    int val = currentRoom->layout[ (int) (30*(s->you->y()/30 + 8) + s->you->x()/30 + 15) ];

    if(isDoor(val) && !isLocked(val)){
        s->clear();
        currentRoom = currentRoom->doors[val];
        currentRoom->renderRoom();
        QPixmap pixmap(":/images/you-left.png");
        s->you = s->addPixmap(pixmap);
        s->you->setPos(30*(currentRoom->startPosX[val]-15), 30*(currentRoom->startPosY[val]-8));
    }else if(val == 4 && !currentRoom->keysTaken[val]){
        currentRoom->keysTaken[val] = 1;
        s->removeItem(currentRoom->keys[val]);
        s->keyCount++;
        updateKeyCount();
    }else if(val == 6){
        s->removeItem(currentRoom->items[val]);
        s->boots = 1;
        updateBoots();
    }else if(val == 9){
        s->removeItem(currentRoom->items[val]);
        s->snorkle = 1;
        updateSnorkle();
    }else if(val == 11){
        s->removeItem(currentRoom->items[val]);
        s->iceBoots = 1;
        updateIceBoots();
    }else if(val == 7){
        gameWin();
    }
}

void GraphicsScene::advancePlayer(){
    if(s->immune != 0){
        s->immune--;
    }

    QList<QGraphicsItem *> list = this->collidingItems(you);

    for(int i = 0; i < monsterCount; i++){
        if(list.contains(monsters[i])){
            decHealthBar();
            return;
        }
    }

}

void GraphicsScene::setEasy(){
    difficulty = 0;
    updateDifficulty();
}

void GraphicsScene::setMedium(){
    difficulty = 1;
    updateDifficulty();
}

void GraphicsScene::setHard(){
    difficulty = 2;
    updateDifficulty();
}

void GraphicsScene::restartClicked(){
    timer.stop();
    timer2.stop();

    clear();
    initializeGame();

    timer2.start(50);
}

//Do keyboard control and player movement
void GraphicsScene::keyPressEvent (QKeyEvent *qkeyevent){
    if(!s->active){
        return;
    }

    QPixmap pixmap1(":/images/you-left.png");
    QPixmap pixmap2(":/images/you-right.png");
    QPixmap pixmap3(":/images/you-up.png");
    QPixmap pixmap4(":/images/you-down.png");

    switch (qkeyevent->key()){
        case Qt::Key_Up:
            if(canMove(-30)){
                you->setPixmap(pixmap3);
                you->setPos(you->x(), you->y()-30);
            }
            break;
        case Qt::Key_Down:
            if(canMove(30)){
                you->setPixmap(pixmap4);
                you->setPos(you->x(), you->y()+30);
            }
            break;
        case Qt::Key_Left:
            if(canMove(-1)){
                you->setPixmap(pixmap1);
                you->setPos(you->x()-30, you->y());
            }
            break;
        case Qt::Key_Right:
            if(canMove(1)){
                you->setPixmap(pixmap2);
                you->setPos(you->x()+30, you->y());
            }
            break;
        default:
            qkeyevent->ignore();
    }
    updateRoom();
    advancePlayer();
}

void GraphicsScene::addItem(QGraphicsItem *item){
    QGraphicsScene::addItem(item);
    QGIA[QGI] = item;
    QGI++;
}

QGraphicsPixmapItem * GraphicsScene::addPixmap(const QPixmap &pixmap){
    QGraphicsPixmapItem * item = QGraphicsScene::addPixmap(pixmap);
    QGPIA[QGPI] = item;
    QGPI++;
    return item;
}

void GraphicsScene::clear(){
    for(int i = 0; i < QGI; i++){
        if(QGIA[i] != whiteArea){
            removeItem(QGIA[i]);
        }
    }
    for(int i = 0; i < QGPI; i++){
        removeItem(QGPIA[i]);
    }
    s->QGI = 0;
    s->QGPI = 0;
}
