#ifndef CUBE_ACTIONS_H
#define CUBE_ACTIONS_H

#include "Cube.h"


class CubeActions : Cube{
    private:

    public:
        void rotateUp();
        void rotateDown();
        void rotateLeft();
        void rotateRight();
        void topClockWise();
        void topCounterClockWise();
        void middleClockWise();
        void middleCounterClockWise();
        void bottomClockWise();
        void bottomCounterClockWise();
        void display();
        void displayFace(char face);
};

#endif