#include<stdio.h>
#include<conio.h>
int mult(int one,int two)
{
 return one*two;
}
main()
{
int point_to=5;
int *point=&point_to;
printf("the value of the variable =%d \nthe pointer value =%p\n",*point,point);
int arr_point_to[3];
point=&arr_point_to[0];
for(int i=0;i<3;i++){
scanf("%d",&arr_point_to[i]);
}
for(int i=0;i<3;i++){
point=&arr_point_to[i];
printf("%d + 5=%d\n",*point,*point+5);
}
getch();
}
