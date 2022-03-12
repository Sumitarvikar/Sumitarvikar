#include <stdio.h>
int main(){
int num1,num2,temp;
printf("enter two number\n");
scanf("%d%d",&num1,&num2);
temp=num1;
num1=num2;
num2=temp;

printf("the value of num1 is %d and num2 is %d",num1,num2);
return 0;}
