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
    
}

void CubeActions::rotateLeft(){
    
}

void CubeActions::rotateRight(){
    
}

void CubeActions::display(){
    cout << "front: " << getFront() << endl;
    cout << "left: " << getLeft() << endl;
    cout << "right: " <<getRight() << endl;
    cout << "back: " <<getBack() << endl;
    cout << "up: " <<getUp() << endl;
    cout << "down: " <<getDown() << endl;
}