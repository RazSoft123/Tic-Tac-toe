#include <graphics.h>
#include "tictac.h"
#include "menu.h"
#include "play.h"
#include <stdio.h>

  int sc = 15, ty = 1;
void p1win()
{
 int input;
    cleardevice();
        printf("\a");
        delay(50);
        printf("\a");
            setcolor(15);
            settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
               settextjustify(CENTER_TEXT,TOP_TEXT);
        outtextxy(235,100,"First Player Wins 'X' ");
            settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
        outtextxy(235,300,"Press 1 for play again ");
        outtextxy(235,350,"Press 2 for main menu ");
        outtextxy(235,400,"Press 3 for exit the game ");
        scanf("%d",&input);
       switch(input)
       {
       case 1:
         PlayComputer(sc, ty);
        break;
       case 2:
          menu();
          break;
       case 3:
        out();
        break ;
       default :
       pcwin();

       }

}
void p2win()
{
 int input;
    cleardevice();
        printf("\a");
        delay(50);
        printf("\a");
            setcolor(15);
            settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
               settextjustify(CENTER_TEXT,TOP_TEXT);
        outtextxy(235,100,"Second player Win 'O' ");
            settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
        outtextxy(235,300,"Press 1 for play again ");
        outtextxy(235,350,"Press 2 for main menu ");
        outtextxy(235,400,"Press 3 for exit the game ");
        scanf("%d",&input);
       switch(input)
       {
       case 1:
         PlayComputer(sc, ty);
        break;
       case 2:
          menu();
          break;
       case 3:
        out();
        break ;
       default :
       pcwin();

       }

}
void pcwin()
{
    int input;
    cleardevice();
        printf("\a");
        delay(50);
        printf("\a");
            setcolor(15);
            settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
               settextjustify(CENTER_TEXT,TOP_TEXT);
        outtextxy(235,100,"Computer WIN.. ");
        outtextxy(235,150,"You Lose......!");
            settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
        outtextxy(235,300,"Press 1 for play again ");
        outtextxy(235,350,"Press 2 for main menu ");
        outtextxy(235,400,"Press 3 for exit the game ");
        scanf("%d",&input);
       switch(input)
       {
       case 1:
         PlayComputer(sc, ty);
        break;
       case 2:
          menu();
          break;
       case 3:
        out();
        break ;
       default :
       pcwin();

       }

}


void uwin()
{
 int input;
    cleardevice();
        printf("\a");
        delay(50);
        printf("\a");
            setcolor(15);
            settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
               settextjustify(CENTER_TEXT,TOP_TEXT);
        outtextxy(235,100,"You win..!");
        outtextxy(235,150,"Computer Lose.!");
            settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
        outtextxy(235,300,"Press 1 for play again ");
        outtextxy(235,350,"Press 2 for main menu ");
        outtextxy(235,400,"Press 3 for exit the game ");
        scanf("%d",&input);
       switch(input)
       {
       case 1:
     PlayComputer(sc, ty);
        break;
       case 2:
          menu();
          break;
       case 3:
        out();
        break ;
       default :
       pcwin();

       }

}



void drow()
{
     int input;
    cleardevice();
        printf("\a");
        delay(50);
        printf("\a");
            setcolor(15);
            settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
               settextjustify(CENTER_TEXT,TOP_TEXT);
        outtextxy(235,100,"TIE......!!!!");
            settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
        outtextxy(235,300,"Press 1 for play again ");
        outtextxy(235,350,"Press 2 for main menu ");
        outtextxy(235,400,"Press 3 for exit the game ");
        scanf("%d",&input);
       switch(input)
       {
       case 1:
        PlayComputer(sc, ty);
        break;
       case 2:
          menu();
          break;
       case 3:
        out();
        break ;
       default :
       drow();

       }

}

