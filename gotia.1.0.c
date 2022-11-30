#include<stdio.h>
#include<conio.h>
#include<taimr.h>
main()
{
int dup=1,i,wall,all,j;
//start of head of the gotya
for(i=1;i<10;i++)
{
int gap=10-i;
while(gap>0)
{
printf(" ");
gap--;
}
for(j=0;j<dup;j++){
printf("%c",469);
wait50(1);
}
printf("\n");
dup+=2;
}
//end of the head of the gotya
//start of the body of the gotya
for(wall=1;wall<8;wall++)
{



//for druing the huall sheap

for(all=0;all<19;all++){

//star of the window shap (soem of the door)
//the window.t.l >
if(all==3&&wall==3||all==10&&wall==3)
printf("%c",218);

//the window.t.c
else if(all==5&&wall==3)
printf("%c",194);

//the window.t.r
else if(all==7&&wall==3||all==16&&wall==3)
printf("%c",191);

//the window.c.l
else if(all==3&&wall==4)
printf("%c",195);

//the window.c.c
else if(all==5&&wall==4)
printf("%c",197);

//the window.c.r
else if(all==7&&wall==4)
printf("%c",180);

//the window.b.l
else if(all==3&&wall==5||all==10&&wall==7)
printf("%c",192);

//the window.b.c
else if(all==5&&wall==5)
printf("%c",193);

//the window.b.r
else if(all==7&&wall==5||all==16&&wall==7)
printf("%c",217);

else if((all==4||all==6)&&(wall==3||wall==4||wall==5))
printf("%c",196);
//end of the window shap (soome of the door)


//star of the lest of the door shap
//door.t.c,b,c
else if(all>10&&all<17&&wall==3||all>10&&all<16&&wall==7)
printf("%c",196);

//door.c.r,c,l
else if((wall>3&&wall<8)&&(all==10||all==16))
printf("%c",179);
//the end of the rest of the door shap


//start droing the borders
else if(all==0||all==18)
printf("%c",177);
else if(wall==7||wall==1)
printf("%c",496);
//end droing the walls
else if(wall==5&&all==12)
printf("%c",148);
else
printf(" ");
wait50(1);
}
printf("\n");
}

//end of the body of the gotya
getch();
return 0;
}













/*
  176=window shap
  177=wall shap
  496=roof shap
  148=doorhand shap
  218=window.t.l (for door too)************
  194=window.t.c
  191=window.t.r (for door too)***********
  195=window.c.l
  197=window.c.c
  180=window.c.r
  192=wincow.b.l (for door too) **********
  193=wincow.b.c
  217=wincow.b.r (for door too) **********
  196=door.t.c,b.c
  179=door.c.r,c.l
*/
