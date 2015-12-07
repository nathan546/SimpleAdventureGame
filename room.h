#ifndef ROOM_H
#define ROOM_H

#include <QGraphicsItem>
#include "graphicsScene.h"
#include <map>

using namespace std;

class Room
{
	public:
        void renderRoom();
        int * layout;

        map<int, Room*> doors;
        map<int, int> doorsLocked;
        map<int, int> startPosX;
        map<int, int> startPosY;
        map<int, QGraphicsPixmapItem*> keys;
        map<int, int> keysTaken;
        map<int, QGraphicsPixmapItem*> items;
	protected:

	private:
};

bool isDoor(int val);
bool isLocked(int val);
void initializeGame();
#endif
