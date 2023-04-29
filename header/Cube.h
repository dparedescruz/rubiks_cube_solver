#ifndef CUBE_H
#define CUBE_H

class Cube {
    private:
    char front;
    char left;
    char right;
    char back;
    char up;
    char down;

    public:
    Cube();
    char yellow[3][3];
    char white[3][3];
    char red[3][3];
    char green[3][3];
    char orange[3][3];
    char blue[3][3];
    char getFront();
    char getLeft();
    char getRight();
    char getBack();
    char getUp();
    char getDown();
    

    void setFront(char f);
    void setLeft(char l);
    void setRight(char r);
    void setBack(char b);
    void setUp(char u);
    void setDown(char d);
};

#endif