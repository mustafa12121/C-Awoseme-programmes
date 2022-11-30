#include<stdio.h>
#include<conio.h>
float sqrta(int value,int sqr){
	int res,i;
	if(sqr==2)
   {
   	for(i=0;i<value;i++)
      {
      	if(i*i==value)
         {
          printf("%d",i);
          break;
      	}

         else
         printf("");
      }

   }
	else if(sqr==3)
		{
      	for(i=0;i<value;i++)
         {
      		if(i*i*i==value)
         	{
          		printf("%d",i);
          		break;
          	}
         else
         	printf("");
      	}
      }
	else if(sqr==4)
		{
      	for(i=0;i<value;i++)
         {
      	if(i*i*i*i==value)
         {
          printf("%d",i);
          break;
          }
          else
         	printf("");
      	}
      }
	else
		printf("Erorr Enter less value in the secand parameter");
   return res;
}

int main(){
   int val,sq;
   printf("Enter the value:");
   scanf("%d",&val);
   printf("Enter the sqrt:");
   scanf("%d",&sq);
	printf("sqrt of %d = ",val);
   sqrta(val,sq);
	getch();
}
