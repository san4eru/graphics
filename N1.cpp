#include <graphics.h> 
#include <iostream> 
#include <math.h> 
#include <iomanip> 
#include <stdlib.h> 

using namespace std;
int main () {
	setlocale(LC_ALL, "Russian"); 
	double x, y;
	cout << "Vvedite x:";
	cin >> x;
  	initwindow(900,600); 

	moveto(0,250); 
	lineto(800,250);
	moveto(500,100); 
	lineto(500,400); 
 
	arc(150,150,180,0,100); 
	moveto(250,150); 
	lineto(300,150); 
	moveto(300,150); 
	lineto(500,250); 
	moveto(500,250); 
	ellipse(575,250,0,180,75,50);
	moveto(650,250); 
	lineto(750,157); 
	outtextxy(800,270,"X");outtextxy(0,255,"-10");outtextxy(50,255,"-9");outtextxy(100,255,"-8");outtextxy(150,255,"-7");outtextxy(200,255,"-6");outtextxy(250,255,"-5");outtextxy(300,255,"-4");outtextxy(350,255,"-3");outtextxy(400,255,"-2");outtextxy(450,255,"-1");outtextxy(500,255,"0");outtextxy(550,255,"1");outtextxy(600,255,"2");outtextxy(650,255,"3");outtextxy(700,255,"4");outtextxy(750,255,"5");outtextxy(800,255,"6"); 
	outtextxy(510,110,"Y");outtextxy(490,100,"3");outtextxy(490,150,"2");outtextxy(490,200,"1");outtextxy(480,300,"-1");outtextxy(480,350,"-2");outtextxy(480,400,"-3"); 
  
	cout << "—————————————————————————————\n|" << setw (13) << "X" ; 
	cout << "|" << setw (13) << "Y"<<"|\n—————————————————————————————\n"; 
	if (-9<=x & x<=-5) { 
		y=2 - sqrt(4-(x+7)*(x+7));
		cout << "|"<< setw (13) << right << x << "|" << setw (13) ; 
		cout << right << setprecision(3)<< y << "|\n—————————————————————————————\n"; 
		x=(10-(x*(-1)))*50;
		y=(5-y)*50 + 5;
		setcolor(4); 
		circle(x,y,7); 
		setfillstyle ( 1, 4 ); 
		floodfill (x, y, 4); 
	} 
	if (-5<=x & x<=-4){ 
		y=2; 
		cout << "|"<< setw (13) << right << x << "|" << setw (13) ; 
		cout << right << setprecision(3)<< y << "|\n—————————————————————————————\n"; 
		x=(10-(x*(-1)))*50; 
		y=(5-y)*50 + 5;
		setcolor(4); 
		circle(x,y,7); 
		setfillstyle ( 1, 4 ); 
		floodfill (x, y, 4); 
	} 
	if (-4<=x & x<=0){ 
		y=-x/2;  
		cout << "|"<< setw (13) << right << x << "|" << setw (13); 
		cout << right << setprecision(3)<< y << "|\n—————————————————————————————\n"; 
		x=(10-(x*(-1)))*50;  
		y=(5-y)*50 + 5;
		setcolor(4); 
		circle(x,y,7); 
		setfillstyle ( 1, 4 ); 
		floodfill (x, y, 4); 
	} 
	if (0<=x & x<=M_PI){ 
		y=sin(x); 
		cout << "|"<< setw (13) << right << x << "|" << setw (13) ; 
		cout << right << setprecision(3)<< y << "|\n—————————————————————————————\n"; 
		x=(x+10)*50;  
		y=(5-y)*50 + 5;  
		setcolor(4); 
		circle(x,y,7); 
		setfillstyle ( 1, 4 ); 
		floodfill (x, y, 4); 
	} 
	if (M_PI<=x & x<=5) { 
		y=x - M_PI;  
		cout << "|"<< setw (13) << right << x << "|" << setw (13) ; 
		cout << right << setprecision(3)<< y << "|\n—————————————————————————————\n"; 
		x=(x+10)*50; 
		y=(5-y)*50 + 5; 
		setcolor(4); 
		circle(x,y,7); 
		setfillstyle ( 1, 4 ); 
		floodfill (x, y, 4); 
	}
	getch (); 
	closegraph(); 
	return 0; 
}
