#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
main(){

  int pacX = 4; 
  int pacY = 4;
  bool run = true;
  system("cls");
  printMaze();
  gotoxy(pacX, pacY);
  cout << "P";
  while(run)
  {
    if (GetAsyncKeyState(VK_LEFT)){
       gotoxy(pacX, pacY);
       cout << " ";
       pacX = pacX - 1;
       gotoxy(pacX, pacY);
       cout << "P";
    }
    if (GetAsyncKeyState(VK_RIGHT)){
      gotoxy(pacX, pacY);
      cout << " ";
      pacX = pacX + 1;
      gotoxy(pacX, pacY);
     cout << "P";
    }
    if (GetAsyncKeyState(VK_UP)){
       gotoxy(pacX, pacY);
       cout << " ";
       pacY = pacY - 1;
       gotoxy(pacX, pacY);
       cout << "P";
    }
    if (GetAsyncKeyState(VK_DOWN)){
       gotoxy(pacX, pacY);
       cout << " ";
       pacY = pacY + 1;
       gotoxy(pacX, pacY);
       cout << "P";
    }
    if (GetAsyncKeyState(VK_ESCAPE)){
       run = false;
    }
  Sleep(200);
 }
}
void printMaze()
{
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%                        %" << endl;
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
