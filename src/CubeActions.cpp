#include <iostream>
#include "../header/CubeActions.h"

using namespace std;


void CubeActions::rotateUp(){
    char temp = getDown();
    setDown(getBack());
    setBack(getUp());
    setUp(getFront());
    setFront(temp);
}

void CubeActions::rotateDown(){
    char temp = getDown();
    setDown(getFront());
    setFront(getUp());
    setUp(getBack());
    setBack(temp);
}

void CubeActions::rotateLeft(){
    char temp = getFront();
    setFront(getRight());
    setRight(getBack());
    setBack(getLeft());
    setLeft(temp);
}

void CubeActions::rotateRight(){
    char temp = getFront();
    setFront(getLeft());
    setLeft(getBack());
    setBack(getRight());
    setRight(temp);
}

void CubeActions::display(){
    cout << "front: " << getFront() << endl;
    cout << "left: " << getLeft() << endl;
    cout << "right: " <<getRight() << endl;
    cout << "back: " <<getBack() << endl;
    cout << "up: " <<getUp() << endl;
    cout << "down: " <<getDown() << endl;
}