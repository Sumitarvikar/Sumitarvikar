#include <stdio.h>
int main (){
int choise;
printf("enter \n 1 for circle \n 2 for traingle \n 3 for rectangle\n");
scanf("%d",&choise);


switch(choise){

case 1:{
int radi;
float area;
printf("enter radius of circle\n");
scanf("%d",&radi);
area=(float)(3.14*radi*radi) ;
printf("area of circle is %f\n",area);
break;
}

case 2:{
int a,b;
float area;
printf("enter height\n");
scanf("%d",&a);
printf("enter base\n");
scanf("%d",&b);

area=(float)(a*b)/2;
printf("area of traingle is %f",area);
break;}

case 3:{
int a,b;
float area ;
printf("enter the value of length and breath\n");
scanf("%d %d",&a,&b);
area=(float)a*b;
printf("the area of rectangle is %f\n",area);
break;}}
return 0;}



