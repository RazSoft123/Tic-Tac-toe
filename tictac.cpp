// This file contains graphical representation of all objects of this game

#include<graphics.h>

void testO(int x, int y)
{
    int r=60;
    for(r;r>=50;r--)
        circle(x,y,r);
}


void test(int x1, int y1, int x2, int y2)
{
    int i;
 for(i=0;i<=9;i++)
   {
       line(x1,y1++,x2,y2++);
       line(x1,y2,x2,y1);
   }
}


int ticbox(int t)
{
    if(t==1)
    {
        setfillstyle(SOLID_FILL,15);
    bar(0,170,469,180);
    bar(0,330,469,340);
    bar(150,20,160,490);
    bar(310,20,320,490);
    }
    else if(t==2)
    {
         setfillstyle(SOLID_FILL,15);
    rectangle(0,170,469,180);
    rectangle(0,330,469,340);
    rectangle(150,20,160,490);
    rectangle(310,20,320,490);
    }

    outtextxy(10,20,"1");
    outtextxy(170,20,"2");
    outtextxy(330,20,"3");
    outtextxy(10,190,"4");
    outtextxy(170,190,"5");
    outtextxy(330,190,"6");
    outtextxy(10,360,"7");
    outtextxy(170,360,"8");
    outtextxy(330,360,"9");

return 0;
}

int plotX( int n)
{
static int k = 1;
    if(k == 1)
        setcolor(n);

k++;

    int y1,y2,x1,x2,i;
    switch(n)
    {
    case 0 :

            y1 = 26;
            y2 = 156;
            x1 = 10;
            x2 = 140;
        test(x1,y1,x2,y2);
            break;
    case 1 :

            y1 = 26;
            y2 = 156;
            x1 = 170;
            x2 = 300;
          test(x1,y1,x2,y2);
          break;

    case 2 :

            y1 = 26 ;
            y2 = 156;
            x1 = 330;
            x2 = 460;
         test(x1,y1,x2,y2);
           break;
    case 3 :

            y1 = 186 ;
            y2 = 316;
            x1 = 10;
            x2 = 140;
         test(x1,y1,x2,y2);
           break;
    case 4 :

            y1 = 186 ;
            y2 = 316;
            x1 = 170;
            x2 = 300;
         test(x1,y1,x2,y2);
           break;
    case 5 :

            y1 = 186;
            y2 = 316;
            x1 = 330;
            x2 = 460;
         test(x1,y1,x2,y2);
           break;
    case 6 :

            y1 = 346;
            y2 = 476;
            x1 = 10;
            x2 = 140;
         test(x1,y1,x2,y2);
           break;
    case 7 :

            y1 = 346;
            y2 = 476;
            x1 = 170;
            x2 = 300;
         test(x1,y1,x2,y2);
           break;
    case 8 :

            y1 = 346;
            y2 = 476;
            x1 = 330;
            x2 = 460;
         test(x1,y1,x2,y2);
           break;


    default :
        ;


    }

    return 0;
}

int plotO( int n)
{
    static int i = 1;
    if(i == 1)
        setcolor(n);

i++;
    switch(n)
    {
    case 0:
        testO(75,95);
        break;
    case 1:
        testO(235,95);
        break;
    case 2:
        testO(395,95);
        break;
    case 3:
        testO(75,255);
        break;
    case 4:
        testO(235,255);
        break;
    case 5:
        testO(395,255);
        break;
    case 6:
        testO(75,415);
        break;
    case 7:
        testO(235,415);
        break;
    case 8:
        testO(395,415);
        break;
    default :
        ;
    break;
    }
    return 0;
}

void start()
{
    int i = 0;
    line(0,50,470,50);
    settextstyle(TRIPLEX_FONT,HORIZ_DIR,3); // This Function is used to set the style of RazSoft Text Apper on startup
    settextjustify(CENTER_TEXT,BOTTOM_TEXT);// This function is used to set the justification of RazSoft Text
        outtextxy(235,50,"RazSoft");
    settextstyle(COMPLEX_FONT,HORIZ_DIR,5); // This function is used to style the Tic Tac Toe at start
        outtextxy(235,120,"Tic - Tac - Toe ");
  //  line(0,150,470,150);
  //  line(0,460,470,460);
  //  line(80,150,80,460);
 //   line(390,150,390,460);

    // The Ticbox is starting from here
        // Vertical lines
    bar(183,150,188,460); // First vertical line
    bar(286,150,291,460); // Second Vertical line

        // Horizontal lines
    bar(80,253,390,258); // First Horizontal line
    bar(80,356,390,361); // Second Horizontal line

        // First O in the startup
    for( i = 40; i>=35; i--)
        {
            circle(130,205,i);
            circle(238,308,i);
            circle(343,413,i);
        }
            setcolor(4);
            int x1 = 77, x2 = 387, y1 = 150, y2 = 460;
        for(i=0;i<=7;i++)
            line(x1++,y1--,x2++,y2--);
    // The loading button is here

    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    settextjustify(LEFT_TEXT,TOP_TEXT);

    outtextxy(50,490,"Loading :- ");
       for( i=210;i<=410;i+=2)
        {
             bar(210,492,i,502);
                delay(50);
        }

    setfillstyle(EMPTY_FILL,0);
     bar(0,460,470,550);
    setcolor(4);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
        outtextxy(50,490,"Press Enter :  ");
    return ;
}


