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
}