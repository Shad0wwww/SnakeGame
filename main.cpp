#include <iostream>
#include <windows.h>
#include<conio.h>
//Define something
#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

using namespace std; //including namespace std for cin and cout

//Public veribels
bool gameover;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y){
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

//Draw the border
void drawBorder(){
    for(int i=0; i<SCREEN_HEIGHT; i++){
        for(int j=0; j<17; j++){
            gotoxy(0+j,i); cout<<"±";
            gotoxy(WIN_WIDTH-j,i); cout<<"±";
        }
    }
    for(int i=0; i<SCREEN_HEIGHT; i++){
        gotoxy(SCREEN_WIDTH,i); cout<<"±";
    }
}

//########
// so std is the stand for the "stand package"
//So if i want to print / system.out.printl() / console.log() i need to use that package.
//The code will look like this.
//std::cout<<"you typed 1";
//cout means "character output"
//then i need to put ";" because is and statement
//########


//Runs the code
int main() {
    do{
        system("cls");
        gotoxy(10,5); cout<<" -------------------------- ";
        gotoxy(10,6); cout<<" |        SnakeGame    | ";
        gotoxy(10,7); cout<<" --------------------------";
        gotoxy(10,9); cout<<"1. Start Game";
        gotoxy(10,10); cout<<"2. Instructions";
        gotoxy(10,11); cout<<"3. Quit";
        gotoxy(10,13); cout<<"Select option: ";
        //Gets the input you have typed in.
        char op = getche();

        if(op==1) {

        }


    }while(1);

    return 0;
}