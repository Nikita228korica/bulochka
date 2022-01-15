#include "TXLib.h"
void Background ();
void Home ();
void Grass ();
void Tree ();
void Romeo ();
void Pendant (int pendantx, int pendanty);
void Sun ();
void Clouds ();


int main()
{
txCreateWindow (1000,750);

int pendantx=320;
int pendanty=290;

Background ();
Home ();
Grass ();
Tree ();
Romeo ();
Pendant (pendantx, pendanty);
Sun ();
Clouds ();

int t=0;
while (t<150)
{
    txClear ();
    Background ();
    Home ();
    Grass ();
    Tree ();
    Romeo ();
    Sun ();
    Clouds ();
    pendantx +=5;
    pendanty +=5;

    Pendant (pendantx, pendanty);
    txSleep (20);
    t+=1;
}


return 0;

}

void Background ()
{
    txSetFillColor (RGB (0, 200, 200));
    txRectangle (0, 0, 1000, 750);
    txSetColor(RGB (0, 0, 0));
}

void Home ()
{
    txSetFillColor (RGB (166, 124, 99));
    txRectangle (0, 200, 300, 900);
    txSetFillColor (TX_GRAY);
    txRectangle (300, 240, 310, 360);
    txRectangle (0, 170, 310, 200);
}

void Grass ()
{
    txSetColor(TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (0, 600, 1000, 750);
}

void Tree ()
{
    txSetColor (RGB (145, 75, 39));
    txSetFillColor (RGB (145, 75, 39));
    txRectangle (800, 370, 835, 600);
    txSetColor(TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (800, 378, 60);
    txCircle (830, 382, 61);
    txCircle (770, 350, 61);
    txCircle (850, 350, 61);
    txCircle (795, 295, 61);
    txCircle (835, 295, 61);
}

void Romeo ()
{
    txSetColor(RGB (0, 0, 0));
    txSetFillColor (TX_BLUE);
    txRectangle (350, 500, 380, 600);
    txRectangle (338, 500, 350, 560);
    txRectangle (380, 500, 392, 560);
    txSetFillColor (RGB (226, 181, 150));
    txCircle (365, 485, 20);
}

void Pendant (int pendantx, int pendanty)
{
    txSetColor (TX_BLACK);
    txSetFillColor (RGB (255, 247, 87));
    txCircle (pendantx, pendanty, 7);
    txLine (pendantx - 6, pendanty - 15, pendantx - 3, pendanty - 5);
    txLine (pendantx - 6, pendanty - 15, pendantx, pendanty - 20);
    txLine (pendantx, pendanty - 20, pendantx + 5, pendanty - 25);
    txLine (pendantx + 5, pendanty - 25, pendantx + 10, pendanty - 17);
    txLine (pendantx + 10, pendanty - 17, pendantx - 2, pendanty - 5);
}

void Sun ()
{
    txSetColor(RGB (255, 247, 87));
    txSetFillColor (RGB (255, 247, 87));
    txCircle (1000, 0, 105);
    txLine (845, 120, 900, 73);
    txLine (883, 157, 926, 107);
    txLine (935, 180, 970, 119);
    txLine (829, 75, 880, 45);
}

void Clouds ()
{
txSetColor(TX_WHITE);

txSetFillColor (TX_WHITE);
txCircle (100, 100, 25);
txCircle (120, 115, 25);
txCircle (120, 85, 28);
txCircle (130, 100, 25);
txCircle (165, 100, 25);
txCircle (158, 83, 29);
txCircle (153, 110, 27);
txCircle (172, 100, 27);

txCircle (350, 80, 25);
txCircle (380, 80, 25);
txCircle (410, 77, 25);
txCircle (430, 80, 25);
txCircle (470, 80, 25);
txCircle (365, 60, 25);
txCircle (390, 60, 25);
txCircle (420, 58, 29);
txCircle (455, 60, 25);
txCircle (380, 89, 31);
txCircle (400, 89, 25);
txCircle (440, 89, 30);

txCircle (700, 90, 25);
txCircle (725, 110, 25);
txCircle (725, 70, 25);
txCircle (745, 90, 25);
txCircle (765, 70, 25);
txCircle (765, 110, 25);
txCircle (787, 90, 25);
}
