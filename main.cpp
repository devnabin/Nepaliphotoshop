#include <iostream>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
int mtriangle();
int mline();
int msquare();
void drawc(int ,int);
using namespace std;
 int a, b;
 int addobj(){

     cout << "1.TRIANGLE" << endl << "2.Square" << endl << "3.line" << endl;
     int a;
     cin >> a;
     switch(a){
 case 1:
    mtriangle();
    break;
 case 2:
    msquare();
    break;
 case 3:
    mline();
    break;
    }
     return 0;
 }
 int mline(){
     setcolor(BLACK);
 line(10,10,30,100);
return 0;
 }
 int mtriangle(){
 return 0;
 }
 int msquare(){
 return 0;
 }


 int polishimage(){
   //POLISH COPY
   int setcolorinput;
   cout << "Enter the color to paint " << endl;
   cin >> setcolorinput;
   setcolor(setcolorinput);
   int c;
int x=300;
int y=300;
   while(1){
c=getch();
//b++;
if(c == 72 || c ==80 || c ==77 || c ==75 ){
 switch(c){
case 72 :
    cout << " you enter up arrow \n";
    y--;
    drawc(x,y);
    break;
case 80 :
    cout << "you enter down arrow \n";
    y++;
   drawc(x,y);
    break ;
case 77 :
    cout << "you enter right arrow \n";
    x++;
    drawc(x,y);
    break ;
case 75 :
    cout << "you enter left arrow \n";
    x--;
    drawc(x,y);
    break;
case 8: break;
//default : cout<< "pleaser enter an arrow: \n"; break;
delay(10);
}
}else{
cout << "Wrong input";
}


}

   //PEST END

     return 0;
 }

 void drawc(int a , int b ){
   circle(a,b ,5);

}

 void bkcolorchange(){
      cout << "Enter the color which you want to replace" << endl;
      cin >> a;
      cout << "Enter the color which you want to set " << endl;
      cin >> b;
     if(a<16 && b <16){
             for(int i = 0 ;i < getmaxx() ; i ++){
             for(int j =  0 ; j < getmaxy(); j++){
                   if(getpixel(i,j)==a){
                putpixel(i,j,b);
            }
        }
      }

       }
       }

int main()
{

    initwindow(1540,1000);
    readimagefile("C:\\Users\\Acer\\OneDrive\\Desktop\\mypic.jpg",10,10,1500,1000);
     cout << "wELCOME";
       int a;
        char chk;
       do{
       cout << endl << endl <<  "1.ADD OBJ" << endl  << "2.POLISH image" <<endl << "3.REPLACE COLOR" << endl;
       cin >> a;


       switch(a){
   case 1 :
    addobj();
    break;
   case 2:
    polishimage();
    break;
   case 3:
    bkcolorchange();
    break;
   default:
       cout << "Not a valid input " ;
    break;
    }
    cout << "Do You Want to continue" << endl;
    cin >> chk;
       } while(chk=='y' || chk=='Y');

       cout << "THANKS FOR USING MY TOOL" << endl;

    getch();
    return 0;
}