int winHuman(char _0, char _1,char _2, char _3, char _4, char _5, char _6, char _7, char _8)
{
    delay(500);

    char box[9];
        box[0] = _0;
        box[1] = _1;
        box[2] = _2;
        box[3] = _3;
        box[4] = _4;
        box[5] = _5;
        box[6] = _6;
        box[7] = _7;
        box[8] = _8;

      if(box[0]==box[1] && box[1]==box[2] && box[2] != 0)
        {
            if(box[2]=='X')
               p1win();
            else
                p2win();
        }
        else  if(box[3]==box[4] && box[4]==box[5] && box[5]!= 0)
        {
            if(box[5]=='X')
               p1win();
            else
                p2win();
        }
        else  if(box[6]==box[7] && box[7]==box[8] && box[8]!= 0)
        {
            if(box[8]=='X')
               p1win();
            else
                p2win();
        }
        else  if(box[0]==box[3] && box[3]==box[6] && box[6]!= 0)
        {
            if(box[6]=='X')
               p1win();
            else
                p2win();
        }
        else  if(box[1]==box[4] && box[4]==box[7] && box[7]!= 0)
        {
            if(box[7]=='X')
               p1win();
            else
                p2win();
        }
        else  if(box[2]==box[5] && box[5]==box[8] && box[8]!= 0)
        {
            if(box[8]=='X')
               p1win();
            else
                p2win();
        }
        else  if(box[0]==box[4] && box[4]==box[8] && box[8]!= 0)
        {
            if(box[8]=='X')
               p1win();
            else
                p2win();
        }
        else  if(box[2]==box[4] && box[4]==box[6] && box[6]!= 0)
        {
            if(box[6]=='X')
               p1win();
            else
                p2win();
        }
        else if(box[0]!=0 && box[1]!=0 && box[2]!=0 && box[3]!=0 && box[4]!=0 && box[5]!=0 && box[6]!=0 && box[7]!=0 && box[8]!=0)
                    {

                       drow();
                    }


}

int win(char _0, char _1,char _2, char _3, char _4, char _5, char _6, char _7, char _8)
{
    delay(500);

    char box[9];
        box[0] = _0;
        box[1] = _1;
        box[2] = _2;
        box[3] = _3;
        box[4] = _4;
        box[5] = _5;
        box[6] = _6;
        box[7] = _7;
        box[8] = _8;

      if(box[0]==box[1] && box[1]==box[2] && box[2] != 0)
        {
            if(box[2]=='X')
                uwin();
            else
                pcwin();
        }
        else  if(box[3]==box[4] && box[4]==box[5] && box[5]!= 0)
        {
            if(box[5]=='X')
                uwin();
            else
                pcwin();
        }
        else  if(box[6]==box[7] && box[7]==box[8] && box[8]!= 0)
        {
            if(box[8]=='X')
                uwin();
            else
                pcwin();
        }
        else  if(box[0]==box[3] && box[3]==box[6] && box[6]!= 0)
        {
            if(box[6]=='X')
                uwin();
            else
                pcwin();
        }
        else  if(box[1]==box[4] && box[4]==box[7] && box[7]!= 0)
        {
            if(box[7]=='X')
                uwin();
            else
                pcwin();
        }
        else  if(box[2]==box[5] && box[5]==box[8] && box[8]!= 0)
        {
            if(box[8]=='X')
                uwin();
            else
                pcwin();
        }
        else  if(box[0]==box[4] && box[4]==box[8] && box[8]!= 0)
        {
            if(box[8]=='X')
                uwin();
            else
                pcwin();
        }
        else  if(box[2]==box[4] && box[4]==box[6] && box[6]!= 0)
        {
            if(box[6]=='X')
                uwin();
            else
                pcwin();
        }
        else if(box[0]!=0 && box[1]!=0 && box[2]!=0 && box[3]!=0 && box[4]!=0 && box[5]!=0 && box[6]!=0 && box[7]!=0 && box[8]!=0)
                    {

                       drow();
                    }


}

