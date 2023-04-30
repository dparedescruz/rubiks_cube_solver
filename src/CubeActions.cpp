#include <iostream>
#include "../header/CubeActions.h"

using namespace std;

void CubeActions::flipArray(char arr[3]){
    char temp = arr[0];
    arr[0] = arr[2];
    arr[2] = temp;
}

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
    char temp2[3];
    char temp3[3];
    char temp4[3];
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

    for(int i = 0; i < 3; i++){
        temp[i] = yellow[0][i];
        temp2[i] = yellow[i][2];
        temp3[i] = yellow[2][i];
        temp4[i] = yellow[i][0];
    }

    flipArray(temp2);
    flipArray(temp4);


    for(int i = 0; i < 3; i++){
        yellow[0][i] = temp4[i];
    }
    
    for(int i = 0; i < 3; i++){
        yellow[i][2] = temp[i];
    }
    for(int i = 0; i < 3; i++){
        yellow[2][i] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][0] = temp3[i];
    }
}

void CubeActions::upCounterClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
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

    for(int i = 0; i < 3; i++){
        temp[i] = yellow[0][i];
        temp2[i] = yellow[i][2];
        temp3[i] = yellow[2][i];
        temp4[i] = yellow[i][0];
    }

    flipArray(temp);
    flipArray(temp3);


    for(int i = 0; i < 3; i++){
        yellow[0][i] = temp2[i];
    }
    
    for(int i = 0; i < 3; i++){
        yellow[i][2] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        yellow[2][i] = temp4[i];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][0] = temp[i];
    }
}

void CubeActions::downClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
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

    for(int i = 0; i < 3; i++){
        temp[i] = white[0][i];
        temp2[i] = white[i][2];
        temp3[i] = white[2][i];
        temp4[i] = white[i][0];
    }

    flipArray(temp2);
    flipArray(temp4);


    for(int i = 0; i < 3; i++){
        white[0][i] = temp4[i];
    }
    
    for(int i = 0; i < 3; i++){
        white[i][2] = temp[i];
    }
    for(int i = 0; i < 3; i++){
        white[2][i] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        white[i][0] = temp3[i];
    }
}

void CubeActions::downCounterClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
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

    for(int i = 0; i < 3; i++){
        temp[i] = white[0][i];
        temp2[i] = white[i][2];
        temp3[i] = white[2][i];
        temp4[i] = white[i][0];
    }

    flipArray(temp);
    flipArray(temp3);


    for(int i = 0; i < 3; i++){
        white[0][i] = temp2[i];
    }
    
    for(int i = 0; i < 3; i++){
        white[i][2] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        white[2][i] = temp4[i];
    }
    for(int i = 0; i < 3; i++){
        white[i][0] = temp[i];
    }
}

void CubeActions::leftClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[i][0];
        temp2[i] = orange[i][2];
        temp3[i] = white[i][0];
    }
    flipArray(temp2);
    flipArray(temp3);
    for(int i = 0; i < 3; i++){
        red[i][0] = yellow[i][0];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][0] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        orange[i][2] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        white[i][0] = temp[i];
    }

    for(int i = 0; i < 3; i++){
        temp[i] = blue[0][i];
        temp2[i] = blue[i][2];
        temp3[i] = blue[2][i];
        temp4[i] = blue[i][0];
    }

    flipArray(temp2);
    flipArray(temp4);


    for(int i = 0; i < 3; i++){
        blue[0][i] = temp4[i];
    }
    
    for(int i = 0; i < 3; i++){
        blue[i][2] = temp[i];
    }
    for(int i = 0; i < 3; i++){
        blue[2][i] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        blue[i][0] = temp3[i];
    }
}

void CubeActions::leftCounterClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[i][0];
        temp2[i] = orange[i][2];
        temp3[i] = yellow[i][0];
    }
    flipArray(temp2);
    for(int i = 0; i < 3; i++){
        red[i][0] = white[i][0];
    }
    for(int i = 0; i < 3; i++){
        white[i][0] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        orange[i][2] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][0] = temp[i];
    }

    for(int i = 0; i < 3; i++){
        temp[i] = blue[0][i];
        temp2[i] = blue[i][2];
        temp3[i] = blue[2][i];
        temp4[i] = blue[i][0];
    }

    flipArray(temp);
    flipArray(temp3);


    for(int i = 0; i < 3; i++){
        blue[0][i] = temp2[i];
    }
    
    for(int i = 0; i < 3; i++){
        blue[i][2] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        blue[2][i] = temp4[i];
    }
    for(int i = 0; i < 3; i++){
        blue[i][0] = temp[i];
    }
}

