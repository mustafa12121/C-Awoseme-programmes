#include<stdio.h>
#include<conio.h>
#include<math.h>

struct comp{
int lapid;
float lapmark;
};

struct educ{
int Eid;
float Emark;
};

union carerr{
		comp scom;
		educ sedu;
};

struct std{
	int id;
	char name[20];
   int flag;
   carerr car;
};

main(){
std x;
printf("Enter your name:");
scanf("%s",&x.name);
   x.id=2323;
   printf("Enter your career number \n1-computer\t2-education ");
   scanf("%d",&x.flag);
   if(x.flag==1)
{
   printf("Enter your lap id and lap mark\n");
   scanf("%d %f",&x.car.scom.lapid,&x.car.scom.lapmark);
   printf("your name is %s your career is computer your id=%d  your lap id=%d and lap mark=%f",x.name,x.id,x.car.scom.lapid,x.car.scom.lapmark);
}
getch();
}
