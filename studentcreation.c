#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct student
{
	char pass[30],rolln[30],dep[5];
	int attdnce;
	float per;
};
int check(char s[])
{
	if(strlen(s)!=10)
     return 1;
     else if(!(('A'<=s[2]&&s[2]<='Z')&&('A'<=s[3]&&s[3]<='Z')&&('A'<=s[7]&&s[7]<='Z')&&('0'<=s[8]&&s[8]<='9')&&('0'<=s[8]&&s[8]<='9')))
     return 1;
	int l=0;
	int n=s[6]-'0';
	if(s[5]=='0')
	switch (n)
	{
		case 1:printf("student belongs to Civil");break;
		case 2:printf("student belongs to EEE");break;
		case 3:printf("student belongs to MECH");break;
		case 4:printf("student belongs to ECE");break;
	    case 5:printf("student belongs to CSE");break;
	    case 6:printf("student belongs to AI");break;
	    case 7:printf("student belongs to AIML");break;
	    case 8:printf("student belongs to CHEM");break;
	   	case 9:printf("student belongs to CSE CS");break;
	}
    else
	{ if(s[6]=='0')
	  printf("student belongs to CSE-DS");
	  else
	   if(s[6]=='1')
	   return 1;
	   else if(s[6]=='2')
	   printf("student belongs to IT\n");
	   else 
	   return 1;
	}
	printf("\n section is %c",s[7]);
    l=s[9]-'0';
    int k=s[8]-'0';
    printf("\n roll no is %d",k*10+l);
}
int creatofstudentfile()
{ 
    FILE *stdpas,*creads;
    int j,k,x=1,u;
   	struct student s;
   	char string[50];
   	printf("     STUDENT ACCOUNT SECTION:       \n");
   	stdpas=fopen("studentpasswords.txt","a+");
   	fseek(stdpas,0,SEEK_SET);
   	rollno:
   		fflush(stdin);
   	printf("\nENTER STUDENT ROLLNO:");
   	gets(s.rolln);
   	strupr(s.rolln);
   	if(check(s.rolln)==1)
   	{
   		system("cls");
   		printf("\n->INVALID ROLLNO\n");
   		goto rollno;
     }
	rewind(stdpas);
     char f;
     while((f=fgetc(stdpas))!=EOF)
     {
     	fseek(stdpas,-1,SEEK_CUR);
        fscanf(stdpas,"%s",string);
     //	printf("%s ",string);
     	if(strcmp(s.rolln,string)==0)
     	{
     		 printf("\nSTUDENT ACCOUNT ALREADY EXIST ON THIS ROLLNO \n");
     		 goto rollno;
		 }
	 }
	  /* while((f=fgetc(stdpas))!=EOF)
     {  printf("enter ");
     	fseek(stdpas,-1,SEEK_CUR);
     fscanf(stdpas,"%s",string);
     printf("%s \n",string);
     if(strcmp(s.rolln,string)==0){
    
     goto rollno;
       }*/
   
   	printf("\nENTER HIS PASSWORD :");
    int i=0;
    char temp;
	while(i<8)
	{
		if((temp=getch())!='\r')
		s.pass[i++]=temp;
	     else
	     {
	     	s.pass[i]='\0';
	     break;
     	 }
	   	printf("*");
	}
	s.pass[i]='\0';
	fseek(stdpas,0,SEEK_END);
    fprintf(stdpas,"%s %s\n",s.rolln,s.pass);
    strcat(s.rolln,".txt");
    creads=fopen(s.rolln,"w");
    fclose(creads);
    fclose(stdpas);
    system("cls");
	for(i=0;i<4;i++)
	{ 
	
	     printf("\n\n\n\n \n\n\n                                                ");
		  printf("FILE CREATING FOR STUDENT");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<23993;u++)
		for(j=0;j<19999;j++);
		
		system("cls");
		x++;
	}
    printf("SUCCESSFULLY COMPLETED\n STUDENT ACCOUNT\n");
    return 1;
    
    
   	
}
