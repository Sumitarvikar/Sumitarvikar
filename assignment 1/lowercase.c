#include <stdio.h>
int main(){
char ch;
printf("enter the character\n");
scanf("%c",&ch);
if(ch >= 'a' && ch <= 'z'){
printf("lower case");}
else if(ch >= 'A' && ch <= 'z'){
printf("upercase");}
else{
printf("invalid");}
return 0;}