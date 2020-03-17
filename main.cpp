/*
version 1.0
NepaliPhotoshop
*/

/*
uncomment lists are :-
1.Loading screen
2.help section

*/

#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
using namespace std;

//**********************
void xy(int , int );
void setfillst();
int setstyle, setcolorr;
//*************************


//Function Decleration
void init();  //first function having all the other sub function

//polish image
int polishimage();
void ptriangle();
void psquare();
void pellipse();
void pcircle();

//adding object in images
int addobj();
void circledraw(int ,int ,int);
void xyplusminus(int ,int , int ,int);
void objglasses(int , int );
void objpie(int ,int);
void objtriangle(int ,int);
void objellipse(int ,int);
//void objline(int int ,int, int);



//to add a text in console
void addtext();
//color help section
void help();

 //Ending Section
void Endiing();     //the last end show function




//Global Variable
int win1 =0 , win3 =0 ,win2=0;
//int r,t,xvalue;


// variable for the functions of the image display

//help function
void help(){
    if(win3!=0){
        closegraph(win3);
        win3=0;
    }

char color[20];
int axis_color_x=15;
int axis_color_y=20;

win3 = initwindow(530,530,"help console");
setcurrentwindow(win3);
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
for(int i =0 ; i<16 ; i++){
        setcolor(i);
        sprintf(color,"%d:",i);
        switch(i)
        {
        case 0:

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



//Measurement Scale
void scale(){
    int a;
   cout << endl << "Enter the color you want to use in SCaling : " ;
   cin >> a;
    setcolor(a);
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
 void psquare(int x , int y , int a){
     rectangle(x,y,x+a,y+a);
 };
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
     if(getval == 5){
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
       system("cls");
       cout << endl << "Home Menu : " ;
       cout << endl << "Choose a number for Manupulation : " << endl << endl << endl << endl;
       cout <<  "1.Scale"  << endl<< "2.REPLACE COLOR" << endl  << "3.POLISH image" <<endl <<"4.Add Text" <<  endl << "5.Add object "  << endl << "6.Help" << endl <<endl <<  endl;
        cin >> a;
   switch(a){
   case 1 :
   scale();
    break;
   case 2:
   bkcolorchange();
    break;
   case 3:
    polishimage();
    break;
   case 4:
   addtext();
    break;
    case 5:
     addobj();
     break;
    case 6:
    help();
      break;
   default:
   cout << "Not a valid input " ;
    break;
    }
    cout << endl << endl << "Do You Want to continue the Home Menu : " << endl;
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

//loadingscreen(100);
    readimagefile("C:\\Users\\Acer\\OneDrive\\Pictures\\mypic.jpg",40,30,500,500);

 init();
    Ending();
    getch();
    closegraph(win1); //main
  closegraph(win3);  //help
    return 0;
}



 int addobj(){
           system("cls");
 char conti;
 int x, y, rad;
do{
         system("cls");
      conti=' ';
       int  a=0;
        cout << endl << endl << "Add obj Menu : " << endl << endl ;
       cout << endl << endl << "1.TRIANGLE" << endl << "2.Square" << endl << "3.line"  << endl << "4.ellipse" << endl<< "5.pie slice "<<endl << "6.Glasses" <<endl << endl << endl;
     cin >> a;
     switch(a){
 case 1:  //triangle
     cout << "Enter the x co-ordinate for edition : " << endl;
   cin >> x;
   cout << "Enter the y co-ordinate for edition : " << endl;
   cin >> y;
    xyplusminus(x,y,0,a);
    break;
 case 2:  //square
   cout << "Enter the x co-ordinate for edition : " << endl;
   cin >> x;
   cout << "Enter the y co-ordinate for edition : " << endl;
   cin >> y;
   cout<< "Enter the size of circle to paint less then 20 is suggested : ";
   cin >> rad;
   xyplusminus(x,y,rad,a);
    break;
 case 3:
     int get;
     cout << "Use by default line (y/Y) : ";
     cin >> get;
     if(get=='y' || get == 'Y' ){
      xyplusminus(250,300,0,a);
     }else{
          cout << "Enter the x1 co-ordinate for edition : " << endl;
   cin >> x;
   cout << "Enter the y1 co-ordinate for edition : " << endl;
   cin >> y;
    cout << "Enter the x1 co-ordinate for edition : " << endl;
  // cin >> ;
   cout << "Enter the y1 co-ordinate for edition : " << endl;
  // cin >> ;
     }

    break;
 case 4: //ellipse
     cout<< "Enter the x co-ordinate : ";
     cin >> x;
     cout << "Enter the y co-ordinate : ";
     cin >> y;
     xyplusminus(x,y,0,a);
    break;
 case 5:
     cout<< "Enter the x co-ordinate : ";
     cin >> x;
     cout << "Enter the y co-ordinate : ";
     cin >> y;
     xyplusminus(x,y,0,a);
    break;
 case 6: //glasses
     cout<< "Enter the x co-ordinate : ";
     cin >> x;
     cout << "Enter the y co-ordinate : ";
     cin >> y;
     xyplusminus(x,y,0,a);
     break;
 default:
    cout << "Invalid Key Pressed 1 " ;
    conti = 'y' || 'Y';
    break;
    }
    if(conti!='y ' || conti!='Y'){
    cout << endl << endl << "Do you want to continue (y/Y) " << endl ;
    cin>> conti;
    }

}while(conti=='y' || conti=='Y');

     return 0;

 }

void xyplusminus(int x=0 , int y=0 ,int rad=0 , int chk=0){
win2 = initwindow(500,500, "win 2");
setcurrentwindow(win2);
setcolor(2);
int c;
   while(1){
   c=getch();
  cleardevice();
  setcolor(15);
   if(c == 72 || c ==80 || c ==77 || c ==75 || c ==13 ){
        readimagefile("C:\\Users\\Acer\\OneDrive\\Pictures\\testedit.jpg",40,30,500,500);
   switch(c){
case 72 :
    cout << " you enter up arrow \n";
    y--;
    switch(chk){
    case 1: //triangle
       objtriangle(x,y);
        break;
    case 2:  //square
        circledraw(x,y,rad);
        break;
    case 3://line
        break;
    case 4: //Ellipse
        objellipse(x,y);
        break;
    case 5: //Piechart
        objpie(x,y);
        break;
    case 6: //glasses
        objglasses(x,y);
        break;
    }

    break;
case 80 :
    cout << "you enter down arrow \n";
    y++;
        switch(chk){
    case 1: //triangle
        objtriangle(x,y);
        break;
    case 2:  //square
        circledraw(x,y,rad);
        break;
    case 3://line
        break;
    case 4: //Ellipse
        objellipse(x,y);
        break;
    case 5: //Piechart
        objpie(x,y);
        break;
            case 6: //glasses
        objglasses(x,y);
        break;
    }

    break ;
case 77 :
    cout << "you enter right arrow \n";
    x++;
        switch(chk){
    case 1: //triangle
        objtriangle(x,y);
        break;
    case 2:  //square
        circledraw(x,y,rad);
        break;
    case 3://line
        break;
    case 4: //Ellipse
        objellipse(x,y);
        break;
    case 5: //Piechart
        objpie(x,y);
        break;
            case 6: //glasses
        objglasses(x,y);
        break;
    }

    break ;
case 75 :
    cout << "you enter left arrow \n";
    x--;
        switch(chk){
    case 1: //triangle
        objtriangle(x,y);
        break;
    case 2:  //square
        circledraw(x,y,rad);
        break;
    case 3://line
        break;
    case 4: //Ellipse
        objellipse(x,y);
        break;
    case 5: //Piechart
        objpie(x,y);
        break;
            case 6: //glasses
        objglasses(x,y);
        break;
    }

    break;
case 13 :

closegraph(win2);
setcurrentwindow(win1);
    if(chk!=5){
    setcolor(15);
setfillst();
setfillstyle(setstyle,setcolorr);
cout << "obj test " ;
    }
cout << endl <<  "color " << setcolorr  << endl;
cout << "style " << setstyle << endl ;
    switch(chk){
    case 1: //triangle
line(x,y,x+50,y+70);
line(x+50,y+70,x-50,y+70);
line(x , y , x-50 , y+70);
floodfill(x , y+5, 15);
        break;
    case 2:  //square
circle(x,y,rad);
floodfill(x,y,15);
        break;
    case 3://line
        break;
    case 4: //Ellipse
ellipse(x,y , 0, 360, 50, 25);
floodfill(x,y,15);
        break;
    case 5: //Piechart
setfillstyle(5,14);
pieslice(x, y, 0,90,50);
        break;
    case 6: //glasses
   circle(x,y,30);
   circle(x+90,y,30);
   arc(x+45, y,  0, 180, 17);
   arc(x+45, y, 0, 180, 15);
   floodfill(x,y,15);
   floodfill(x+90,y,15);
     break;
    }

break;
}
}
if(c==13){
break;
}
}
}

void circledraw(int a , int b,int c){
    setcolor(2);
    circle(a,b,c);
  floodfill(a+1, b+1,2);
}

void objtriangle(int xloc , int yloc){
line(xloc,yloc,xloc+50,yloc+70);
line(xloc+50,yloc+70,xloc-50,yloc+70);
line(xloc , yloc , xloc-50 , yloc+70);
floodfill(xloc , yloc+5, 15);
 }

void objellipse(int x , int y){
ellipse(x,y , 0, 360, 50, 25);
floodfill(x, y+5, 15);
}

void objpie(int x,int y){
pieslice(x, y, 0, 90, 50);
 }

 void objglasses(int x, int y){
   setcolor(10);
   circle(x,y,30);
   circle(x+90,y,30);
   arc(x+45, y,  0, 180, 17);
   arc(x+45, y, 0, 180, 15);
   setfillstyle(4,6);
   floodfill(x,y,10);
  floodfill(x+90,y,10);

/*
   circle(225,200,30);
   arc(270, 200, 0, 180, 17);
   arc(270, 200, 0, 180, 15);
    line(345,200,355,195);//right stand
    line(345,205,355,195);
   line(195,200,180,195);//left
   line(195,205,180,195);
   circle(315,200,30);
 setfillstyle(4,6);
   floodfill(225,200,10);
  floodfill(315,200,10);
*/

 }





void setfillst(){
setstyle =0 ;
setcolorr =0;
cout << endl << "Enter the style ranges from 1-10 : " ;
cin >> setstyle;
cout << "Enter the Color ranges from 0-15 : ";
cin >> setcolorr;
}





 /*
void objcircle(){
win2 = initwindow(500,500, "win 2");
int x , y ,z , c;
cout << "Enter the x co-ordinate for edition : " << endl;
   cin >> x;
   cout << "Enter the y co-ordinate for edition : " << endl;
   cin >> y;
   cout<< "Enter the size of circle to paint less then 20 is suggested : ";
   cin >> z;
setcurrentwindow(win2);
setcolor(2);
   while(1){
   c=getch();
  cleardevice();
   if(c == 72 || c ==80 || c ==77 || c ==75 || c ==13 ){
   switch(c){
case 72 :
    cout << " you enter up arrow \n";
    y--;
    cout << " y cordinate is s: " <<  y  << "  " ;
draw(x,y,z);
    break;
case 80 :
    cout << "you enter down arrow \n";
    y++;
   cout << " y cordinate is s: " <<  y  << "  " ;
draw(x,y,z);
    break ;
case 77 :
    cout << "you enter right arrow \n";
    x++;
    cout << " x cordinate is s: " << x  << "  " ;
draw(x,y,z);
    break ;
case 75 :
    cout << "you enter left arrow \n";
    x--;
    cout << " x crdinate is s: " << x  << "  " ;
draw(x,y,z);
    break;
case 13 :
closegraph(win2);
setcurrentwindow(win1);
setcolor(15);
setfillst();
cout << endl <<  "color " << setcolorr  << endl;
cout << "style " << setstyle << endl ;
circle(x,y,z);
setfillstyle(setstyle,setcolorr);
floodfill(x,y,15);
cout << endl << " ***** test obj  *****   " << endl;
break;
}
}
if(c==13){
    break;
}
}
}
*/
