#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<taimr.h>
main(){
int i;
char text[25];
printf("Enter any text to coloer:");
gets(text);
system("cls");

printf("%s",text);
for(i=0;i<10;i++){
if(i==0)
system("color 0");
if(i==1)
system("color 1");
if(i==2)
system("color 2");
if(i==3)
system("color 3");
if(i==4)
system("color 4");
if(i==5)
system("color 5");
if(i==6)
system("color 6");
if(i==7)
system("color 7");

if(i==8)
system("color 8");

if(i==9)
system("color 9");
if(i==10)
system("color 10");
wait25(9);
}
getch();
}