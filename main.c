#include<stdio.h>
#include<string.h>
#include"facultyfile.c"
#include"studentloginsen.c"
#include"studentsection.c"
#include"loadingsymbol.c"
int main()
{ 
  welcome();
}
int welcome()
{ 
   char name[100],l='t',l1='t';
	printf("                             *****WELCOME TO ANURAG UNIVERSITY*****");
	first:
	printf("\n    ARE YOU A FACULTY OR STUDENT\n         ENTER:");
	gets(name);
	strlwr(name);
	if(strstr(name,"faculty")!=NULL)
	{
		printf("your a faculty \n");
	printf("LOADING. ");
		system("cls");
		if(l=='t')
	loadingsysmbol();
	  l='f';
		system("cls");
		faculty();
	}
	else if(strstr(name,"student")!=NULL)
	{
		char rollno[12]={0};
		printf("your a student \n");
		printf("LOADING.");
			system("cls");
			if(l1=='t')
		loadingsysmbol();
		l1='f';
		if(studentlogins(rollno)==0)
		{
			printf("\nPLEASE CONTACT YOUR SIR/TEACHER...\n");
			printf("THANK YOU VISIT AGAIN.");
		}
		else
		{
			printf("SUCCESSFULLY \n");
			//printf("%s ",rollno);
		    studentsen(rollno);
		}
		
	}

	else
	{   
		printf("LOADING. ");
			system("cls");
		normalsymbol();
		printf("    ENTER VALID INPUT\n");
		goto first;
	}
    printf("DO YOU WANT TO LOGIN AGAIN THEN ENTER \"yes\" OR \"no\"\n");
    fflush(stdin);
    char y[8];
    gets(y);
    strlwr(y);
    if(strstr(y,"y")!=NULL){
    system("cls");
    goto first;
    }
    	
}