int secmov(char _0, char _1,char _2, char _3, char _4, char _5, char _6, char _7, char _8,int t) // This function contain ho computer give you second move
{
    char box[9];
        box[0] = _0;
        box[1] = _1;
        box[2] = _2;
        box[3] = _3;
        box[4] = _4;
        box[5] = _5;
        box[6] = _6;
        box[7] = _7;
        box[8] = _8;

    int j;
              if(box[0] == box[1] && box[1] != 0 && box[2] == 0 )
              {
                    j = 2;
              }
              else if(box[1]==box[2]&&box[2]!= 0 && box[0]==0)
                {
                         j = 0;
                }
                else if(box[4]==box[5] && box[5]!= 0 && box[3]==0)
                {
                      j = 3;
                }
                else if(box[7]==box[8]&& box[8] != 0 && box[6]==0)
                {
                         j = 6;
                }
                else if(box[0]==box[3]&& box[3] != 0 && box[6]==0)
                {
                         j = 6;
                }
                else if(box[1]==box[4]&& box[4] != 0 && box[7]==0)
                {
                         j = 7;
                }
                else if(box[2]==box[5]&& box[5] != 0 && box[8]==0)
                {
                         j = 8;
                }
                else if(box[3]==box[6]&& box[6] != 0 && box[0]==0)
                {
                         j = 0;
                }
                else if(box[4]==box[7]&& box[7] != 0 && box[1]==0)
                {
                         j = 1;
                }
                else if(box[5]==box[8]&& box[8] != 0 && box[2]==0)
                {
                         j = 2;
                }
                else if(box[0]==box[4]&& box[4] != 0 && box[8]==0)
                {
                         j = 8;
                }
                else if(box[4]==box[8]&& box[8] != 0 && box[0]==0)
                {
                         j = 0;
                }
                else if(box[2]==box[4]&& box[4] != 0 && box[6]==0)
                {
                         j = 6;
                }
                else if(box[6]==box[4]&& box[4] != 0 && box[2]==0)
                {

                         j = 2;
                }
                 else if(box[0]==box[2]&& box[2] != 0 && box[1]==0)
                {
                         j = 1;
                }
                 else if(box[3]==box[5]&& box[5] != 0 && box[4]==0)
                {

                         j = 4;
                }
                 else if(box[6]==box[8]&& box[8]!= 0 && box[7]==0)
                {
                         j = 7;
                }
                 else if(box[0]==box[6]&& box[6] != 0 && box[3]==0)
                {
                         j = 3;
                }
                else if(box[1]==box[7]&& box[7] != 0 && box[4]==0)
                {
                         j = 4;
                }
                 else if(box[2]==box[8]&& box[8] != 0 && box[5]==0)
                {
                         j = 5;
                }
                 else if(box[0]==box[8]&& box[8] != 0 && box[4]==0)
                {
                         j = 4;
                }
               else if(box[2]==box[6]&& box[6] != 0 && box[4]==0)
                {
                         j = 4;
                }

                else if( t == 0)
                {

                    if(box[1]==0)
                    {
                          j = 1;
                    }

                    else if(box[3]==0)
                    {
                          j = 3;
                    }

                }
                else if(t==1)
                {

                    if(box[2]==0)
                    {
                          j = 2;
                    }
                    else if(box[3]==0)
                    {
                          j = 3;
                    }
                    else if(box[5]==0)
                    {
                          j = 5;
                    }
                    else if(box[7]==0)
                    {
                          j = 7;
                    }
                    else if(box[6]==0)
                    {

                          j = 6;
                    }
                    else if(box[8]==0)
                    {
                          j = 8;
                    }
                }
                else if(t==2)
                {

                    if(box[6]==0)
                    {

                          j = 6;
                    }
                    else if(box[1]==0)
                    {
                          j = 1;
                    }
                    else if(box[5]==0)
                    {
                          j = 5;
                    }
                    else if(box[0]==0)
                    {
                          j = 0;
                    }
                    else if(box[8]==0)
                    {

                          j = 8;
                    }
                    else if(box[7]==0)
                    {

                          j = 7;
                    }
                    else if(box[3]==0)
                    {
                          j = 3;
                    }
                    else if(box[2]==0)
                    {
                          j = 2;
                    }
                }
                else if(t==3)
                {

                    if(box[0]==0)
                    {
                        j = 0;
                    }
                    else if(box[4]==0)
                    {
                         j = 4;
                    }
                    else if(box[6]==0)
                    {
                         j = 6;
                    }
                    else if(box[5]==0)
                                            {
                         j = 5;
                    }
                    else if(box[3]==0)
                                           {
                         j = 3;
                    }
                    else if(box[8]==0)
                                         {
                         j = 8;
                    }
                    else if(box[7]==0)
                                         {
                         j = 7;
                    }
                    else if(box[1]==0)
                                           {
                         j = 1;
                    }
                    else if(box[2] == 0)
                                           {
                         j = 2;
                    }
                }
                else if(t==4)
                {

                    if(box[1]==0)
                    {
                         j = 1;
                    }
                    else if(box[5]==0)
                    {
                         j = 5;
                    }
                    else if(box[7]==0)
                                           {
                         j = 7;
                    }
                    else if(box[3]==0)
                                           {
                         j = 3;
                    }
                    else if(box[6]==0)
                                            {
                         j = 6;
                    }
                    else if(box[2]==0)
                                           {
                         j = 2;
                    }
                    else if(box[8]==0)
                                            {
                         j = 8;
                    }
                    else if(box[0] == 0)
                                            {
                         j = 0;
                    }
                }
                else if(t==5)
                {

                    if(box[2]==0)
                    {
                         j = 2;
                    }
                    else if(box[8]==0)
                    {
                         j = 8;
                    }
                    else if(box[4]==0)
                    {
                         j = 4;
                    }
                    else if(box[3]==0)
                    {
                         j = 3;
                    }
                    else if(box[0]==0)
                    {
                         j = 0;
                    }
                    else if(box[7]==0)
                    {
                         j = 7;
                    }
                    else if(box[6]==0)
                    {
                         j = 6;
                    }
                    else if(box[1]==0)
                    {
                         j = 1;
                    }
                }
                else if(t==6)
                {

                    if(box[3]==0)
                    {
                         j = 3;
                    }
                    else if(box[7]==0)
                    {
                         j = 7;
                    }
                    else if(box[4]==0)
                    {
                         j = 4;
                    }
                    else if(box[0]==0)
                    {
                         j = 0;
                    }
                    else if(box[8]==0)
                    {
                         j = 8;
                    }
                    else if(box[2]==0)
                    {
                         j = 2;
                    }
                    else if(box[5]==0)
                    {
                         j = 5;
                    }
                    else if(box[2]==0)
                    {
                         j = 2;
                    }
                    else if(box[1]==0)
                    {
                         j = 1;
                    }
                }
                else if(t==7)
                {

                    if(box[4]==0)
                    {
                         j = 4;
                    }
                    else if(box[6]==0)
                    {
                         j = 6;
                    }
                    else if(box[8]==0)
                    {
                         j = 8;
                    }
                    else if(box[1]==0)
                    {
                         j = 1;
                    }
                    else if(box[3]==0)
                    {
                         j = 3;
                    }
                    else if(box[5]==0)
                    {
                         j = 5;
                    }
                    else if(box[0]==0)
                    {
                         j = 0;
                    }
                    else if(box[2]==0)
                    {
                         j = 2;
                    }
                }
                else if(t == 8)
                {

                    if(box[5]==0)
                    {
                         j = 5;
                    }
                    else if(box[7]==0)
                    {
                         j = 7;
                    }
                    else if(box[6]==0)
                    {
                         j = 6;
                    }
                    else if(box[2]==0)
                    {
                         j = 2;
                    }
                    else if(box[4]==0)
                    {
                         j = 4;
                    }
                    else if(box[0]==0)
                    {
                         j = 0;
                    }
                    else if(box[3]==0)
                    {
                         j = 3;
                    }
                    else if(box[1]==0)
                    {
                         j = 1;
                    }
                }
        return j;
}

