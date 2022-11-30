#include<stdio.h>
char measseg[500];
int tru=0,letter_conter();
void code(long size),decode(long size);

main(){
//the size varbil to bot the meassage character cont
	int x=0;
   long size;
	printf("\nwrite your message to be cont if it is nurmal messeg don't star with numbers \n");
	size=letter_conter();
	for(;;)
   {
   	//to avoid dabole Encrobteing
   	if(x==0&&tru==0)
			printf("\n\nwhat you want to do Enter the number\n\t1-corabt\t2-Encorabt\t3-exit\n");
      else
      	printf("\n\nwhat you want to do Enter the number\n\t2-Encorabt\t3-exit\n");
		scanf("%d",&x);
		if(x==1)
      {
			code(size);
		}
		else if(x==2){
			printf("write your corabted message shod be %d deget\n\n",size);
			decode(size);
		}
      else if(x==3)
      break;
	}
}




void code(long size){
	int i;
	printf("your Encorabt message is :\n\n");
	printf("copy this[");
	//size+1 to add the "Enter" charcater
	for(i=0;i<size+1;i++)
		printf("%d ",measseg[i]);
		printf("]\n\n");
}


void decode(long size){
	int i;
	//scaning the massage towis for changing the numbers to a degets
	for(i=0;i<size+1;i++)
		scanf("%d",&measseg[i]);
	//boring a embty line befor the message
   printf("\n\n");
	//cabetalizing the firest letter -32
	if(measseg[0]-32<65)
		printf("");
	else
		measseg[0]=measseg[0]-32;
	for(i=0;i<size+1;i++)
		printf("%c",measseg[i]);
}


int letter_conter(){
	int cont=0,i,j;
	gets(measseg);
	for(i=0;measseg[i]!='\0';i++)
   {  //to cont the message debend on the message type (encroabted and nurmal)
		for(j=0;j<5;j++)
  	 	{
   		if(measseg[j]=='0'||measseg[j]=='1'||measseg[j]=='2'||measseg[j]=='3'||measseg[j]=='4'||measseg[j]=='5'||measseg[j]=='6'||measseg[j]=='7'||measseg[j]=='8'||measseg[j]=='9')
  	 			tru=1;
   		else
   			tru=0;
		}
   	if(tru==0)
   		cont=i;
   	else if(measseg[i]==' ')
      	cont+=1;
}
	printf("%d letter message\n",cont);
	return cont;
}

