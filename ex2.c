#include<stdio.h>
#include<conio.h>
main()
{
	int arr[5]={1,5,3,4,5},*point=&arr[0];
   for(int i=0;i<5;i++){
   printf("%d\n",*point);
   point+=1;
   }

	getch();
}
