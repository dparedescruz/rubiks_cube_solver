#include <iostream>
#include "../header/Cube.h"
#include "../header/CubeActions.h"

using namespace std;
  
int main() {
    cout << "Welcome to Rubiks Cube Solver" << endl;
    
    Cube example;

    CubeActions example2;

    //cout << example2.getFront();

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

    



    return 0;
}