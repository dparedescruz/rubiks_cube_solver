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
        void display();
};

#endif