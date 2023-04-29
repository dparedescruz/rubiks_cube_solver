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

    cout << endl;

    example2.display();

    



    return 0;
}