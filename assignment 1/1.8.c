#include<stdio.h>
int main(){
int choise ,a ,b;
printf("enter \n 1 for addtion \n 2 for substraction \n 3 for multiplication\n 4 for division\n");
scanf("%d",&choise);
printf("enter two numbers\n");
scanf("%d%d",&a,&b);

switch(choise){
case 1: {
printf("addition is : %d",a+b); 
break;}
case 2: {
printf("substractin is : %d",a-b); 
break;}
case 3: {
printf("multiplication is : %d",a*b); 
break;}
case 4: {
printf("division is : %d",a/b);
break;}
default:
{printf("enter valid number");}}  
return 0;}

