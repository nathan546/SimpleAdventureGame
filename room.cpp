#include "room.h"
#include "monster.h"
#include "graphicsScene.h"
#include "layout.h"

Room rooms[15];
Room * currentRoom;
Monster * monsters[100];
int monsterCount;
int doors[6];

extern GraphicsScene * s;

//Check if door is locked
bool isLocked(int val){
    if(currentRoom->doorsLocked[val]){
        return true;
    }
    return false;
}

//Check if val is a door
bool isDoor(int val){
    for(int i = 0; i < 6; i++){
        if(doors[i] == val){
            return true;
        }
    }
    return false;
}

//Render a current room
void Room::renderRoom(){
    QPixmap pixmap(":/images/wall.png");
    QPixmap pixmap2(":/images/door.png");
    QPixmap pixmap3(":/images/doorlocked.png");
    QPixmap pixmap4(":/images/key.png");
    QPixmap pixmap5(":/images/fire.png");
    QPixmap pixmap6(":/images/fireboots.png");
    QPixmap pixmap7(":/images/snorkle.png");
    QPixmap pixmap8(":/images/water.png");
    QPixmap pixmap9(":/images/iceboots.png");
    QPixmap pixmap10(":/images/ice.png");
    QPixmap pixmap11(":/images/treasure.png");

    monsterCount = 0;
    int x,y =-240;
    for(int i = 0; i < 16; i++){
        x = -450;
        for(int j = 0; j < 30; j++){
            int val = layout[i*30 + j];

            if(val == 1){
                QGraphicsPixmapItem* item = s->addPixmap(pixmap);
                item->setPos(x,y);
            }else if(isDoor(val)){
                if(isLocked(val)){
                    QGraphicsPixmapItem* item = s->addPixmap(pixmap3);
                    item->setPos(x,y);
                }else{
                    QGraphicsPixmapItem* item = s->addPixmap(pixmap2);
                    item->setPos(x,y);
                }
            }else if(val == M){
                Monster * monster = new Monster;
                monster->setPos(x,y);
                monster->dir = 2;
                monster->tick = 0;
                monster->setPicture();
                s->addItem(monster);
                monsters[monsterCount] = monster;
                monsterCount++;
            }else if(val == K && !keysTaken[val]){
                QGraphicsPixmapItem* item = s->addPixmap(pixmap4);
                item->setPos(x,y);
                keys[val] = item;
            }else if(val == F){
                QGraphicsPixmapItem* item = s->addPixmap(pixmap5);
                item->setPos(x,y);
            }else if(val == FB && s->boots == 0){
                QGraphicsPixmapItem* item = s->addPixmap(pixmap6);
                item->setPos(x,y);
                items[val] = item;
            }else if(val == S && s->snorkle == 0){
                QGraphicsPixmapItem* item = s->addPixmap(pixmap7);
                item->setPos(x,y);
                items[val] = item;
           }else if(val == IB && s->iceBoots == 0){
                QGraphicsPixmapItem* item = s->addPixmap(pixmap9);
                item->setPos(x,y);
                items[val] = item;
           }else if(val == W){
                QGraphicsPixmapItem* item = s->addPixmap(pixmap8);
                item->setPos(x,y);
           }else if(val == I){
                QGraphicsPixmapItem* item = s->addPixmap(pixmap10);
                item->setPos(x,y);
           }else if(val == WT){
                QGraphicsPixmapItem* item = s->addPixmap(pixmap11);
                item->setPos(x,y);
           }
            x += 30;
        }
        y +=30;
    }

    //UI
    QGraphicsPixmapItem * item = s->addPixmap(pixmap4);
    item->setPos(410, 265);
    s->keys = new QGraphicsTextItem;
    s->keys->setPos(420,255);
    s->keys->setScale(1);
    s->addItem(s->keys);
    item->setZValue(item->zValue() + 100);
    s->keys->setZValue(s->keys->zValue() + 100);

    updateKeyCount();

    updateHealthBar();

    updateBoots();
    updateIceBoots();
    updateSnorkle();
}

//Propagate all the rooms, links, items, etc
void initializeGame(){
    //Initialize list of doors
    doors[0] = D6;
    doors[1] = D5;
    doors[2] = D4;
    doors[3] = D3;
    doors[4] = D2;
    doors[5] = D1;

    //Intialize rooms
    rooms[0].layout = (int*)layout1;
    rooms[1].layout = (int*)layout2;
    rooms[2].layout = (int*)layout3;
    rooms[3].layout = (int*)layout4;
    rooms[4].layout = (int*)layout5;
    rooms[5].layout = (int*)layout6;
    rooms[6].layout = (int*)layout7;
    rooms[7].layout = (int*)layout8;


    rooms[0].startPosX[D6] = 26;
    rooms[0].startPosY[D6] = 14;

    rooms[0].startPosX[D5] = 3;
    rooms[0].startPosY[D5] = 14;

    rooms[0].startPosX[D4] = 28;
    rooms[0].startPosY[D4] = 4;

    rooms[0].startPosX[D3] = 1;
    rooms[0].startPosY[D3] = 11;

    rooms[0].startPosX[D2] = 26;
    rooms[0].startPosY[D2] = 1;

    rooms[0].startPosX[D1] = 3;
    rooms[0].startPosY[D1] = 1;

    rooms[1].startPosX[D4] = 1;
    rooms[1].startPosY[D4] = 7;

    rooms[1].startPosX[D1] = 28;
    rooms[1].startPosY[D1] = 7;

    rooms[2].startPosX[D1] = 1;
    rooms[2].startPosY[D1] = 7;

    rooms[3].startPosX[D6] = 1;
    rooms[3].startPosY[D6] = 14;

    rooms[4].startPosX[D5] = 1;
    rooms[4].startPosY[D5] = 7;

    rooms[5].startPosX[D3] = 28;
    rooms[5].startPosY[D3] = 1;

    rooms[6].startPosX[D2] = 26;
    rooms[6].startPosY[D2] = 1;

    rooms[7].startPosX[D1] = 3;
    rooms[7].startPosY[D1] = 1;

    rooms[0].doors[D6] = &rooms[3];
    rooms[0].doors[D5] = &rooms[4];
    rooms[0].doors[D4] = &rooms[1];
    rooms[0].doors[D3] = &rooms[5];
    rooms[0].doors[D2] = &rooms[6];
    rooms[0].doors[D1] = &rooms[7];

    rooms[1].doors[D4] = &rooms[0];
    rooms[1].doors[D1] = &rooms[2];
    rooms[2].doors[D1] = &rooms[1];
    rooms[3].doors[D6] = &rooms[0];
    rooms[4].doors[D5] = &rooms[0];
    rooms[5].doors[D3] = &rooms[0];
    rooms[6].doors[D2] = &rooms[0];
    rooms[7].doors[D1] = &rooms[0];

    rooms[0].doorsLocked[D5] = 1;
    rooms[0].doorsLocked[D1] = 1;
    rooms[0].doorsLocked[D2] = 1;

    rooms[3].keysTaken[4] = 0;
    rooms[5].keysTaken[4] = 0;
    rooms[1].keysTaken[4] = 0;

    s->keyCount = 0;
    s->health = 5;
    s->immune = 0;
    s->boots = 0;
    s->snorkle = 0;
    s->iceBoots = 0;
    s->active = 1;
    currentRoom = &rooms[0];
    rooms[0].renderRoom();

    QPixmap pixmap(":/images/you-left.png");
    s->you = s->addPixmap(pixmap);
    s->you->setPos(30*(15-15), 30*(14-8));

    updateDifficulty();
}
