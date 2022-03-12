#include<stdio.h>
intmain(){

int num;
printf("enter a number=");
scanf("%d",&num);


if(num>=0 && num<=9)
printf("single digit number=%d",num);

else
printf("this number is not single digit");

return 0;}