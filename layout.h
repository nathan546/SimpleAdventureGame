#ifndef LAYOUT_H
#define LAYOUT_H

#define D1 255   //Door
#define D2 254   //Door
#define D3 253   //Door
#define D4 252   //Door
#define D5 251   //Door
#define D6 250   //Door
#define M   2    //Monster
#define K   4    //Key
#define F   5    //Fire
#define FB  6    //Fire boots
#define WT  7    //Winning treasure box
#define W   8    //Water
#define S   9    //Snorkle
#define I   10   //Ice
#define IB  11  //Ice Boots

int layout1[30][16] = {1 ,1 ,1 ,D1,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,D2,1 ,1 ,1,
                       1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1,
                       1 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1,
                       1 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1,
                       1 ,0 ,F ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,D4,
                       1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1,
                       1 ,0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,1 ,0 ,1 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       D3,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,1 ,1 ,D5,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,D6,1 ,1 ,1};

int layout2[30][16] = {1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1,
                       1 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,3 ,M ,0 ,1 ,0 ,0 ,3 ,0 ,0 ,1 ,0 ,0 ,3 ,0 ,0 ,1 ,0 ,0 ,3 ,3 ,K ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,M ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,I ,I ,1,
                       D4,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,3 ,3 ,1 ,I ,I ,D1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,M ,0 ,1 ,0 ,0 ,1 ,M ,0 ,1 ,0 ,0 ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,3 ,3 ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,M ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,1 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,3 ,M ,0 ,1 ,0 ,0 ,3 ,M ,0 ,1 ,0 ,0 ,3 ,0 ,0 ,1 ,0 ,0 ,3 ,M ,0 ,1 ,I ,I ,1,
                       1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1};


int layout3[30][16] = {1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,M ,0 ,0 ,0 ,0 ,0 ,M ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,M ,0 ,M ,0 ,M ,3 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,3 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1,
                       1 ,0 ,M ,0 ,M ,0 ,3 ,0 ,3 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,3 ,0 ,WT,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,3 ,0 ,0 ,M ,0 ,0 ,0 ,3 ,0 ,3 ,0 ,3 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       D1,3 ,0 ,M ,0 ,0 ,3 ,0 ,3 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,M ,3 ,0 ,3 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,3 ,0 ,3 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,M ,0 ,0 ,3 ,0 ,3 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,3 ,0 ,3 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,M ,3 ,0 ,3 ,0 ,3 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,M ,0 ,M ,0 ,3 ,0 ,3 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,3 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,M ,0 ,M ,0 ,M ,3 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1};

int layout4[30][16] = {1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,1,
                       1 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,1,
                       1 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,3 ,0 ,1,
                       1 ,0 ,3 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,1,
                       1 ,0 ,3 ,0 ,3 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,3 ,0 ,1,
                       1 ,0 ,3 ,0 ,3 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,3 ,0 ,3 ,0 ,1,
                       1 ,0 ,3 ,0 ,3 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,K ,M ,0 ,0 ,0 ,0 ,3 ,0 ,3 ,0 ,3 ,0 ,3 ,0 ,1,
                       1 ,0 ,3 ,0 ,3 ,0 ,3 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,M ,3 ,0 ,3 ,0 ,3 ,0 ,1,
                       1 ,0 ,3 ,0 ,3 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,3 ,0 ,3 ,0 ,1,
                       1 ,0 ,3 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,3 ,0 ,3 ,0 ,1,
                       1 ,0 ,3 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,3 ,0 ,1,
                       1 ,0 ,3 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,1,
                       1 ,0 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,1,
                       1 ,D6,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1};


int layout5[30][16] = {1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1,
                       1 ,0 ,F ,0 ,M ,F ,0 ,0 ,F ,M ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,0 ,M ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,0 ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,0 ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,FB,1,
                       1 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,1,
                       D5,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,0 ,0 ,0 ,F ,0 ,0 ,0 ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,F ,M ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,M ,0 ,F ,0 ,0 ,F ,M ,0 ,F ,0 ,0 ,0 ,M ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,M ,0 ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,F ,0 ,0 ,0 ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,1,
                       1 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,0 ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,M ,F ,M ,0 ,F ,0 ,0 ,F ,M ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,0 ,0 ,F ,M ,0 ,F ,0 ,M ,1,
                       1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1};

