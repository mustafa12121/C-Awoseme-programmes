#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stdcom
	{
	  	int lapid;
  		float lapmark;
	};

struct stdfar
	{
		int farmnum;
		float farmmark;
	};

struct stdec
	{
		int ecid;
		float ecmark;
	};

struct std
	{
		int id;
		char name[30];
		int stducode;
		union creer
		{
			stdcom comp;
			stdec educ;
			stdfar farm;
		}creers;
	};

main(){
	std p1;
   //inputing section
	printf("Enter your un id: ");
	scanf("%d",&p1.id);
   printf("Enter your name\n");
	scanf("%s",&p1.name);
  	printf("Enter your creer number.\n\t1-computer\t 2-farming\t3-education \n");
	scanf("%d",&p1.stducode);
	if(p1.stducode==1)
	{
   	printf("Enter your lap id :");
   	scanf("%d",&p1.creers.comp.lapid);
      printf("\nEnter your lap mark. max=4.00\n");
      scanf("%f",&p1.creers.comp.lapmark);
   }

   else	if(p1.stducode==2)
	{
   	printf("Enter your farm id :");
   	scanf("%d",&p1.creers.farm.farmnum);
      printf("Enter your farm mark. max=4.00\n");
      scanf("%f",&p1.creers.farm.farmmark);
   }

   else	if(p1.stducode==3)
	{
   	printf("Enter your hall id :");
   	scanf("%d",&p1.creers.educ.ecid);
      printf("Enter your semnar mark. max=4.00\n");
      scanf("%f",&p1.creers.educ.ecmark);
   }

   else
   printf("\nerror Wrong character");

   //outputing section

   printf("the name:%s\n",p1.name);
   printf("un id:%d\n",p1.id);
   	if(p1.stducode==1)
      {
   		printf("your creer is computer science\n");
         printf("your lap mark = %0.2f\n",p1.creers.comp.lapmark);
        	printf("your lap id = %d\n",p1.creers.comp.lapid);

      }

   else	if(p1.stducode==2)
   	{
   		printf("your creer is farming\n");
      	printf("your farm id =%d\n",p1.creers.farm.farmnum);
      	printf("farm mark = %0.2f\n",p1.creers.farm.farmmark);
      }
   else	if(p1.stducode==3)
   	{
			printf("your creer is education\n");
      	printf("hall id = %d\n",p1.creers.educ.ecid);
      	printf("semnar mark =  %0.2f\n",p1.creers.educ.ecmark);
      }

      printf("\n\t\t\tThe end . was it good?");
getch();
}
