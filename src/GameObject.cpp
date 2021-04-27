#include "GameObject.h"
#include "Vector.h"

GameObject::GameObject(char sign, Vector2d vec, int length, int width){
    this->position = vec;
    this->sign = sign;
    this->prevPosition = vec;
    this->posChanged = false;
    this->length = length;
    this->width = width;
}

Vector2d GameObject::getPosition(){
    return this->position;
}
char GameObject::getSign(){
    return this->sign;
}

int GameObject::getX() {
    return this->position.getX();
}

int GameObject::getY() {
    return this->position.getY();
}

int GameObject::getPrevX() {
    return this->prevPosition.getX();
}

int GameObject::getPrevY() {
    return this->prevPosition.getY();
}

bool GameObject::isPosChanged() {
    return this->posChanged;
}
