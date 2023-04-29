#include <iostream>
#include "../header/Cube.h"

using namespace std;

Cube::Cube() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            yellow[i][j] = 'y';
            cout << yellow[i][j] << ' ';
        }
    }

    cout << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            white[i][j] = 'w';
            cout << white[i][j] << ' ';
        }
    }

    cout << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            red[i][j] = 'r';
            cout << red[i][j] << ' ';
        }
    }

    cout << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            green[i][j] = 'g';
            cout << green[i][j] << ' ';
        }
    }

    cout << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            orange[i][j] = 'o';
            cout << orange[i][j] << ' ';
        }
    }

    cout << endl;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            blue[i][j] = 'b';
            cout << blue[i][j] << ' ';
        }
    }

    cout << endl;

    front = 'r';
    left = 'b';
    right = 'g';
    back = 'o';
    up = 'y';
    down = 'w';


}

char Cube::getFront(){
    return front;
}

char Cube::getLeft(){
    return left;
}

char Cube::getRight(){
    return right;
}

char Cube::getBack(){
    return back;
}

char Cube::getUp(){
    return up;
}

char Cube::getDown(){
    return down;
}

void Cube::setFront(char f){
    front = f;
}

void Cube::setLeft(char l){
    left = l;
}

void Cube::setRight(char r){
    right = r;
}

void Cube::setBack(char b){
    back = b;
}

void Cube::setUp(char u){
    up = u;
}

void Cube::setDown(char d){
    down = d;
}