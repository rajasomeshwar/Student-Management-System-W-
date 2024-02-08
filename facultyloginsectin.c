#include<stdio.h>
#include<string.h>
#include<conio.h>
void loginsybmol()
{  system("cls");
	int i,j,k,x=1,u;
	for(i=0;i<3;i++)
	{ 
	
	     printf("\n\n\n\n \n\n\n                                                ");
		  printf("LOGIN");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<2393;u++)
		for(j=0;j<1999;j++);
		
		system("cls");
		x++;
	}
}
int facultylogin(char *p){ 
     FILE *f;
     char go[10];
     int count=0;
     f=fopen("facultpassowards.txt","r");
   int k,i;
  char name[30],password[32]={0};
  char checkpassword[30];
  login:
	printf("            *>*>LOGIN SECTION:<*<*\n");
	printf("   ENTER USERNAME:");
	gets(name);
	count++;
	   rewind(f);
     char f1;
     k=0;
     while((f1=fgetc(f))!=EOF)
     {
     	fseek(f,-1,SEEK_CUR);
     fscanf(f,"%s",&checkpassword[0]);
    // printf("%s ",string);
     if(strcmp(name,checkpassword)==0){
        k=1;
        break;
       }
     }
    
       	 printf("   PASSWORD:");
       	 i=0;
       	 char ch;
       	 while(i<8)
       	 {
       	 	if((ch=getch())!='\r')
       	 	password[i++]=ch;
       	 	else
       	 	break;
       	 	printf("*");
	 	}
	 	password[i]='\0';
	 	fscanf(f,"%s",checkpassword);
	 	loginsybmol();
	 	if(k==1&&strcmp(checkpassword,password)==0)
	 	{
	 			system("cls");
	 			strcpy(p,name);
	 		printf("LOGIN SUCCESSFUL\n");
	 	
		 }
		 else{
		 	if(count%2==0)
		 	{
		 		printf("\nARE YOU WANT TO CREATE AN ACCOUNT THEN ENTER \"1\" OR ELSE ENTER \"2\"\n");
		 	scanf("%s",go);
		 	strlwr(go);
		 	if(go[0]=='1'||strstr(go,"one")!=NULL)
		 	{ 
		 		printf("wait...");
		 		system("cls");
		 		fflush(stdin);
		 		return 0;
		 		 	
			 }
			 }
			 system("cls");
			 fflush(stdin);
			 printf("FAILED TO LOGIN\n");
		 	printf("\n-->INVALID USERNAME OR PASSWORD\n ENTER AGAIN:\n");
		 	goto login;
			 
		 	
		 }
	return 1;	
   }

