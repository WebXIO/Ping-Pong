#pragma once

#include "Vector.h"

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject {
    public:
        int length;
        int width;

        GameObject(char sign, Vector2d pos, int length, int width, bool collision);
        GameObject(){}
        Vector2d getPosition();

        char getSign();

        int getX();
        int getY();

        int getPrevX();
        int getPrevY();

        void setPrevPosition(Vector2d vec);

        void setPrevX(int x);
        void setPrevY(int y);

        bool isPosChanged();
        bool isCollision();

        void setCollision(bool state);
        void setMoved(bool state);

        Vector2d position;

    private:
        bool posChanged;
        bool collision;
        char sign;
        Vector2d prevPosition;
};

#endif // GAMEOBJECT_H
