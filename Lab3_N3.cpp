#include <iostream>
#include <iomanip>
#include <math.h>
#include <graphics.h> 
#include <stdlib.h> 
using namespace std;

int main(){
	initwindow(900,600); 

	moveto(0,250); 
	lineto(800,250);
	moveto(500,100); 
	lineto(500,400); 
 
	outtextxy(800,270,"X");outtextxy(0,255,"-10");outtextxy(50,255,"-9");outtextxy(100,255,"-8");outtextxy(150,255,"-7");outtextxy(200,255,"-6");outtextxy(250,255,"-5");outtextxy(300,255,"-4");outtextxy(350,255,"-3");outtextxy(400,255,"-2");outtextxy(450,255,"-1");outtextxy(500,255,"0");outtextxy(550,255,"1");outtextxy(600,255,"2");outtextxy(650,255,"3");outtextxy(700,255,"4");outtextxy(750,255,"5");outtextxy(800,255,"6"); 
	outtextxy(510,110,"Y");outtextxy(490,100,"3");outtextxy(490,150,"2");outtextxy(490,200,"1");outtextxy(480,300,"-1");outtextxy(480,350,"-2");outtextxy(480,400,"-3"); 
  
	
	float dx,xn,xk,c,e,x,n,zn;
	cout<<"Vvedite nachalnoe znachenie,xn=";
	cin>>xn;
	cout<<"Vvedite konechnoe znachenie,xk=";
	cin>>xk;
	cout<<"Vvedite shag,dx=";
	cin>>dx;
	cout<<"Vvedite pogreshnost,e=";
	cin>>e;
	x=xn;
	cout<<"|	x	| symma |  esp  |iteraci|"<<"\n";
	while (x<xk){
		c=x;
		zn=-c;
		n=1;
		while (fabs(c)>e){
			c=(c*x)/(n+1);
			zn=zn-c;
			n++;
		}
		if (n>500){
			cout<<"|-----|----------|--------|------------|"<<"\n";
			cout<<"ryad rashoditsya";
		} else{
			circle( x*50+500, zn*50+255, 2);
			cout<<"|	" << setprecision(2) << x << "	| ";
			cout<< setprecision(2) << zn << "	| ";
			cout<< setprecision(6) << e << "	| ";
			cout << setprecision(6) << n << "	|"<< endl;
		}
		x=dx+x;
		zn=0;
	}
getch (); 
closegraph(); 	
return 0;
system("pause");
}

