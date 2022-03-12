#include<stdio.h>
int main(){
int num1,num2,num3,num4;


printf("Enter firts number",&num1);
scanf("%d",&num1);
printf("Enter firts number",&num2);
scanf("%d",&num2);
printf("Enter firts number",&num3);
scanf("%d",&num3);

if (num1>num2)
{
if (num1>num3)
{
num4=num1;
}
else{ 
num4=num3;}}
else
{
if (num2>num3)
{num4=num2;}
else
{num4=num3;}}
printf("maximum number is=%d",num4);
return 0;}

