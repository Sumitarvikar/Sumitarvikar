#include<stdio.h>
int main(){
int sp,cp,profit,loss;
printf("enter selling price and capital price\n");
scanf("%d %d",&sp,&cp);


if(sp>cp)
printf("profit is :%d",sp-cp);

else
printf("loss is : %d",cp-sp);

return 0;}