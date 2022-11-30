#include<stdio.h>
#include<conio.h>
main(){
int i,arr[3][3]={{5,11,16},{21,26,31},{36,41,46}};
//{900,901,902}
//{910,911,912}
//{920,921,922}
int *point=&arr[0][0];
for(int i=0;i<9;i++){
//adding 5 to the value
*point+=5;
//adding 3 to the index
point+=3;
}
point=&arr[0][0];
for(i=0;i<9;i++){
printf("%d\n",*point);
point+=1;
}
getch();
}
