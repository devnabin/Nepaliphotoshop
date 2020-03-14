/*
version 1.0
NepaliPhotoshop
*/

/*
uncomment lists are :-
1.Loading screen
2.help section

*/
#include<cmath>
#include<cstring>

#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
using namespace std;


//Function Decleration
int polishimage();
void ptriangle();    // polish image
void psquare();        //polish image
void pline();      //polish image
void pellipse();      //polish imgae
void pcircle();    //polish image
void init();        //first function having all the other sub function
void Endiing();     //the last end show function
void draw(int ,int , int); //polish draw wola
void addtext();  //to add a text in console
void help();    //to  color selection help



//Global Variable
int win1 , win2 , win3;

// variable for the functions of the image display
char color[2];
int axis_color_x=15;
int axis_color_y=20;


/*
//help function
void help(){
win2 = initwindow(530,530,"help console");
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
setcurrentwindow(win2);
for(int i =0 ; i<16 ; i++){
        setcolor(i);
        if(i==0)
        {
            setcolor(15);
        }
        sprintf(color,"%d:",i);
        switch(i)
        {
        case 0:
            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Black");
            break;
            case 1:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Blue");
            break;
            case 2:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Green");
            break;

            case 3:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Cyan");
            break;

            case 4:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Red");
            break;

            case 5:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Magneta");
            break;

            case 6:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Brown");
            break;

            case 7:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Light Gray");
            break;

            case 8:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Dark gray");
            break;

            case 9:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Light Blue");
            break;

            case 10:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Light Green");
            break;

            case 11:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Light Cyan");
            break;

            case 12:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Light Red");
            break;

            case 13:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Light Magneta");
            break;

            case 14:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"Yellow");
            break;

            case 15:

            outtextxy(axis_color_x,axis_color_y,color);
            outtextxy(axis_color_x+85,axis_color_y,"White");
            break;
        }

        axis_color_y+=30;
     }

setcurrentwindow(win1);
}

/*
//Loading screen
void loadingscreen(int tim){
settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
outtextxy(80,50,"LOADING...");
for(int a=0;a<=500;a=a+10){
 putpixel(50+a,150,3);
  putpixel(50+a,155,3);
  putpixel(50+a,305,9);
  putpixel(50+a,300,9);
rectangle(50+a,200,100+a,250);
delay(tim);
}
cleardevice();
}

*/

//Measurement Scale
void scale(){
    setcolor(2);
    char arr[100000]={};
        for(int i =0 ; i < 530 ; i+=50){
        line(i,0,i,15);
        line(0,i,15,i);
        sprintf(arr,"%d",i);
       outtextxy(i,15,arr);
        outtextxy(15,i,arr);


    }
    rectangle(40,30,500,500);


}
 int addobj(){

     cout << "1.TRIANGLE" << endl << "2.Square" << endl << "3.line"  << endl << "4.ellipse"<< endl;
     int a;
     cin >> a;
     switch(a){
 case 1:
   // mtriangle();
    break;
 case 2:
//    msquare();
    break;
 case 3:
  //  mline();
    break;
    }
     return 0;
 }


/*

 void mtriangle(){
     setcolor(15);
int xloc , yloc , co;
cout << "Give the x loaction to draw : " ;
cin >> xloc;
cout << "Give the y location to draw : " ;
cin >> yloc;
cout << "Enter the color you want to fill : ";
cin >> co ;
line(xloc,yloc,xloc+30,yloc+50);
line(xloc+30,yloc+50,xloc-30,yloc+50);
line(xloc , yloc , xloc-30 , yloc+50);
setfillstyle(1,co);
floodfill(xloc , yloc+5, 15);
 }

 */




 void psquare(int x , int y , int a){
     rectangle(x,y,x+a,y+a);
 };
void pline(){
}
 void ptriangle(int x , int y){
     int points[]={x,y,x+20,y+20,x-20,y+20,x,y};
      fillpoly(4, points);
 };
  void pcircle(int x , int y , int z){
      circle(x,y,z);
 };
