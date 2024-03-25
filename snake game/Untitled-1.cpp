#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>// keyword func and get function"get char""
using namespace std;

bool gameover;
const int width = 20;
const int height = 20;
int x;
int y;
int fruitx;
int fruity;// coordonates of snake head and the fruit
int tailx[100], taily[100], ntail;
enum direction{STOP=0,LEFT, RIGHT, UP, DOWN}dir;// dir is the identifier, and enum direction is data type
int score;



void setup(){                      // function that runs just one time
gameover = false; // we start the game so the game is not over
dir = STOP;// in the begining
x = width/2 -1;
y = height/2;    // snake head coordinates are the middle of the width and hight
fruitx = rand() % width;     //a random number from 0 to 40 to x coordinate
fruity = rand() % height;   // a random number from 0 to 40 to y oordinate
score = 0;// in the bigining score = o;

}
void draw(){
    system("cls");   // clear screan;
                // function that draws the snake and fruits
    for(int i = 0; i < width+2; i++){
        cout << "▓";
    }


    cout << endl;
    for(int j = 0; j < height; j++){
        for(int i = 0; i < width; i++){
            if(i == 0){
                cout << "▓";// le cadre
            }
            else if(i == width){
                cout << "▓";
            }
            else{
                cout << " ";
            }
            if(i == x && j == y){
                   cout << "O";
               }// snake head drawing
             if(i == fruitx  && j ==fruity){

                cout << "*";
            }
            else{
                 bool istail = false;
                    for(int k =0; k < ntail; k++){

                if(tailx[k] == i && taily[k] == j){
                        cout << "o";                                           // tail
                    istail = true;

                }
                }
                if(!istail){
                    cout << " ";
                }

                //empty space
            }
             if(i == width-1){       // last raw in the width
                cout << "▓";

            }
            else{
                cout << " ";    //empty space
            }
        }
        cout << endl;                //when it finshes it will go to the new line
    }
    for(int i = 0; i< width-1; i++){
        cout << "▓";
    }
    cout << endl;
    cout << "SCORE IS : "<< score << endl;
}

void input(){                 // to enter the keys "controller bottons from keyboard"
    if(_kbhit()){
        switch(_getch()){
            case 'w':
            dir  = UP;
            break;
            case 's':
            dir = DOWN;
            break;
            case 'a':
            dir = LEFT;
            break;
            case 'd':
            dir = RIGHT;
            break;
            case 'q':
            gameover = true;
            break;
        }


    }



}



void logic(){
    for(int i=ntail-1; i > 0; i++){
        tailx[i]= tailx[i-1];
        taily[i]= taily[i-1];


    }
    tailx[0] = x;
    taily[0] = y;
    switch(dir){
        case LEFT:
        x--;
        break;
        case RIGHT:
        x++;
        break;
        case UP:
        y--;
        break;
        case DOWN:
        y++;
        break;
        }

        if(x >= width){
            x = 0;
        }
        else if(x <0){
            x = width-1;
        }
        if(y >= height){
            y = 0;
        }
        else if(y < 0){
            y = height-1;
        }
    if(x == fruitx && y == fruity)
 {
     fruitx = rand() % width;
     fruity = rand() % height;
     score+= 1;
     ntail+=1;

 }
 }                   // the logic function of the game




int main(){

        cout << "####################################################################" << endl;
        cout << "#                   WELCOME                                        #" << endl;
        cout << "#                          TO                                      #" << endl;
        cout << "#                             THE                                  #" << endl;
        cout << "#                                   SNAKE                          #" << endl;
        cout << "#                                       GAME                       #" << endl;
        cout << "####################################################################" << endl;
        string name;
        cout << endl;
        cout << "\t\t\W for  up , S for down , A for left , D for right\n\n" << endl<<endl;
        cout<<"\t\t\tEnter your player name!"<< endl;

         cin >> name;

        if(name == "DJALIL" || name == "djalil" || name == "ZIANI" || name == "ziani"){
    setup();

    while(!gameover){ // !gameover = is not true // while loop = infinitm
        draw();
        input();
        logic();
        Sleep(20); // stop 10 sec before second loop            // windows.h library
    }

        }else{
            cout << "the player you entered is not allowed to play\n";

        }

    return 0;

}