void CubeActions::rightClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];

    for(int i = 0; i < 3; i++){
        temp[i] = red[i][2];
        temp2[i] = orange[i][0];
        temp3[i] = yellow[i][2];
    }
    flipArray(temp2);
    flipArray(temp3);
    for(int i = 0; i < 3; i++){
        red[i][2] = white[i][2];
    }
    for(int i = 0; i < 3; i++){
        white[i][2] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        orange[i][0] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][2] = temp[i];
    }


    for(int i = 0; i < 3; i++){
        temp[i] = green[0][i];
        temp2[i] = green[i][2];
        temp3[i] = green[2][i];
        temp4[i] = green[i][0];
    }

    flipArray(temp2);
    flipArray(temp4);


    for(int i = 0; i < 3; i++){
        green[0][i] = temp4[i];
    }
    
    for(int i = 0; i < 3; i++){
        green[i][2] = temp[i];
    }
    for(int i = 0; i < 3; i++){
        green[2][i] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        green[i][0] = temp3[i];
    }
}

void CubeActions::rightCounterClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
    for(int i = 0; i < 3; i++){
        temp[i] = red[i][2];
        temp2[i] = orange[i][0];
        temp3[i] = white[i][2];
    }
    flipArray(temp2);
    flipArray(temp3);
    for(int i = 0; i < 3; i++){
        red[i][2] = yellow[i][2];
    }
    for(int i = 0; i < 3; i++){
        yellow[i][2] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        orange[i][0] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        white[i][2] = temp[i];
    }

    
    for(int i = 0; i < 3; i++){
        temp[i] = green[0][i];
        temp2[i] = green[i][2];
        temp3[i] = green[2][i];
        temp4[i] = green[i][0];
    }

    flipArray(temp);
    flipArray(temp3);


    for(int i = 0; i < 3; i++){
        green[0][i] = temp2[i];
    }
    
    for(int i = 0; i < 3; i++){
        green[i][2] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        green[2][i] = temp4[i];
    }
    for(int i = 0; i < 3; i++){
        green[i][0] = temp[i];
    }
}

void CubeActions::frontClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
    for(int i = 0; i < 3; i++){
        temp[i] = white[0][i];
        temp2[i] = green[i][0];
        temp3[i] = blue[i][2];
    }
    flipArray(temp2);
    flipArray(temp3);
    for(int i = 0; i < 3; i++){
        white[0][i] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        green[i][0] = yellow[2][i];
    }
    for(int i = 0; i < 3; i++){
        yellow[2][i] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        blue[i][2] = temp[i];
    }

    for(int i = 0; i < 3; i++){
        temp[i] = red[0][i];
        temp2[i] = red[i][2];
        temp3[i] = red[2][i];
        temp4[i] = red[i][0];
    }

    flipArray(temp2);
    flipArray(temp4);


    for(int i = 0; i < 3; i++){
        red[0][i] = temp4[i];
    }
    
    for(int i = 0; i < 3; i++){
        red[i][2] = temp[i];
    }
    for(int i = 0; i < 3; i++){
        red[2][i] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        red[i][0] = temp3[i];
    }
}

void CubeActions::frontCounterClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
    for(int i = 0; i < 3; i++){
        temp[i] = white[0][i];
        temp2[i] = yellow[2][i];
    }
    flipArray(temp);
    flipArray(temp2);
    for(int i = 0; i < 3; i++){
        white[0][i] = blue[i][2];
    }
    for(int i = 0; i < 3; i++){
        blue[i][2] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        yellow[2][i] = green[i][0];
    }
    for(int i = 0; i < 3; i++){
        green[i][0] = temp[i];
    }

    for(int i = 0; i < 3; i++){
        temp[i] = red[0][i];
        temp2[i] = red[i][2];
        temp3[i] = red[2][i];
        temp4[i] = red[i][0];
    }

    flipArray(temp);
    flipArray(temp3);


    for(int i = 0; i < 3; i++){
        red[0][i] = temp2[i];
    }
    
    for(int i = 0; i < 3; i++){
        red[i][2] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        red[2][i] = temp4[i];
    }
    for(int i = 0; i < 3; i++){
        red[i][0] = temp[i];
    }
}

