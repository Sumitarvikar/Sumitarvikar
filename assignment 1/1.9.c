#include <stdio.h>
int main(){
char ch;
printf("enter a character\n");
scanf("%c",&ch);

switch(ch){
case'A':
case'a':
case'B':
case'b':
case'C':
case'c':
case'D':
case'd':
case'E':
case'e':

printf("vowel");
break;
default:
printf("constant");}

return 0; }


