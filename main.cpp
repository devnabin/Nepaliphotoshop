/*
version 1.0
NepaliPhotoshop
*/

#include <iostream>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
using namespace std;


//Function Decleration
int mtriangle();    //
int mline();        //
int msquare();      //
void init();        //first function having all the other sub function
void Endiing();     //the last end show function

void draw(int ,int , int); //polish draw wola

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

     cout << "What shape Do you want to polish" << endl;
     cout << "1.Rectangle  \n 2.Square \n 3.Circle \n 4."
     int getval;
     cin >> getval;
     if(getval == 1){

     }else if(getvl ==2){
     }

   int setcolorinput ,c ,x ,y;;
   cout << "Enter the color to paint " << endl;
   cin >> setcolorinput;
   cout << "Enter the x co-ordinate for edition : " << endl;
   cin >> x;
   cout << "Enter the y co-ordinate for edition : " << endl;
   cin >> y;
     int z;
     cout<< "Enter the size of circle to paint";
     cin >> z;
   setcolor(setcolorinput);
   while(1){
   c=getch();
   if(c == 72 || c ==80 || c ==77 || c ==75 ){
   switch(c){
case 72 :
    cout << " you enter up arrow \n";
    y--;
    draw(x,y,z);
    break;
case 80 :
    cout << "you enter down arrow \n";
    y++;
   draw(x,y,z);
    break ;
case 77 :
    cout << "you enter right arrow \n";
    x++;
    draw(x,y,z);
    break ;
case 75 :
    cout << "you enter left arrow \n";
    x--;
    draw(x,y,z);
    break;
case 8:
    break;
default :

    cout<< "pleaser enter an arrow: \n"; break;
    delay(10);
    break;
}
}else{
cout << "Enter the valid buttuon " ;
}
if(c==8){
return 0;
}
}

}




 void draw(int a , int b  , int c){

   circle(a,b ,c);

}

//to chage the background color
 void bkcolorchange(){
     int a ,b;
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

//init the send main function before main to load image variable or any stuff
void init(){
    //loading image in console

       int a=0;
       char chk=0;
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
}

//Ending
void Ending(){
    cout << "THANKS FOR USING MY TOOL" << endl;
}

//main Program
int main(){

    initwindow(1540,1000);
      readimagefile("C:\\Users\\Acer\\OneDrive\\Desktop\\mypic.jpg",10,10,1500,1000);
     cout << "wELCOME";
    init();
    Ending();
    getch();
    return 0;
}


