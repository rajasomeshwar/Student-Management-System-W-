#include<stdio.h>
#include<string.h>
#include<conio.h>
void login()
{  system("cls");
	int i,j,k,x=1,u;
	for(i=0;i<5;i++)
	{ 
	
	     printf("\n\n\n\n \n\n\n                                                ");
		  printf("LOgIN");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<2393;u++)
		for(j=0;j<19999;j++);
		system("cls");
		x++;
	}
}
int 	studentlogins(char *rolln1)
{
	FILE *f;
	char rollno[11],checkpassword[29]={0},password[20],go[13];
	int count=0;
	f=fopen("studentpasswords.txt","r+");
	printf("\n\t\t\t\t*****WELCOME TO ANURAG'S STDUENT PORTALLY****\n");
	printf("\n\t>>>>>LOGIN SECTION<<<<<<\n");
	 rlno:
	printf("\n\tENTER YOUR ROLLNO: ");
	gets(rollno);
	fflush(stdin);
	strupr(rollno);
	   rewind(f);
	   count++;
     char f1;
     int k=0;
     while((f1=fgetc(f))!=EOF)
     {
     	fseek(f,-1,SEEK_CUR);
     fscanf(f,"%s",&checkpassword[0]);
     if(strcmp(rollno,checkpassword)==0){
        k=1;
        break;
       }
     }
    
       	 printf("\t\tPASSWORD: ");
       	 int i=0;
       	 char ch;
       	 while(i<8)
       	 {
       	 	if((ch=getch())!='\r'){
       	 	password[i++]=ch;
				printf("*");}
       	 	else
       	 	break;
	 	}
	 	password[i]='\0';
	 	fscanf(f,"%s",checkpassword);
	 		login();
	 	if(k==1&&strcmp(checkpassword,password)==0)
	 	{
	 	
	 		printf("\n\t\tSUCCESSFULLY LOGINED\n");
	 		system("cls");
		 }
		 else{
		 	if(count%3==0)
		 	{
		 		printf("\nIF UR ACCOUNT IS NOT CREATED THEN INFORM YOUR TEACHER  ENTER \"1\" OR ELSE ENTER \"2\"\n");
		 	scanf("%s",&go);
		 	fflush(stdin);
		 	if(go[0]=='1'||strstr(go,"one")!=NULL)
		 	{
		 		printf("wait...");
		 		return 0;
		 		 	
			 }
			 
			 }
			 	system("cls");
			 printf("\nFAIL TO LOGIN\n");
		 	printf("\n--> INVALID ROLL NO OR PASSWORD  ENTER AGAIN\n");
		 	goto rlno;
			 
		 	
		 }
		 strcpy(rolln1,rollno);
		 
		 	 return 1;
}
