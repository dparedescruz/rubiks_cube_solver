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

void CubeActions::topClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[0][i];
    }
    for(int i = 0; i < 3; i++){
        red[0][i] = green[0][i];
    }
    for(int i = 0; i < 3; i++){
        green[0][i] = orange[0][i];
    }
    for(int i = 0; i < 3; i++){
        orange[0][i] = blue[0][i];
    }
    for(int i = 0; i < 3; i++){
        blue[0][i] = temp[i];
    }
}

void CubeActions::topCounterClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[0][i];
    }
    for(int i = 0; i < 3; i++){
        red[0][i] = blue[0][i];
    }
    for(int i = 0; i < 3; i++){
        blue[0][i] = orange[0][i];
    }
    for(int i = 0; i < 3; i++){
        orange[0][i] = green[0][i];
    }
    for(int i = 0; i < 3; i++){
        green[0][i] = temp[i];
    }
}

void CubeActions::display(){
    cout << "front: " << getFront() << endl;
    cout << "left: " << getLeft() << endl;
    cout << "right: " <<getRight() << endl;
    cout << "back: " <<getBack() << endl;
    cout << "up: " <<getUp() << endl;
    cout << "down: " <<getDown() << endl;
}

void CubeActions::displayFace(char face){
    switch(face){
        case 'r':
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << red[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 'g':
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << green[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 'b':
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << blue[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 'o':
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << orange[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 'y':
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << yellow[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 'w':
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << white[i][j] << " ";
                }
                cout << endl;
            }
            break;
    }
}