#include<stdio.h>
#include<conio.h>
#include<taimr>
main()
{
int i,j;
//to bout the shap in the center of the bage
printf("\n\n\n\n\n\n\n\n\n\n\n");
for(i=1;i<12;i++){
	printf("\n\t\t\t\t\t\t");
	for(j=1;j<=20;j++){
   //the heart shap
   	if(i==1&&(j==5||j==16)||i==2&&(j>3&&j<7||j>14&&j<18)||i==3&&(j>1&&j<9||j>12&&j<20)||i==4&&(j>0&&j<10||j>11&&j<21)||i==5||i==6&&(j>1&&j<20)||i==7&&(j>2&&j<19)||i==8&&(j>4&&j<17)||i==9&&(j>5&&j<15)||i==10&&(j>7&&j<13)||i==11&&j==10)
      	{
         	printf("*");
            wait50(1);
         }
      else
   		printf(" ");


}
}
getch();
}
