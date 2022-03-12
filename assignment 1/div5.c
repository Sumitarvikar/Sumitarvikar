#include<stdio.h>
int main(){
int a;
printf("write a number\n");
scanf("%d",&a);

if(a%5==0)
printf("%d number is divided by 5",a);
else 
printf("%d number is not divided by 5",a);

return 0; 
}