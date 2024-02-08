#include<stdio.h>
#include<string.h>
#include"creationfacult.c"
#include"facultyloginsectin.c"
#include"facultostudent.c"
typedef struct faculty
{
	char fname[30],department[29];
	
}f;
void faculty()
{  f n;
   char check[4];
    char username[30];
	printf("\n       ****WELCOME TO ANURAG'S FACULTY STAFF****\n");
	again:
	printf("DO YOU HAVE ACCOUNT ALREADY? ENTER \"YES\" OR \"NO\"\n");
	 gets(check);
	 strlwr(check);
	 if(strstr(check,"y")!=NULL)
	 {
	 	system("cls");
	 	printf("LOGIN OR SINGIN\n  ");
	 	if(facultylogin(username)==0){
		 facultycreation();
		  printf("\nCREATED AN ACCOUNT SUCCESSFULLY\n");
		 facultylogin(username);
		 
		 }
		 else
		 {
		   factostudent(username);
		 }
	 }
	  else if(strstr(check,"n")!=NULL)
	  {
	  	system("cls");
	  	printf("\nCREATE ACCOUNT//SIGNUP\n");
	  	facultycreation();
	   printf("\nCREATED AN ACCOUNT SUCCESSFULLY\n");
	  	facultylogin(username);
	  }
	  else
	  {
	  	printf("INVALID INPUT \n");
	  	goto again;
	  }
	   factostudent(username);
//	printf("ENTER YOUR ARE NAME \n");
//	gets(n.fname);
	
    
}

