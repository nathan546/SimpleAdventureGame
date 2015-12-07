#ifndef MONSTER_H
#define MONSTER_H

#include <QGraphicsItem>

class Monster : public QGraphicsPixmapItem
{

public:
    int dir;
    int tick;
    void setPicture();

protected:
    void advance(int step);

};

#endif
