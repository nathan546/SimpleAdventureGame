#include "monster.h"
#include <QGraphicsScene>
#include <QPainter>
#include <QStyleOption>
#include <math.h>
#include "graphicsScene.h"
#include "room.h"

extern GraphicsScene * s;
extern Room * currentRoom;

bool canMove2(int x, int y){
    int val = currentRoom->layout[(int) (30*(y/30 + 8) + x/30 + 15) ];
    if(val != 1 && !isDoor(val) && val != 3 && val != 5 && val != 8 && val != 10){
        return true;
    }
    return false;
}

void Monster::setPicture(){

    QPixmap pixmap1(":/images/enemy-left.png");
    QPixmap pixmap2(":/images/enemy-right.png");
    QPixmap pixmap3(":/images/enemy-up.png");
    QPixmap pixmap4(":/images/enemy-down.png");

    switch(dir){
        case 0:
            setPixmap(pixmap4);
            break;
        case 1:
            setPixmap(pixmap3);
            break;
        case 2:
            setPixmap(pixmap2);
            break;
        case 3:
            setPixmap(pixmap1);
            break;
    }


}

void Monster::advance(int step)
{
    if (!step)
        return;

    if(dir == 0){
        if(canMove2(x(), y()+30)){
            setPos(x(), y()+30);
        }else{
            if(canMove2(x()+30, y())){
                setPos(x()+30, y());
                dir = 2;
            }else if(canMove2(x()-30, y())){
                setPos(x()-30, y());
                dir = 3;
            }else if(canMove2(x(), y()-30)){
                setPos(x(), y()-30);
                dir = 1;
            }
            setPicture();
        }
    }else if(dir == 1){
        if(canMove2(x(), y()-30)){
            setPos(x(), y()-30);
        }else{
            if(canMove2(x()+30, y())){
                setPos(x()+30, y());
                dir = 2;
            }
            else if(canMove2(x()-30, y())){
                setPos(x()-30, y());
                dir = 3;
            }
            else if(canMove2(x(), y()+30)){
                setPos(x(), y()+30);
                dir = 0;
            }
            setPicture();
        }
    }else if(dir == 2){
             if(canMove2(x()+30, y())){
                 setPos(x()+30, y());
             }else{
                 if(canMove2(x(), y()-30)){
                     setPos(x(), y()-30);
                     dir = 1;
                 }else if(canMove2(x(), y()+30)){
                     setPos(x(), y()+30);
                     dir = 0;
                 }else if(canMove2(x()-30, y())){
                     setPos(x()-30, y());
                     dir = 3;
                 }
                 setPicture();
             }
    }else if(dir == 3){
             if(canMove2(x()-30, y())){
                 setPos(x()-30, y());
             }else{
                 if(canMove2(x(), y()+30)){
                     setPos(x(), y()+30);
                     dir = 0;
                 }
                 else if(canMove2(x(), y()-30)){
                     setPos(x(), y()-30);
                     dir = 1;
                 }
                 else if(canMove2(x()+30, y())){
                     setPos(x()+30, y());
                     dir = 2;
                 }
                 setPicture();
             }
    }

}
