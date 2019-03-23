///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                              Tic Tac Toe
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
*   Main file program will start executing here
*   Author  :- R.R.Chandravanshi
*   Company :- RazSoft
*
*/

/*

*/

#include <graphics.h>
#include "tictac.h"
#include "menu.h"
#include "play.h"
#include <stdio.h>


using namespace std;

int main()
{

    initwindow(470,550,"Tic - Tac - Toe",600,20);
        start();
        menu();
                getch();
            cleardevice();
            getch();
    closegraph();
    return 0;
}
