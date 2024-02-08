 #include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include"studentcreation.c"
int quiz1=0;
void display();
 void accessingdatasybl();
 void result()
 {
 	int u,i,j,x=1,k;
 	  	for(i=0;i<3;i++)
	{ 
	
	     printf("\n\n\n\n \n\n\n                                                ");
		  printf("GEATHERING INFORMATION");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<2393;u++)
		for(j=0;j<199999;j++);
		
		system("cls");
		x++;
	}
 	printf("MARKS--->");
 	FILE *f;
 	f=fopen("resultquiz.txt","r");
 	if(f==NULL)
 	{
 		printf("\nNO ONE IS ATTEMPT THE QUIZ...\n");
 		return ;
	 }
	 char ch;
	 while((ch=fgetc(f))!=EOF)
	 printf("%c",ch);
	 printf("\n\n\n\n\n                                                 COMPLETED!");
	 
 	
 }
void vist()
{
//	fflush(stdin);
	int coun=0;
	char c[9];
	FILE *f2;
	char ch,agin[10],rll[32],tes[9],zero[10];
	 vis:
  	printf("PLEASE ENTER STUDENT ROLL NO \n");
   	fflush(stdin);
     gets(rll);
      int i,j,k,x=1,u;
      printf("PLEASE WAIT..\n");
	for(i=0;i<3;i++)
	{ 
	
	     printf("\n\n\n\n \n\n\n                                                ");
		  printf("GEATHERING INFORMATION");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<2393;u++)
		for(j=0;j<19999;j++);
		
		system("cls");
		x++;
	}
    // fflush(stdin);
     strupr(rll);
     strcat(rll,".txt");
     f2=fopen(rll,"r");
     if(f2==NULL)
     {
     	printf("ROLL NO IS  INVALID OR NOT CREATED\n");
     
     		printf("IF YOU WANT ENTER AGAIN THEN ENTER 1\n");
     		gets(tes);
     		if(strstr(tes,"1")!=NULL||strstr(tes,"one")!=NULL)
     		 goto vis;
     	
	 }
	 else
	 { 
	 	while((ch=fgetc(f2))!=EOF){
	 	printf("%c",ch);
	 	coun++;
	    }
	    if(coun==0)
	    printf("STUDENT'S BASIC INFORMATION IS NOT FILLED\n");
	    else
	    {
	    	printf("COMPLETED \n");
	    
		}
			printf("IF YOU WANT SEE ANOTHER STUDENT THEN ENTER  ZERO\n");
	     	gets(zero);
	    	if(strstr(zero,"0")!=NULL||strstr(zero,"zero")!=NULL){
	         goto vis;
	         system("cls");
	     }
	 }
    return ;
}
 void send()
{
		int i,j,k,x=1,u;
	for(i=0;i<6;i++)
	{ 
	
	    printf("\n\n\n\n \n\n\n                                                ");
	 	printf("SENDING TO ALL STUDENTS");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<2393;u++)
		for(j=0;j<111;j++);
		if(i!=5)
		system("cls");
		x++;
	}
}
 void sentsymbol()
 {
 		int x=0,i,j,k;
	for(i=0;i<101;i+=6)
	{
	   send();
		printf("%d%c",i,'%');
	//	for(x=0;x<212;x++)
		system("cls");
		  printf("\n\n\n\n \n\n\n                                                ");
     	printf("SENDING TO ALL STUDENTS.....");
		 system("cls");
		
	}
 	
 }
 void verifsymbol()
 {
 		int i,j,k,x=1,u;
	for(i=0;i<6;i++)
	{
	
	    printf("\n\n\n\n \n\n\n                                                ");
		 printf("VERFYINg");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<239;u++)
		for(j=0;j<11;j++);
		if(i!=5)
		system("cls");
		x++;
	}
 }
 void accl()
{
		int i,j,k,x=1,u;
	for(i=0;i<6;i++)
	{ 
	
	    printf("\n\n\n\n \n\n\n                                                ");
		 printf("ACCESSING DATA");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<2393;u++)
		for(j=0;j<111;j++);
		if(i!=5)
		system("cls");
		x++;
	}
}
void accessingdatasybl()
{
	int x=0,i,j,k;
	for(i=0;i<101;i+=17)
	{
	   accl();
		printf("%d%c",i,'%');
		
		if(i%2==0&&(i==20||i==50||i==70||i==90||i%10!=0))
		for(x=0;x<199;x++)
		for(j=0;j<19;j++)
		for(k=0;k<20;k++);
		else if(i%10==0&&i!=20&&i!=50&&i!=70&&i!=90||i==75||i==99||i==83||i==94||i==67||i==92||i==26||i==43||i==56||i==64||i==78||i==88||i==96)
		for(x=0;x<23;x++)
		for(j=0;j<19;j++);
		else if(i%5==0)
			for(x=0;x<99;x++)
		for(j=0;j<199;j++);
		else
		for(x=0;x<10;x++)
		for(j=0;j<19;j++)
		for(k=0;k<10;k++);
	//	for(x=0;x<212;x++)
		system("cls");
		  printf("\n\n\n\n \n\n\n                                                ");
		 printf("ACCESSING DATA");
		 system("cls");
		
	}
	
}
void complent()
{
	char ch;
      int i,j,k,x=1,u;
      printf("PLEASE WAIT..\n");
	for(i=0;i<3;i++)
	{ 
	
	     printf("\n\n\n\n \n\n\n                                                ");
		  printf("GEATHERING INFORMATION");
	    for(k=0;k<x;k++)
		printf(".");
	    for( u=0;u<2393;u++)
		for(j=0;j<19999;j++);
		
		system("cls");
		x++;
	}
	printf("----->MESSAGE FROM STUDENTS:\n");
	FILE *f;
	f=fopen("informtoteacherfromstdnt.txt","r");
	if(f==NULL)
	{
		printf("NO MESSAGES\n");
	}
	else
	{
		while((ch=fgetc(f))!=EOF)
		printf("%c",ch);
	}
	printf("\n");
}
void settingfaculty()
{  char n[10],name[48],orgnalnam[48]={0},opassword[50]={0},password[50],name1[100]={0},password1[100]={0};
	printf("SETTINGS:\npess 1 for CHANGE PASSWORD \npress 2 for CHANGE USER NAME\npress 3 for BACK TO MENU\n");
	fflush(stdin);
	gets(n);
	if(strstr(n,"one")!=NULL||strstr(n,"1"))
	{
		FILE *f;
		int line_no=-1;
		f=fopen("facultpassowards.txt","r+");
	   retry:
		printf("ENTER USERNAME: ");
		gets(name);
		fflush(stdin);
		char ch;
		int k=1;
		rewind(f);
		while((ch=fgetc(f))!=EOF&&k)
		{
			fseek(f,-1,SEEK_CUR);
			line_no=ftell(f);
			fscanf(f,"%s %s\n",orgnalnam,opassword);
		//	printf("%s %s\n",orgnalnam,opassword);
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
		printf("ENTER OLD PASSWORD(for verification purpose):");
		gets(password);
		if(strcmp(opassword,password)==0)
		{ 
		    
	         system("cls");
		    verifsymbol();
		    system("cls");
			printf("VERIFIED\n");
			
		}
		else
		{  
			printf("INVALID USERNAME OR PASSWORD\nENTER AGAIN\n");
			goto retry;
			
		}
	     fclose(f);
	     n:
		printf("enter new password:");
		 gets(password);
		 if(strlen(password)>8)
		 {
		 	printf("-->long of password must be less than 8\n");
		 	goto n;
		 }
		 FILE *temp;
		 temp=fopen("temporary.txt","w");
		 f=fopen("facultpassowards.txt","r+");
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
		 f=fopen("facultpassowards.txt","w");
		 temp=fopen("temporary.txt","r");
		 while((ch=fgetc(temp))!=EOF)
		 fputc(ch,f);
		 fclose(f);
		 fclose(temp);
	//	 changesymbol();
		 printf("SUCCESSFUL CHANGED!\n");
	}
		   else if(strstr(n,"second")!=NULL||strstr(n,"2")!=NULL||strstr(n,"two")!=NULL)
     	{
		printf("REALLY SORRY FOR WE CANN'T CHANGE USER's NAME \nBY CREATING AN ACCOUNT WE CAN GIVE UNIUQE NAME SO WE CAN NOT CHANGE \n");
	   }
		
		
	}
	
	

int condutingquiz()
{ char quiz[5];
  
FILE *f;
f=fopen("quizquestion.txt","r");
	if(quiz1==1||f!=NULL)
	{  char ch;
	     FILE *tem;
         // f=fopen("quizquestion.txt","r");
          tem=fopen("temporary.txt","w");
	    qu:
	    	if(fgetc(f)=='1')
			{
				printf("QUIZ PAPER IS ALREADY  SENT TO ALL STUDENTS\n");
				printf("ARE YOU WANT CHANG THEN ENTER \"GO\"\n");
				char go[30];
				fflush(stdin);
				gets(go);
				strlwr(go);
				if(!(strstr(go,"go")!=NULL))
				return 0;
			}
		printf("DO YOU WANT TO CONDUCT QUIZ THEN ENTER \"YES\" OR \"NO\"\n");
		fflush(stdin);
		gets(quiz);
		strlwr(quiz);
		if(strstr(quiz,"y")!=NULL){
		printf("NOTIFICATION WILL BE SEND NOW TO ALL STUDENTS....\n");
		printf("WAIT.....");
		sentsymbol();
		fputc('1',tem);
		fseek(f,1,SEEK_SET);
		while((ch=fgetc(f))!=EOF)
		fputc(ch,tem);
		fclose(tem);
		fclose(f);
		f=fopen("quizquestion.txt","w");
		tem=fopen("temporary.txt","r");
		while((ch=fgetc(tem))!=EOF)
		fputc(ch,f);
		fclose(f);
		fclose(tem);
		
     	}
     	else if(strstr(quiz,"n")!=NULL)
     	{
     		printf("NOTIFICATION CAN'T SEND TO STUDENTS...\n");
     				fputc('0',tem);
		fseek(f,1,SEEK_SET);
		while((ch=fgetc(f))!=EOF)
		fputc(ch,tem);
		fclose(tem);
		fclose(f);
		f=fopen("quizquestion.txt","w");
		tem=fopen("temporary.txt","r");
		while((ch=fgetc(tem))!=EOF)
		fputc(ch,f);
		fclose(f);
		fclose(tem);
     	//	fputc('0',f);
		 }
		 else
		 {
		 	printf("ENTER VALID INPUT\n");
		 	goto qu;
		 }
	}
	else
	{ char q1[4];
		printf("YOU HAVE NOT PREPARE QUIZ QUESTION SO WE CAN NOT CONDUCT \n");
		printf("ARE YOU INTRETEST TO CREAT A QUIZ THEN ");
		printf("ENTER YES OR ELSE NO\n");
		 scanf("%s",q1);
		 if(strstr(q1,"y")!=NULL)
		return 1;
		else
		printf(".");
		
	}
	return 0;
}
void preprationquiz()
{
	FILE *f;
	char ch;
	int count=0;
	printf("******PREPARATION SECTION*****\n");
	char n[3];
	  f=fopen("quizquestion.txt","a+");
	  char w=fgetc(f);
	if(w=='0'||w=='1')
   {
   	printf("\nQUESTION PEPAR IS ALREADY PREPARED\n");
   	printf("YOUR ARE WANT TO REPREPARE THEN ENTER \"YES\" OR \"NO\"\n");
   	char re[10];
   	fflush(stdin);
   	gets(re);
   	if(strstr(re,"yes")!=NULL)
   	{
   		fclose(f);
   		f=fopen("quizquestion.txt","w");
	   }
	   else
	   return ;
   }
   rewind(f);
	create:
	printf("ENTER HOW MANY QUESTION YOU WANT?\n");
	fflush(stdin);
	gets(n);
	if(!('0'<=n[0]&&'9'>=n[0])){
	printf("ENTER VALID INPUT\n");
	system("cls");
	goto create;
     }
	fflush(stdin);
   printf("EACH QUESTION MUST  END WITH QUESTION MARK(?)\n");
   printf(" ENTER ONLY QESTIONS\n");
   
   fputc('0',f);
   fputc(' ',f);
   fputc(n[0],f);
   fputc('\n',f);
   while((ch=getchar())!=EOF)
   {
   	  fputc(ch,f);
   	  if(ch=='?')
   	   count++;
   	   if(count==(n[0]-'0'))
   	   break;
   	   
   }
   char key[n[0]-'0'+1];
   key:
   printf("ENTER QUIZ KEY(1 FOR TURE OR 0 FOR FALSE)\n");
     int i=0;
     while(i<(n[0]-'0'))
     scanf("\n%c",&key[i++]);
    // fflush(stdin);
    key[i]='\0';
    i=0;
    while(key[i]!='\0')
    {
    	if(!(key[i]=='0'||key[i]=='1'))
	{
		printf("ENTER VALID KEY \n");
		goto key;
	}
	i++;
	}
	quiz1=1;
	printf("SUCCESSFULLY PREPARED QUIZ\n");
	fseek(f,0,SEEK_END);
	fprintf(f,"\n%s",key);
	fclose(f);
   
	
}
void noticationtostudent(char name[])
{
	FILE *f;
	char ch;
	f=fopen("noticationtostduent.txt","a+");
	printf("*****NOTICATION SECTION*****\n");
//BACK MENU
	printf("ENTER THE MESSAGE TO BE INFORMED\n");
	printf("ENTER \"CTRL+Z\" TO SEND MESSAGE \n");
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
	printf(" ENTER:\n");
	while((ch=getchar())!=EOF)
	fputc(ch,f);
	fprintf(f,"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s","FROM :");
	 fprintf(f,"\n\t\t\t\t\t\t\t\t\t\t\t\t\t%s",name);
	fclose(f);
		system("cls");
		sentsymbol();
	printf("SUCCESSFUL SENT\n");
	
}
void nofstd()
{
   FILE *f;
   int count=0;
   f=fopen("studentpasswords.txt","r");
   char ch,studentrolln[11]={0};
     accessingdatasybl();
     while((ch=fgetc(f))!=EOF)
     {
     	if(ch=='\n')
     	count++;
	 }
	 printf("SUCCESSFULLY COMPLETED DATA ACCESS\n");
	 rewind(f);
	 if(fgetc(f)==EOF)
	 printf("THERE IS NO DATA\n");
	 else{
	 printf("%d STUDENTS ARE HAVING THEIR ACCOUNTS \nTHOSE ROLL NO ARE \n",count);
	 rewind(f);
	 count=0;
   while((ch=fgetc(f))!=EOF)
   {
   	fseek(f,-1,SEEK_CUR);
   	fscanf(f,"%s ",studentrolln);
   	if(count++%2==0){
   	printf(" %s\n",studentrolln);
    }
    }
   }
}
void factostudent(char username[])
{ char ch;
  printf("WELCOME-%s\n",username);
    dis:
	display();
	scanf("\n%c",&ch);
		system("cls");
	switch(ch)
	{
		case '1': creatofstudentfile();
	             	break;
	    case '2': nofstd();break;
	    case '3': vist();break;
	    case '4': complent();break;
	    case '5': noticationtostudent(username);break;
	    case '6':preprationquiz();break;
	    case '7':if(condutingquiz()==1){
	
		system("cls");
		preprationquiz();
		
		}
		printf("\n");break;
	     case '8':result();break;
	    case '9':settingfaculty();break;
		default :printf("ENTER VALID INPUT\n");
		goto dis; //studentcreation();
	}
	//system("cls");
	printf("\n IF YOU  WANT TO CONTINOUE  MENU PAGE THEN ENTER 1  OR ELSE ANY NUMBER\n");
	fflush(stdin);
	char g[5];
	gets(g);
	strlwr(g);
	if(strstr(g,"one")!=NULL||g[0]=='1')
	{
		system("cls");
		goto dis;
	}
	system("cls");
}
void display()
{
	printf("CHOOSE THE OPTION:\n");
	printf("1-CREATE A STUDENT ACCOUNT\n");
	printf("2-SHOW STUDENTS ACCOUNT\n");
	printf("3-VIEW OF AN STUDENT DETAILS\n");
	printf("4-COMPLAINTS FROM STUDENTS\n");
	printf("5-NOTICATION TO STUDENTs\n");
	printf("6-PREPARE A QUIZ \n");
	printf("7-CONDUTE A QUIZ \n");
	printf("8-QUIZ MARKS\n");
	printf("9-SETTINGS\n");
	
}


