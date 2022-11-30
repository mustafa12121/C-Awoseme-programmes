#include<stdio.h>
#include<conio.h>
struct std
{
	int id;
   char name[20];
   float reslt;
};
main()
{
	std studant;
   printf("Enter the studant id:");
   scanf("%d",&studant.id);
   printf("Enter the studant name:");
   scanf("%s",&studant.name);
   printf("Enter the studant reslt:");
   scanf("%f",&studant.reslt);
   printf("your id =%d\nyour name is:%s\nyour reslt =%0.2f\n",studant.id,studant.name,studant.reslt);
   getch();  
}