void PlayComputer(int sc,int typ)
{
    setcolor(sc);
    clearviewport();
        ticbox(typ);
    // The game starts from here
     int  i,t,j;
     char box[9]; // The 9 boxes for the tic box;
            play:

            for(i=0;i<9;i++) // For loop for initialization each cell by null
            {
                box[i] = 0 ;
            }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//...........................................Here is the first move........................................................//

        Enter:    // Making a point. If user enters wrong the it help
            scanf("%d",&i);
                i = i-1;
                if(box[i] == 0)
                {
                box[i] = 'X';
                plotX(i);
                }
                else
                {
                    printf("\a");
                    printf("\a");
                    printf("\a");
                     goto Enter;
                }


                    if(i>=9 || i<0)
                    {
                        printf("This is an wrong entry please try again..! ");
                        goto Enter;
                    }
                    else if(i==4)
                    {
                        box[0] = 'O';
                        t = 0;
                        plotO(0);
                    }

                    else
                    {
                        box[4] = 'O';
                        t=4;
                        plotO(4);
                    }

            while(1)
            {
                renter:
                scanf("%d",&i);
                i = i-1;
                    if(box[i]==0)
                    {
                box[i] = 'X';
                plotX(i);
                    }
                    else
                    {
                        printf("\a");
                        printf("\a");
                        printf("\a");
                        goto renter;
                    }


                    if(i>=9 || i<0)
                    {
                        printf("This is an wrong entry please try again..! ");
                        continue;
                    }
                 win(box[0], box[1], box[2], box[3], box[4], box[5], box[6], box[7], box[8]);

             i =  secmov(box[0], box[1], box[2], box[3], box[4], box[5], box[6], box[7], box[8],t);
                    box[i] = 'O';
                    plotO(i);
                  win(box[0], box[1], box[2], box[3], box[4], box[5], box[6], box[7], box[8]);
            }

}

