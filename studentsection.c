#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
void    studentsen(char[]);
struct stduent{
	char name[29],depr[5],email[30];
	char moblie[20];
}s;
void loadins1()
{
		int i,j,k,x=1,u;
	for(i=0;i<6;i++)
	{ 
	
	    printf("\n\n\n\n \n\n\n                                                ");
		 printf("SEARCHING FILE");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<233;u++)
		for(j=0;j<111;j++);
		if(i!=5)
		system("cls");
		x++;
	}
}
void findngfilesymbol()
{
	int x=0,i,j,k;
	for(i=0;i<101;i+=8)
	{
	   loadins1();
		printf("%d%c",i,'%');
	    for(x=0;x<1999;x+=2)
	    for(k=2;k<1999;k+=3);
		system("cls");
		  printf("\n\n\n\n \n\n\n                                                ");
		 printf("SEARCHING FILE");
		 system("cls");
		
	}

	
}
void savingfile()
{
	 system("cls");
	int i,j,k,x=1,u;
	for(i=0;i<4;i++)
	{ 
	
	     printf("\n\n\n\n \n\n\n                                                ");
		  printf("SAVING DATA INTO FILE");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<2393;u++)
		for(j=0;j<1999;j++);
		
		system("cls");
		x++;
	}
}
int marksgiving(char key[],char attempted[]){
	int i=0,j=-1,marks=0;
	printf("key-%s  attempted-%s  ",key,attempted);
	while(key[i]!='\0')
	{
		if(key[i]==attempted[j]){
       //  printf("%d %c \n",i,attempted[i]);
		marks++;
	}
		i++;
		j++;
	}
   return marks;
}
void attempting(char rollno[]){
	char name[45],roll[36],question[100],answer[20],ch;
	fflush(stdin);
	int i=0;
	printf("EXAM SECTION \n");
	que:
	printf("ENTER YOUR ARE NAME\n");
	gets(name);
	printf("ENTER YOUR ARE ROLLNO\n");
	gets(roll);
	strupr(roll);
	
//	printf("\nenter %s - ther-%s \n",roll,rollno);
  
    time_t t,t2;   // not a primitive datatype
    time(&t);

   // printf("\nThis program has been writeen at (date and time): %s", ctime(&t));
    char s1[30];
strcpy(s1,ctime(&t));
//while(s1[i]!='\0')
 //printf("%d -%c\n",i,s1[i++]);
 //printf("            min--%c %c",s1[14],s1[15]);
 int min1=((s1[14]-'0')*10)+(s1[15]-'0');
 int sec1=(s1[17]-'0')*10+(s1[18]-'0');
 //printf("\n    seconds - %d           mintunes %d",sec1,min1);

  
	if(strcmp(roll,rollno)==0){
	FILE *f;
	f=fopen("quizquestion.txt","r");
	if(f==NULL)
	printf("ERROR 404 \nSERVER DOWN \nTRY LATER...");
	else{
	if((ch=fgetc(f))=='0')
	{
		printf("CONTACT YOUR TEACHER ");
	}
	else 
	{  fgetc(f);
	   char n=fgetc(f);
	   int n1=n-'0';
	   int i1=0;
	   char a[n1+1];
	   printf("\nTOTAL QUESTIONS ARE %d\n",n1);
	  printf("ENTER TRUE OR FALSE\n");
	   while((ch=fgetc(f))!=EOF)
	   {
	   	fseek(f,-1,SEEK_CUR);
	   	    i=0;
	       while((ch=fgetc(f))!=EOF)
	       {
	       	question[i++]=ch;
	       	if(ch=='?')
	       	break;
		   }
		   question[i]='\0';
		   if(ch!=EOF)
		   {
	       printf("%s\n",question);
	        gets(answer);
	        strupr(answer);
	      if(strstr(answer,"T")!=NULL)
	       {
	    	a[i1++]='1';
	      	}
		   else
		   {
			a[i1++]='0';
		   }
		 }
     	}
		 a[i1]='\0';
		 //printf("%s   ",a);
	//	 printf("%s  ",question);
		 int marks=marksgiving(question,a);
		printf(" \n  %d marks got outof %d\n",marks,n1);
		fclose(f);
		f=fopen("resultquiz.txt","a");
		time(&t2);
	///	printf("\nThis program has been writeen at (date and time): %s", ctime(&t2));
char s[30];
strcpy(s,ctime(&t2));
 //printf("            min--%c %c",s[14],s[15]);
 int min=((s[14]-'0')*10)+(s[15]-'0');
 int sec=(s[17]-'0')*10+(s[18]-'0');
 //printf("\n    seconds - %d           mintunes %d",sec,min);
 if(!(s[11]==s1[11]&&s[12]==s1[12]))
 {
 	min=60-min;
 }
 int l=min*60+sec;
 int l1=min1*60+sec1;
 int l3=l-l1;
// printf("time difference is %d ,%d is %d ",l,l1,l3);
 int realmin=l3/60;
 int realsec= l3%60;
 printf("time required to  complete is %dmin:%dsec\n",realmin,realsec);
		
			fprintf(f,"%s %s\n%s %s\n%s %d%s%d\n%s %s\n%s %d%s%d%s\n","NAME-",name,"ROLLNUMBER-",roll,"MARKS-",marks,"//",n1,"DATE AND TIME-",s1,"TIME REQUIRED TO COMPLETE QUIZ-",realmin,"min:",realsec,"sec");
			
		  fprintf(f,"%s\n","__________________________________________________________________________________");
		  fclose(f);
		
    } 
   }
}
else
{
	printf("°INVALID ROLLNO \nENTERED  ROLLNO IS NOT YOUR ROLL NO\n");
	goto que;
}
	
}
void  informtoteacher( char rollno[]){
printf("DO YOU WANT TO SEND MESSAGE ? ENTER \"yes\" OR \"NO\"\n");
 char test[5],ch;
  fflush(stdin);
 gets(test);
 fflush(stdin);
 strupr(test);
 if(strstr(test,"YES")!=NULL)
 {
 	printf("TO SEND MESSAGE ENTER \"ctrl+Z\"\n");
 	printf("WRITE HERE\n");
 	FILE *f;
 	f=fopen("informtoteacherfromstdnt.txt","a+");
 	time_t t;
 	time(&t);
 	char date[20];
 	char dt[40];
 	strcpy(dt,ctime(&t));
 	strcpy(date,ctime(&t));
 	date[10]='\0';
 	strcat(date," 2022");
 	int k=11,i=0;
 	char time[15]={0};
 	while(k<19)
 	time[i++]=dt[k++];
 	time[i]='\0';
 	fprintf(f,"\n%s%s\n%s%s\n","DATE:",date,"TIME:",time);
 	fseek(f,0,SEEK_END);
 	while((ch=getchar())!=EOF)
 	{
 		fputc(ch,f);
	 }
	 fprintf(f,"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t%s","FROM :");
	 fprintf(f,"\n\t\t\t\t\t\t\t\t\t\t%s",rollno);
	 fprintf(f,"\n%s\n\n","_____________________________________________________________________________");
	 fclose(f);
 }

}
void settingforstudent()
{
  char n[10],name[48],orgnalnam[48]={0},opassword[50]={0},password[50],name1[100]={0},password1[100]={0};
	printf("SETTINGS:\npess 1 for CHANGE PASSWORD \npress  2 for BACK TO MENU\n");
	fflush(stdin);
	gets(n);
	system("cls");
	if(strstr(n,"one")!=NULL||strstr(n,"1")!=NULL)
	{
		FILE *f;
		int line_no=-1;
		f=fopen("studentpasswords.txt","r+");
	    retry:
		printf("ENTER YOUR ROLLNO: ");
		gets(name);
		strupr(name);
		fflush(stdin);
		char ch;
		int k=1;
		rewind(f);
		while((ch=fgetc(f))!=EOF&&k)
		{
			fseek(f,-1,SEEK_CUR);
			line_no=ftell(f);
			fscanf(f,"%s %s\n",orgnalnam,opassword);
			//printf("%s %s\n",orgnalnam,opassword);
			if(strcmp(name,orgnalnam)==0)
			{
				k=0;
				
				break;
			}
		}
		if(!k==0)
		{
			printf("USER NAME NOT FOUND\n");
			goto retry;
		}
		printf("ENTER OLD PASSWORD:");
		gets(password);
		if(strcmp(opassword,password)==0)
		{
			printf("VERIFIED\n");
		}
		else
		{
			printf("\nINVALID ROLLNO OR PASSWORD ENTER AGAIN");
			goto retry;
			
		}
	     fclose(f);
	     pass:
		printf("enter new password:");
		 gets(password);
		 if(!(strlen(password)<8)){
		 printf("\nNOTE->LENGTH OF PASSWORD MUST BE LESS THEN 8 CHARACTERS\n");
		 goto pass;
      	}
		 printf("enter conform password:");
		 gets(password1);
		 if(strcmp(password,password1)!=0)
		 {
		 	printf("\nENTERD PASSWORDS ARE NOT SAME\n");
		 	goto pass;
		 }
		 FILE *temp;
		 temp=fopen("temporary.txt","w");
		 f=fopen("studentpasswords.txt","r+");
		 while((ch=fgetc(f))!=EOF)
		 {
		 	fseek(f,-1,SEEK_CUR);
		 	fscanf(f,"%s %s\n",name1,password1);
		 	fprintf(temp,"%s ",name1);
		 	if(strcmp(name1,name)==0){
		 		fprintf(temp,"%s\n",password);
			 }
			 else
			 {
			 	fprintf(temp,"%s\n",password1);
			 }
		 }
		 fclose(f);
		 fclose(temp);
		 f=fopen("studentpasswords.txt","w");
		 temp=fopen("temporary.txt","r");
		 while((ch=fgetc(temp))!=EOF)
		 fputc(ch,f);
		 fclose(f);
		 fclose(temp);
	//	 printf("SUCCESSFUL\n");
		 
		 
		 printf("SUCCESSFUL CHANGED!\n");
	
		
	}
	else if(strstr(n,"second")!=NULL||strstr(n,"2")!=NULL||strstr(n,"two")!=NULL)
	{
		printf("REALLY SORRY FOR WE CANN'T CHANGE ROLL NUMBER \nBY CREATING AN ACCOUNT WE CAN GIVE UNIUQE ROLLNO SO WE CAN NOT CHANGE \n");
	}	
}
int visitingfrd()
{
//	fflush(stdin);
	int coun=0;
	char c[9];
	FILE *f2;
	char ch,agin[10],rll[32],tes[9],zero[10];
	 vis:
  	printf("PLEASE ENTER YOUR FRIEND ROLL NO \n");
   	fflush(stdin);
     gets(rll);
     findngfilesymbol();
    // fflush(stdin);
     strupr(rll);
     strcat(rll,".txt");
     f2=fopen(rll,"r");
     if(f2==NULL)
     {
     	printf("ROLL NO IS  INVALID OR NOT CREATED\n");
     	if(coun%2==0)
     	{
     		printf("IF YOU WANT ENTER AGAIN THEN ENTER 1\n");
     		gets(tes);
     		if(strstr(tes,"1")!=NULL||strstr(tes,"one")!=NULL)
     		 goto vis;
		 }
     	
	 }
	 else
	 { 
	 	while((ch=fgetc(f2))!=EOF){
	 	printf("%c",ch);
	 	coun++;
	    }
	    if(coun==0)
	    printf("BASIC INFORMATION IS EMPTY\n");
	    else
	    {
	    	printf("COMPLETED \n");
	    	printf("IF YOU WANT SEE ANOTHER FRIEND THEN ENTER NON ZERO\n");
	    	gets(zero);
	    	if(strstr(zero,"0")==NULL||strstr(zero,"zero")==NULL)
	         goto vis;
		}
	 }
    return 0;
}
void noticationstuden()
{
	FILE *f;
	f=fopen("noticationtostduent.txt","r");
    char ch;
    while((ch=fgetc(f))!=EOF)
    printf("%c",ch);
    printf("\nCOMPLETED\n");
}
void readstudent(char rollno[])
{
	 system("cls");
	int i,j,k,x=1,u;
	for(i=0;i<4;i++)
	{ 
	
	     printf("\n\n\n\n \n\n\n                                                ");
		  printf("GARTHERING DATA");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<200;u++)
		for(j=0;j<50001;j++);
		
		system("cls");
		x++;
	}
	printf("PRINTING YOUR DATA \n ");
	char ch;
	FILE *f;
	char rollno1[30];
	strcpy(rollno1,rollno);
	if(!(strstr(rollno1,".txt")!=NULL))
	  strcat(rollno1,".txt");
	
	printf("%s \n",rollno1);
	f=fopen(rollno1,"r");
       ch=fgetc(f);
       rewind(f);
       if(ch==EOF)
       printf("\n BASIC INFORMATION IS NOT PROVIDED\n");
       else{
	while((ch=fgetc(f))!=EOF)
	printf("%c",ch);
	
}
}
int information(char rollno[])
{
     FILE *f;
     findngfilesymbol();
    // strcat(rollno2,".txt");
    char rollno2[30];
	strcpy(rollno2,rollno);
	if(!(strstr(rollno2,".txt")!=NULL))
	  strcat(rollno2,".txt");
     printf("%s \n",rollno2);
     f=fopen(rollno2,"a+");
     //fscanf(f,"%s ",&s.name[0]);
     //printf("%s \n",s.name);
     char ch;
     ch=fgetc(f);
     if(ch!=EOF)
     { char c[7];
          c[0]='0';
     	printf("DATA IS ALREADY EXIST \n");
     	fflush(stdin);
     	printf("IF YOU WANT AGAIN enter DETAILS PRESS 1 OTHERWISE PRESS 2\n");
     	gets(c);
     	strlwr(c);
     	if(c[0]=='1'||strstr(c,"one")!=NULL)
     	{
     		fclose(f);
     		f=fopen(rollno2,"w");
     		
		 }
		 else
		 return 1;
     	
	 }
	 rewind(f);
	 hl:
     printf("ENTER YOUR NAME :");
      gets(s.name);
      printf("ENTER YOUR DEPARMENT:");
      gets(s.depr);
      mobil:
      printf("ENTER YOUR MOBILE NO: ");
      fflush(stdin);
      gets(s.moblie);
     // printf("%s ",s.moblie);
      if(strlen(s.moblie)!=10){
	  printf("MOBILE NO IS WRONG\n");
      goto mobil;
      }
      printf("ENTER YOUR PERSONAL EMAIL ID: ");
      gets(s.email);
      savingfile();
      rewind(f);
     fprintf(f,"%s %s\n%s %s\n","NAME:",s.name,"DEPARTMENT:",s.depr);
     fprintf(f,"%s %s\n","MOBILE NO:",s.moblie);
     fprintf(f,"%s %s\n","MAIL I'D:",s.email);
     printf("SUCCESSFULLY SAVED\n");
   /*   char d[]="DEPARTMENT:";
      char m[]="MOBILE NO:";
      char n[]="NAME:";
      char ml[]="MAIL I'D:";
     fprintf(f,"%s %s\n%s %s\n",n,s.name,d,s.depr);
     fprintf(f,"%s %ld\n",m,s.moblie);
     fprintf(f,"%s %s\n",ml,s.email);
     printf("SUCCESSFUL");
     fclose(f);*/
     fclose(f);
    
}
void diplay()
{
	printf("\n\t CHOOSE THE OPTION\n");
	printf("  -->1-FILL YOUR BASIC INFORMATION\n");
	printf("  -->2-DISPLAY YOUR DETAILS \n");
	printf("  -->3-NOTICATION FROM TEACHERS\n");
	printf("  -->4-ARE YOU WANT TO SEND A MESSAGE TO TEACHER\n");
	printf("  -->5-SEE YOUR FRIENDS DETAILS\n");
	printf("  -->6-ATTEMPT QUIZ\n");
	printf("  -->7-SETTINGS\n");
	
}
void    studentsen(char rollno[])
{  	char c[3];
  printf("WELCOME-%s\n",rollno);
   fir:
	diplay();
	gets(c);
	system("cls");
	char ch=c[0];
	switch(ch)
	{
		case '1': information(rollno); break;
		case '2':printf("WAIT PREPARING ...\n");readstudent(rollno);break;
		case '3':printf("NOTICATION:\n");noticationstuden();break;
		case '4':informtoteacher(rollno);break;
		case '5':visitingfrd();break;
		case '7':settingforstudent();break;
		case '6':attempting(rollno);break;
		default:printf("ENTER VALID INPUT ");
		       goto fir;
		    
	}
   	printf("GO BACK TO MENU PAGE THEN ENTER \"1\"   ELSE ENTER  \"2\"\n");
	fflush(stdin);
	char g[5];
	gets(g);
	strlwr(g);
	system("cls");
	if(strstr(g,"one")!=NULL||g[0]=='1')
	{
		goto fir;
		system("cls");
	}
}