int layout6[30][16] = {1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,D3,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,M ,0 ,0 ,M ,0 ,0 ,M ,0 ,1 ,1 ,0 ,1 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,1 ,0 ,0 ,0 ,M ,1 ,M ,0 ,0 ,0 ,0 ,M ,0 ,0 ,0 ,M ,0 ,0 ,0 ,1,
                       1 ,M ,0 ,0 ,M ,0 ,0 ,0 ,M ,1 ,M ,0 ,0 ,0 ,0 ,0 ,1 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,1 ,0 ,0 ,3 ,3 ,3 ,3 ,3 ,0 ,1 ,M ,0 ,0 ,M ,0 ,0 ,0 ,0 ,0 ,M ,0 ,1,
                       1 ,0 ,0 ,0 ,M ,0 ,M ,1 ,0 ,0 ,0 ,3 ,M ,0 ,0 ,3 ,0 ,0 ,1 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,1,
                       1 ,3 ,3 ,3 ,3 ,3 ,1 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,1 ,M ,0 ,0 ,M ,0 ,0 ,0 ,M ,0 ,1,
                       1 ,0 ,0 ,M ,0 ,1 ,M ,0 ,0 ,0 ,0 ,3 ,0 ,1 ,0 ,3 ,0 ,0 ,0 ,0 ,1 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,1,
                       1 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,M ,1 ,M ,0 ,0 ,0 ,0 ,0 ,M ,1,
                       1 ,0 ,0 ,M ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,0 ,M ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,3 ,3 ,3 ,3 ,3 ,3 ,1,
                       1 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,3 ,3 ,3 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,M ,1,
                       1 ,M ,0 ,K ,1 ,0 ,0 ,0 ,M ,0 ,0 ,3 ,3 ,3 ,3 ,3 ,0 ,0 ,0 ,0 ,M ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,3 ,1,
                       1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1};

int layout7[30][16] = {1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,D2,1 ,1 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,I ,W ,0 ,W ,I ,1,
                       1 ,0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,1 ,I ,W ,W ,W ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,3 ,0 ,1 ,I ,I ,0 ,I ,I ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,1 ,0 ,1 ,0 ,1 ,I ,I ,I, I ,0 ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,1 ,M ,0 ,0 ,0 ,M ,1,
                       1 ,0 ,1 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,IB,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,1 ,0 ,I ,I ,I ,I ,1,
                       1 ,0 ,1 ,M ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,1 ,I ,I ,I ,I ,0 ,1,
                       1 ,M ,1 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,0 ,1 ,0 ,1 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,1 ,0 ,0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,1 ,0 ,1 ,0 ,I ,I ,I ,I ,1,
                       1 ,0 ,1 ,0 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,M ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,1 ,I ,I ,I ,I ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1};

int layout8[30][16] = {1 ,1 ,1 ,D1,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1,
                       1 ,0 ,0 ,3 ,1 ,0 ,0 ,M ,3 ,M ,1 ,M ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,1 ,3 ,1 ,0 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,1 ,1 ,0 ,0 ,0 ,1 ,0 ,0 ,3 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,1 ,0 ,0 ,3 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,1 ,0 ,0 ,3 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,1,
                       1 ,1 ,1 ,1 ,0 ,0 ,1 ,3 ,1 ,0 ,0 ,3 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,1 ,0 ,1 ,M ,1 ,0 ,0 ,3 ,0 ,0 ,0 ,3 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,1 ,0 ,0 ,3 ,0 ,0 ,0 ,3 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,3 ,0 ,0 ,0 ,3 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1,
                       1 ,0 ,1 ,1 ,1 ,1 ,1 ,M ,1 ,0 ,0 ,3 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,1 ,1 ,0 ,1 ,0 ,0 ,3 ,0 ,M ,0 ,3 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,3 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,1 ,S ,0 ,0 ,0 ,1,
                       1 ,0 ,1 ,1 ,1 ,1 ,1 ,0 ,1 ,0 ,0 ,3 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,3 ,1 ,1 ,1 ,1 ,1 ,1,
                       1 ,0 ,0 ,0 ,0 ,0 ,0 ,M ,1 ,M ,0 ,3 ,0 ,0 ,0 ,3 ,0 ,0 ,0 ,0 ,0 ,M ,3 ,0 ,0 ,0 ,0 ,0 ,0 ,1,
                       1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1};
#endif