void PlayHuman( int sc,int typ)
{
    clearviewport();
         settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
        settextjustify(LEFT_TEXT,TOP_TEXT);
        printf("\a");
         printf("\a");
        outtextxy(2,530,"First player have 'X' ");
        outtextxy(235,530,"Second player have 'Y' ");
               delay(1000);
         printf("\a");
          printf("\a");
            ticbox(ty);

// =====================================================================================
    // The Orignal game logic starts here

        char box[9];
        int i,input;
            for(i=0;i<9;i++)
                box[i] = 0;
        while(1)
        {
            setcolor(4);
           outtextxy(2,530,"First player have 'X' ");
    p1:
            scanf("%d",&input);
                input = input -1;
                    if(box[input]==0)
                    {
                        box[input] = 'X';
                            setcolor(sc);
                        plotX(input);
                    }
                    else
                    {
                        printf("\a");
                        printf("\a");
                        printf("\a");
                        goto p1;
                    }

            winHuman(box[0], box[1], box[2], box[3], box[4], box[5], box[6], box[7], box[8]);
                 setcolor(15);
           outtextxy(2,530,"First player have 'X' ");


                setcolor(4);
            outtextxy(235,530,"Second player have 'Y' ");
    p2:
                scanf("%d",&input);
                input = input -1;
                  if(box[input]==0)
                    {
                        box[input] = 'O';
                            setcolor(sc);
                        plotO(input);
                    }
                    else
                    {
                        printf("\a");
                        printf("\a");
                        printf("\a");
                        goto p2;
                    }

            winHuman(box[0], box[1], box[2], box[3], box[4], box[5], box[6], box[7], box[8]);
             setcolor(15);
            outtextxy(235,530,"Second player have 'Y' ");

        }



}


int play(int scolor,int type) //  Here sc for sign color, bc for box color and t for type
{
     sc = scolor;
     ty = type;

        plotO(sc);
        plotX(sc);
        cleardevice();
    int c,cu=1; // C is for choosing option an cu for wrong entry loop
        setcolor(15);
        settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
        settextjustify(CENTER_TEXT,TOP_TEXT);
        outtextxy(235,10,"To Choose the option please ");
        outtextxy(235,30,"Press the option number on numpad ");

    line(0,65,470,65);
    line(0,430,470,430);
        settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
        outtextxy(235,100,"1. Against Computer ");
        outtextxy(235,170,"2. Against Human  ");
        input :
            scanf("%d",&c);
        if(c == 1)
            PlayComputer(sc,ty); // Here values are passed in PlayComputer
        else if(c == 2)
            PlayHuman(sc,ty);   // Here values are passed in PlayHuman
        else
        {
             setcolor(cu++);
             settextstyle(DEFAULT_FONT,HORIZ_DIR,0);
            outtextxy(235,270,"Wrong Entry please try again !!! ");
                goto input;
        }
    return 0;

}