void CubeActions::backClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
    for(int i = 0; i < 3; i++){
        temp[i] = white[2][i];
        temp2[i] = yellow[0][i];
    }
    flipArray(temp);
    flipArray(temp2);
    for(int i = 0; i < 3; i++){
        white[2][i] = blue[i][0];
    }
    for(int i = 0; i < 3; i++){
        blue[i][0] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        yellow[0][i] = green[i][2];
    }
    for(int i = 0; i < 3; i++){
        green[i][2] = temp[i];
    }

    for(int i = 0; i < 3; i++){
        temp[i] = orange[0][i];
        temp2[i] = orange[i][2];
        temp3[i] = orange[2][i];
        temp4[i] = orange[i][0];
    }

    flipArray(temp2);
    flipArray(temp4);


    for(int i = 0; i < 3; i++){
        orange[0][i] = temp4[i];
    }
    
    for(int i = 0; i < 3; i++){
        orange[i][2] = temp[i];
    }
    for(int i = 0; i < 3; i++){
        orange[2][i] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        orange[i][0] = temp3[i];
    }
}

void CubeActions::backCounterClockWise(){
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
    for(int i = 0; i < 3; i++){
        temp[i] = white[2][i];
        temp2[i] = green[i][2];
        temp3[i] = blue[i][0];
    }
    flipArray(temp2);
    flipArray(temp3);
    for(int i = 0; i < 3; i++){
        white[2][i] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        green[i][2] = yellow[0][i];
    }
    for(int i = 0; i < 3; i++){
        yellow[0][i] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        blue[i][0] = temp[i];
    }

    for(int i = 0; i < 3; i++){
        temp[i] = orange[0][i];
        temp2[i] = orange[i][2];
        temp3[i] = orange[2][i];
        temp4[i] = orange[i][0];
    }

    flipArray(temp);
    flipArray(temp3);


    for(int i = 0; i < 3; i++){
        orange[0][i] = temp2[i];
    }
    
    for(int i = 0; i < 3; i++){
        orange[i][2] = temp3[i];
    }
    for(int i = 0; i < 3; i++){
        orange[2][i] = temp4[i];
    }
    for(int i = 0; i < 3; i++){
        orange[i][0] = temp[i];
    }
}
/*
void CubeActions::call(char face[3][3]){
    
}

void CubeActions::rotateFace(char face[3][3]){

for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << face[i][j] << " ";
                }
                cout << endl;
            }
cout << endl;
    
    face[0][0] = 'a';
    face[0][1] = 'b';
    face[0][2] = 'c';
    face[1][2] = 'd';
    face[2][2] = 'e';
    face[2][1] = 'f';
    face[2][0] = 'g';
    face[1][0] = 'h';
    
   
    
    char temp[3];
    char temp2[3];
    char temp3[3];
    char temp4[3];
    for(int i = 0; i < 3; i++){
        temp[i] = face[0][i];
        temp2[i] = face[i][2];
        temp3[i] = face[2][i];
        temp4[i] = face[i][0];
    }
    for(int i = 2; i >= 0; i--){
        
    }/*
    for(int i = 2; i >= 0; i--){
        face[i][2] = temp[i];
    }
    flipArray(temp2);
    //flipArray(temp3);
    flipArray(temp4);
    for(int i = 0; i < 3; i++){
        cout << temp[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << temp2[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << temp3[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << temp4[i] << " ";
    }
    
    cout << endl;

    for(int i = 0; i < 3; i++){
        face[0][i] = temp4[i];
    }
    
    for(int i = 0; i < 3; i++){
        face[i][2] = temp[i];
    }
    for(int i = 0; i < 3; i++){
        face[2][i] = temp2[i];
    }
    for(int i = 0; i < 3; i++){
        face[i][0] = temp3[i];
    }
}*/

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

void CubeActions::displayCube(){
    for(int i = 0; i < 3; i++){
        cout << "      ";
        for(int j = 0; j < 3; j++){
            cout << yellow[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << blue[i][j] << " ";
        }
        for(int j = 0; j < 3; j++){
            cout << red[i][j] << " ";
        }
        for(int j = 0; j < 3; j++){
            cout << green[i][j] << " ";
        }
        for(int j = 0; j < 3; j++){
            cout << orange[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++){
        cout << "      ";
        for(int j = 0; j < 3; j++){
            cout << white[i][j] << " ";
        }
        cout << endl;
    }
}