#include <graphics.h>
#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;
int main () {
	float x,y;
	cout << "Vvedite x,y";
	cin >> x >> y;
	x = x + 200;
	y = 200 - y; 
	initwindow(400, 300);
	line(200, 0, 200, 300);
	outtextxy(210, 10, "Y");
	line(0, 200, 300, 200);
	outtextxy(300,200, "X");
	circle(160, 160, 40);
	circle(240, 240, 40);
	line(160,160, 240, 160);
	line(160,160, 160, 240);
	line(160,240, 240, 240);
	line(240,240, 240, 160);
	setfillstyle ( 3, 15 );
	floodfill (230, 230, 15); 
	setfillstyle ( 3, 15 );
	floodfill (190, 190, 15);
	setfillstyle ( 3, 15 );
	floodfill (0, 0, 15);
	int r = 40;
	circle(x, y, 4);
	x = x - 200;
	y = 200 - y;
	if((((x+r)*(x+r) + (y-r)*(y-r) >= r*r) && (x<0) && (y>0)) or (((x-r)*(x-r) + (y+r)*(y+r) <= r*r) && (0<=x<=r) && (-r<=y<=0))){
		cout << "Tochka vxodit\n";
	}
	else {
		cout << "Tochka ne vxodit\n";
	}
	getch (); 
	closegraph(); 
	return 0;
}
