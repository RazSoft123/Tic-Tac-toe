// Menu.cpp This file contains all functions related to menus of this program

#include <graphics.h>
#include <stdio.h>
#include "play.h"
#include "tictac.h"
#include "menu.h"

 int scolor = 15,type = 1;

void menu(void)
{
    int n;
        cleardevice();
        setcolor(15);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
        settextjustify(CENTER_TEXT,TOP_TEXT);
    outtextxy(235,10,"To Choose the option please ");
    outtextxy(235,30,"Press the option number on numpad ");

    line(0,65,470,65);
        settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
    outtextxy(235,100,"1. PLAY ");
    outtextxy(235,170,"2. Settings ");
    outtextxy(235,240,"3. Help  ");
    outtextxy(235,310,"4. About  ");
    outtextxy(235,380,"5. Exit  ");
        line(0,430,470,430);
      //  line(130,65,130,430);
      //  line(330,65,330,430);
            SMenu();


}

void settings()
{
        settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
        settextjustify(LEFT_TEXT,TOP_TEXT);
    int input;
    cleardevice();
        outtextxy(50,100,"1. Press 1 for change the color");
        outtextxy(50,150,"2. press 2 for change the type");
        outtextxy(50,200,"3. press 3 for back to menu   ");
    scanf("%d",&input);
        switch(input)
        {
        case 1:
            cleardevice();
            outtextxy(50,100,"Choose the color from list ");
            outtextxy(50,150,"To choose press the color number");

                setcolor(1);
            outtextxy(50,200," 1 . Blue ");

                  setcolor(2);
            outtextxy(250,200," 2 . Green ");

                  setcolor(3);
            outtextxy(50,250," 3 . Cyan ");

                             setcolor(4);
            outtextxy(250,250," 4 . Red ");


                             setcolor(9);
            outtextxy(50,300," 5 . Light - Blue");

                             setcolor(14);
            outtextxy(250,300," 6 . Yellow  ");


                             setcolor(15);
            outtextxy(50,350," 7 . White ");

                scanf("%d",&input);
                    scolor = input;
                if(input == 5)
                    scolor = 9;
                else if(input == 6)
                    scolor = 14;
                else if(input == 7)
                    scolor = 15;
                settings();

            break;
        case 2:

            cleardevice();
            outtextxy(50,100,"Choose the color from list ");
            outtextxy(50,150,"To choose the type press number");

            outtextxy(50,200," 1. Bar ");
                    bar(200,200,350,220);

            outtextxy(50,250," 2. Rectangle ");
                    rectangle(200,250,350,270);
                scanf("%d",&input);
            type = input;
            settings();
            break;
        case 3:
                menu();
            break;
        default :
            menu();

        }


}

void help(void )
{
    int input;

    settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
        settextjustify(CENTER_TEXT,TOP_TEXT);
        outtextxy(235,50,"Tic - Tac - Toe 3.0 ");
        outtextxy(235,70," Welcome !! ");
            setcolor(4);
        outtextxy(235,120,"This only take input from keyboard ");
            setcolor(15);
         outtextxy(235,170," To play this game you need to put  ");
         outtextxy(235,190," Your symbol continuously in vertical ");
         outtextxy(235,210," or Horizontal or Diagonally. As well ");
         outtextxy(235,230," U have to prevent to your opponent to");
         outtextxy(235,250," do this. Who complete first his vertically");
         outtextxy(235,270," or horizontal or diagonally will win  ");
         outtextxy(235,290," This game. Complete first and win... ");
         outtextxy(235,310," Enjoy!!        RazSoft       Thank You!! ");
         outtextxy(235,330," Press 1 for menu  ");
         outtextxy(235,350," Press 2 for exit  ");

            settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
            settextjustify(CENTER_TEXT,TOP_TEXT);
                        setcolor(3);
            outtextxy(235,410," RazSoft ");

                scanf("%d",&input);
                    if(input == 1)
                        menu();
                    else if(input== 2)
                        out();

                    menu();

}

void about(void)
{
    int input;
   settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
        settextjustify(LEFT_TEXT,TOP_TEXT);
         outtextxy(30,100," Documentation :  R.R.Chandravanshi ");
         outtextxy(30,130," Author        :  Unknown           ");
         outtextxy(30,160," Version       :  3.0               ");
         outtextxy(30,190," Date          :  10-07-2018 :9:00  ");
         outtextxy(30,210," Leniences     :  GNU-GCC(Make it your own) ");
         outtextxy(30,230," Company       :  RazSoft           ");
         outtextxy(30,250," Website       :  www.blender.epizy.com");
                     settextjustify(CENTER_TEXT,TOP_TEXT);
                     setcolor(4);
         outtextxy(235,300," Press 1 for menu  ");
         outtextxy(235,330," Press 2 for exit  ");

            settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
            settextjustify(CENTER_TEXT,TOP_TEXT);
                        setcolor(3);
            outtextxy(235,410," RazSoft ");

                scanf("%d",&input);
                    if(input == 1)
                        menu();
                    else if(input== 2)
                        out();

                    menu();
}

void out(void )
{
    cleardevice();
    setfillstyle(SOLID_FILL,15);
  start();
  exit(1);

}

int SMenu(void)
{
    int n;
    scanf("%d",&n);
    int x1 = 130 , x2 = 330;
    setcolor(15);
    switch(n)
    {
    case 1:
            rectangle(x1,90,x2,140);
            rectangle(x1++,91,x2--,139);
                delay(100);
            cleardevice();
                play(scolor,type);
            return 1;

        break;

    case 2:
         rectangle(x1,160,x2,210);
         rectangle(x1++,161,x2--,209);
            delay(100);
            cleardevice();
                settings();
            return 1;
        break;

    case 3:
         rectangle(x1,230,x2,280);
         rectangle(x1++,230,x2--,280);
            delay(100);
            cleardevice();
                help();
            return 1;
        break;

    case 4:
         rectangle(x1,300,x2,350);
          rectangle(x1++,229,x2--,349);
            delay(100);
            cleardevice();
                about();
            return 1;
        break;

    case 5:
         rectangle(x1,370,330,x2);
         rectangle(x1++,371,x2--,279);
            delay(100);
            cleardevice();
                out();
            return 1;
        break;

    default :
       SMenu();
    }

}

