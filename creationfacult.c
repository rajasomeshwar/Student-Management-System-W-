#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
//#include"loadingsymbol.c"
 struct teacher
{
	char ts[39],dep[5];
	char pas[10];
}t;
void reat()
{
		int i,j,k,x=1,u;
	for(i=0;i<6;i++)
	{ 
	
	    printf("\n\n\n\n \n\n\n                                                ");
		 printf("CREATING ACCOUNT");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<2393;u++)
		for(j=0;j<111;j++);
		if(i!=5)
		system("cls");
		x++;
	}
}
int createsymbol()
{
	int x=0,i,j,k;
	for(i=0;i<101;i+=5)
	{	
	   reat();
		printf("%d%c",i,'%');
		 if(i==25||i==50||i==80||i==100)
		 for(j=0;j<1999;j++)
		 for(k=0;k<199;k++)
		 for(x=0;x<599;x++);
		 else
		 for(j=0;j<1999;j++)
		 for(k=0;k<199;k++)
		 for(x=0;x<20;x++);
	/*	if(i%2==0&&(i==20||i==50||i==70||i==90||i%10!=0))
		for(x=0;x<199;x++)
		for(j=0;j<19;j++)
		for(k=0;k<20;k++);
		else if(i%10==0&&i!=20&&i!=50&&i!=70&&i!=90||i==75||i==99||i==83||i==94||i==67||i==92||i==26||i==43||i==56||i==64||i==78||i==88||i==96)
		for(x=0;x<229;x++)
		for(j=0;j<199;j++);
		else if(i%5==0)
			for(x=0;x<99;x++)
		for(j=0;j<19;j++);
		else
		for(x=0;x<100;x++)
		for(j=0;j<19;j++)
		for(k=0;k<10;k++);*/
	//	for(x=0;x<212;x++)
		system("cls");
		  printf("\n\n\n\n \n\n\n                                                ");
		 printf("CREATING ACCOUNT");
		 system("cls");
		  printf("\n\n\n\n \n\n\n                                                ");
		 printf("CREATING ACCOUNT");
		 system("cls");
		 printf("\n\n\n\n \n\n\n                                                ");
		 printf("CREATING ACCOUNT");
		 system("cls");
}
}
void password()
{
	int i;
	char temp;
	char check[10]={0};
	pass:
     printf("PASSWORD: ");
     i=0;
	while(i<8)
	{
		if((temp=getch())!='\r'){
		t.pas[i++]=temp;
		 	printf("*");}
	     else
	     break;
	  
	}
	t.pas[i]='\0';
	printf("\n");
	printf("ENTER AGAIN PASSWORD:");
	 i=0;
	 temp='9';
	while(i<8)
	{    if((temp=getch())!='\r'){
	       check[i++]=temp;
	          printf("*");}
	       else
	       break;
    }
    check[i]='\0';
	if(strcmp(t.pas,check)==0)
	{
	     createsymbol();
		printf("\nCREATED AN ACCOUNT SUCCESSFULLY\n");
	}
	else
	{
		printf("\n->PASSWORD IS DOES NOT MATCH\nENTER AGAIN PASSWORD\n");
		goto pass;
	}
	
}
void facultycreation()
{
	FILE *fapsw;
	char string[199];
	 fapsw=fopen("facultpassowards.txt","a+");
	 fseek(fapsw,0,SEEK_SET);
	 	name:
	printf("\n>>>>>CREATE AN ACCOUNT//SIGNUP<<<<<\n");
	printf("\nENTER USERNAME:");
	fflush(stdin);
     gets(t.ts);
     rewind(fapsw);
     char f;
     while((f=fgetc(fapsw))!=EOF)
     {
     	fseek(fapsw,-1,SEEK_CUR);
     fscanf(fapsw,"%s",&string[0]);
    // printf("%s ",string);
     if(strcmp(t.ts,string)==0){
     	system("cls");
      printf("USERNAME ALREADY EXIST\n");
     goto name;
       }
   }
     
     
    printf("\nDEPARTMENT:");
    gets(t.dep);
    password();
    fseek(fapsw,0,SEEK_END);
    fprintf(fapsw,"%s %s\n",t.ts,t.pas);
    fclose(fapsw);
    system("cls");
    
    //goto again;
    
    
    
}

