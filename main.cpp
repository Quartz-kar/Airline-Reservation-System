//DSA MINI PROJECT
//AIRLINE RESERVATION SYSTEM

#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<bluesky.cpp>

using namespace std;

int main()
{
    system("CLS");
    system("COLOR 3F");

    HANDLE screen = GetStdHandle( STD_OUTPUT_HANDLE );
    COORD max_size = GetLargestConsoleWindowSize( screen );

    char s[] = "WELCOME TO AIRLINE RESERVATION SYSTEM";

    COORD pos;
    pos.X = (max_size.X - sizeof(s) ) / 2;
    pos.Y = max_size.Y / 2;
    SetConsoleCursorPosition( screen, pos );

    LPDWORD written;
    WriteConsole( screen, s, sizeof(s), written, 0 );

	_getch();

	system("CLS");
	system("COLOR 3F");
	cout<<" ..................... MENU OPTIONS .............................\n"<<endl;

	menu();
	seat_fill();

   _getch();

    return 0;
}
