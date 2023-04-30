#include <iostream>
#include "../header/Cube.h"
#include "../header/CubeActions.h"

using namespace std;
  
int main() {
    cout << "Welcome to Rubiks Cube Solver" << endl;
    
    Cube example;

    CubeActions example2;

    //cout << example2.getFront();
/*
    example2.display();

    

    example2.rotateUp();

    cout << "\nrotate up\n" << endl;

    example2.display();

    cout << "\nrotate down\n" << endl;

    example2.rotateDown();
    example2.display();

    cout << "\nrotate left\n" << endl;

    example2.rotateLeft();
    example2.display();

    cout << "\nrotate right\n" << endl;

    example2.rotateRight();
    example2.display();

    cout << "\nTop Layer ClockWise\n" << endl;

    example2.upClockWise();
    example2.display();

    cout << endl;

    example2.displayFace('b');
    cout << endl;
    example2.displayFace('r');
    cout << endl;
    example2.displayFace('g');
    cout << endl;
    example2.displayFace('o');

    cout << endl;

    cout << "\nTop Layer Counter ClockWise\n" << endl;

    example2.upCounterClockWise();
    example2.display();

    cout << endl;
    */
/*
    example2.displayFace('b');
    cout << endl;
    example2.displayFace('r');
    cout << endl;
    example2.displayFace('g');
    cout << endl;
    example2.displayFace('o');
    */
    
    cout << endl;

    cout << endl;

    example2.displayCube();

    cout << "\nTop Layer ClockWise\n" << endl;

    example2.upClockWise();
    example2.displayCube();

    cout << endl;


    cout << "\nTop Layer CounterClockWise\n" << endl;

    example2.upCounterClockWise();
    example2.displayCube();

    cout << endl;



    cout << "\nBottom Layer ClockWise\n" << endl;

    example2.downClockWise();
    example2.displayCube();

    cout << endl;


    cout << "\nBottom Layer CounterClockWise\n" << endl;

    example2.downCounterClockWise();
    example2.displayCube();

    cout << endl;

//////////////////////////////////////////////////////////

    cout << "\nLeft Layer ClockWise\n" << endl;

    example2.leftClockWise();
    example2.displayCube();

    cout << endl;


    cout << "\nLeft Layer CounterClockWise\n" << endl;

    example2.leftCounterClockWise();
    example2.displayCube();

    cout << endl;



    cout << "\nRight Layer ClockWise\n" << endl;

    example2.rightClockWise();
    example2.displayCube();

    cout << endl;


    cout << "\nRight Layer CounterClockWise\n" << endl;

    example2.rightCounterClockWise();
    example2.displayCube();

    cout << endl;

///////////////////////////////////////////////////////

    cout << "\nFront Layer ClockWise\n" << endl;

    example2.frontClockWise();
    example2.displayCube();

    cout << endl;


    cout << "\nFront Layer CounterClockWise\n" << endl;

    example2.frontCounterClockWise();
    example2.displayCube();

    cout << endl;



    cout << "\nBack Layer ClockWise\n" << endl;

    example2.backClockWise();
    example2.displayCube();

    cout << endl;


    cout << "\nBack Layer CounterClockWise\n" << endl;

    example2.backCounterClockWise();
    example2.displayCube();

    cout << endl;



    return 0;
}