;
 void pellipse(int x ,int y){

     ellipse(x,y,0,360,10,20);
 };



 int polishimage(){
     int setcolorinput ,c ,x ,y,getval;
     int xp , yp , sz;
       up:
      system("cls");
     cout << "What shape Do you want to polish" << endl;
     cout << " 1.Square \n 2.Triangle \n 3.Circle \n 4.Ellipse\n 5.Go back \n" << endl;
     cin >> getval;
     if(getval==0 || getval >  5 ){
         cout << endl;
         goto up;
     }
     if(getval == 6){
            return 0;
     }
     cout << "Enter the color to paint " << endl;
     cin >> setcolorinput;
     setcolor(setcolorinput);

     switch(getval){
     case 1: //mcase square
         cout << "Enter the position of x ; ";
         cin >> x;
         cout << "Enter the position of y : ";
         cin >>y ;
         cout <<"Enter the size of square >10 is good  : " ;
         cin >> sz;

   while(1){
   c=getch();
   if(c == 72 || c ==80 || c ==77 || c ==75 || c == 8){
   switch(c){
case 72 :
    cout << " you enter up arrow \n";
    y--;
     psquare(x,y,sz);
    break;
case 80 :
    cout << "you enter down arrow \n";
      y++;
     psquare(x,y,sz);
      break ;
case 77 :
    cout << "you enter right arrow \n";
    x++;
     psquare(x,y,sz);
    break ;
case 75 :
    cout << "you enter left arrow \n";
    x--;
    psquare(x,y,sz);
break;

case 8:
    cout<< "Back pressed !!";
    goto up;
    break;

}
}
}


break;
//msquareclose
    case 2: //mcase triangle
         cout << "Enter the position of x ; ";
         cin >> x;
         cout << "Enter the position of y : ";
         cin >>y ;
   while(1){
   c=getch();
   if(c == 72 || c ==80 || c ==77 || c ==75 || c == 8 ){
   switch(c){
case 72 :
    cout << " you enter up arrow \n";
    y--;
    ptriangle(x,y);
    break;
case 80 :
    cout << "you enter down arrow \n";
    y++;
 ptriangle(x,y);
    break ;
case 77 :
    cout << "you enter right arrow \n";
    x++;
 ptriangle(x,y);
    break ;
case 75 :
    cout << "you enter left arrow \n";
    x--;
     ptriangle(x,y);
    break;
  case 8:
    cout<< "Back pressed !!";
    goto up;
    break;
}
}
}
break;
//mtriangle close
    case 3: //circle

   cout << "Enter the x co-ordinate for edition : " << endl;
   cin >> x;
   cout << "Enter the y co-ordinate for edition : " << endl;
   cin >> y;
   cout<< "Enter the size of circle to paint less then 20 is suggested : ";
    cin >> sz;
   while(1){
   c=getch();
   if(c == 72 || c ==80 || c ==77 || c ==75 || c == 8 ){
   switch(c){
case 72 :
    cout << " you enter up arrow \n";
    y--;
    pcircle(x,y,sz);
    break;
case 80 :
    cout << "you enter down arrow \n";
    y++;
 pcircle(x,y,sz);
    break ;
case 77 :
    cout << "you enter right arrow \n";
    x++;
 pcircle(x,y,sz);
    break ;
case 75 :
    cout << "you enter left arrow \n";
    x--;
     pcircle(x,y,sz);
    break;
case 8:
    cout<< "Back pressed !!";
    goto up;
    break;
}
}
}
break;
//pelipse
    case 4: //mcase ellipse
         cout << "Enter the x co-ordinate for edition : " << endl;
   cin >> x;
   cout << "Enter the y co-ordinate for edition : " << endl;
   cin >> y;
   while(1){
   c=getch();
   if(c == 72 || c ==80 || c ==77 || c ==75 || c == 8 ){
   switch(c){
case 72 :
    cout << " you enter up arrow \n";
    y--;
    pellipse(x,y);
    break;
case 80 :
    cout << "you enter down arrow \n";
    y++;
  pellipse(x,y);
    break ;
case 77 :
    cout << "you enter right arrow \n";
    x++;
  pellipse(x,y);
    break ;
case 75 :
    cout << "you enter left arrow \n";
    x--;
      pellipse(x,y);
    break;
case 8:
        cout<< "Back pressed !!";
    goto up;
    break;
}
}
}
break;

}}

//background change
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


//add text

void addtext(){
int color , x , y , fontsize ,dir =0 ;
char dirck;
char name[20];
cout << "Enter Your name : ";
cin >> name;
up:
cout <<"Enter the font size of the text (less or equal to 5) : ";
cin >>fontsize;
if(fontsize >5){
    goto up;
}
cout <<"Enter the color in int as in help section : " ;
cin >> color;
cout << "Enter the x co-ordinate for text : " ;
cin >> x;
cout << "Enter the y co-ordinate for text : ";
cin >>y;
cout << "Rotate Y/N :  ";
cin >> dirck;
if(dirck =='Y' || dirck == 'y'){
    dir =1;
}
setcolor(color);
settextstyle(DEFAULT_FONT,dir,fontsize);
outtextxy(x,y,name);


}



//init the send main function before main to load image variable or any stuff
void init(){
    //loading image in console

       int a=0;
       char chk=0;
       do{
       cout << endl << endl <<  "1.ADD OBJ" << endl  << "2.POLISH image" <<endl << "3.REPLACE COLOR" << endl << "4.Add Text" << endl;
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
   case 4:
    addtext();
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

   win1 = initwindow(530,530,"main console");
   setcurrentwindow(win1);

//   help();        //done
   //// loadingscreen(100);
   scale();
    readimagefile("C:\\Users\\Acer\\OneDrive\\Pictures\\mypic.jpg",40,30,500,500);
   init();
    Ending();
    getch();
    closegraph(win1);
    closegraph(win2);
    return 0;
}


