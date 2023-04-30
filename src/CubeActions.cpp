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

void CubeActions::upClockWise(){
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

void CubeActions::upCounterClockWise(){
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

void CubeActions::downClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[2][i];
    }
    for(int i = 0; i < 3; i++){
        red[2][i] = blue[2][i];
    }
    for(int i = 0; i < 3; i++){
        blue[2][i] = orange[2][i];
    }
    for(int i = 0; i < 3; i++){
        orange[2][i] = green[2][i];
    }
    for(int i = 0; i < 3; i++){
        green[2][i] = temp[i];
    }
}

void CubeActions::downCounterClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[2][i];
    }
    for(int i = 0; i < 3; i++){
        red[2][i] = green[2][i];
    }
    for(int i = 0; i < 3; i++){
        green[2][i] = orange[2][i];
    }
    for(int i = 0; i < 3; i++){
        orange[2][i] = blue[2][i];
    }
    for(int i = 0; i < 3; i++){
        blue[2][i] = temp[i];
    }
}

void CubeActions::leftClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[i][0];
    }
    for(int i = 0; i < 3; i++){
        red[i][0] = yellow[i][0];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][0] = orange[i][2];
    }
    for(int i = 0; i < 3; i++){
        orange[i][2] = white[i][0];
    }
    for(int i = 0; i < 3; i++){
        white[i][0] = temp[0];
    }
}

void CubeActions::leftCounterClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[i][0];
    }
    for(int i = 0; i < 3; i++){
        red[i][0] = white[i][0];
    }
    for(int i = 0; i < 3; i++){
        white[i][0] = orange[i][2];
    }
    for(int i = 0; i < 3; i++){
        orange[i][2] = yellow[i][0];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][0] = temp[0];
    }
}

void CubeActions::rightClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[i][2];
    }
    for(int i = 0; i < 3; i++){
        red[i][2] = white[i][2];
    }
    for(int i = 0; i < 3; i++){
        white[i][2] = orange[i][0];
    }
    for(int i = 0; i < 3; i++){
        orange[i][0] = yellow[i][2];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][2] = temp[2];
    }
}

void CubeActions::rightCounterClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[i][2];
    }
    for(int i = 0; i < 3; i++){
        red[i][2] = yellow[i][2];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][2] = orange[i][0];
    }
    for(int i = 0; i < 3; i++){
        orange[i][0] = white[i][2];
    }
    for(int i = 0; i < 3; i++){
        white[i][2] = temp[2];
    }
}

void CubeActions::frontClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = white[0][i];
    }
    for(int i = 0; i < 3; i++){
        white[0][i] = green[0][i];
    }
    for(int i = 0; i < 3; i++){
        green[0][i] = yellow[0][i];
    }
    for(int i = 0; i < 3; i++){
        yellow[0][i] = blue[0][i];
    }
    for(int i = 0; i < 3; i++){
        blue[0][i] = temp[i];
    }
}

void CubeActions::frontCounterClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = white[0][i];
    }
    for(int i = 0; i < 3; i++){
        white[0][i] = blue[0][i];
    }
    for(int i = 0; i < 3; i++){
        blue[0][i] = yellow[0][i];
    }
    for(int i = 0; i < 3; i++){
        yellow[0][i] = green[0][i];
    }
    for(int i = 0; i < 3; i++){
        green[0][i] = temp[i];
    }
}

void CubeActions::backClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = white[2][i];
    }
    for(int i = 0; i < 3; i++){
        white[2][i] = blue[2][i];
    }
    for(int i = 0; i < 3; i++){
        blue[2][i] = yellow[2][i];
    }
    for(int i = 0; i < 3; i++){
        yellow[2][i] = green[2][i];
    }
    for(int i = 0; i < 3; i++){
        green[2][i] = temp[i];
    }
}

void CubeActions::backCounterClockWise(){
    char temp[3];
    for(int i = 0; i < 3; i++){
        temp[i] = white[2][i];
    }
    for(int i = 0; i < 3; i++){
        white[2][i] = green[2][i];
    }
    for(int i = 0; i < 3; i++){
        green[2][i] = yellow[2][i];
    }
    for(int i = 0; i < 3; i++){
        yellow[2][i] = blue[2][i];
    }
    for(int i = 0; i < 3; i++){
        blue[2][i] = temp[i];
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