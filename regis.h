#include"welcome.h"
#include<conio.h>
#include<string.h>
#include<stdlib.h> //system("cls"):clear screen
#include<unistd.h> //sleep(1):delay
struct account{
	char fname[15];
	char lname[15];
	long long int adhar;
	int d,m,y;
	char uname[20];
	char pass[13];
	float balance;
	}a;
void regis(){
	FILE *f2,*f5,*f7;
	char c,str[20];
	int i=0;
	f2=fopen("abc.txt","ab");
	printf("enter first name: ");
	scanf("%s",&a.fname);
	fflush(stdin);
	printf("enter last name: ");
	scanf("%s",&a.lname);
	fflush(stdin);
	printf("enter adhar number: ");
	scanf("%lld",&a.adhar);
	fflush(stdin);
	printf("enter dob in (date.month.year or date/month/year or date-month-year) : ");
	scanf("%d%*c%d%*c%d",&a.d,&a.m,&a.y);
	fflush(stdin);
	printf("enter username: ");
	scanf("%s",&str);
	fflush(stdin);
	while(fread(&a,sizeof(a),1,f2)==1){
		if(strcmp(a.uname,str)==0){
			printf("username already exists...\nrenter: ");
			scanf("%s",&str);
		}
	}
	strcpy(a.uname,str);
	f7=fopen("username.txt","a");
	fprintf(f7,"%s\n",a.uname);
	f5=fopen(a.uname,"a");
	printf("enter password: ");
	scanf("%s",&a.pass);
	printf("\n");
	printf("enter deposited money : ");
	scanf("%f",&a.balance);
	fprintf(f5,"deposited %.3f on %s , BALANCE : %.3f\n",a.balance,__DATE__,a.balance);
	fwrite(&a,sizeof(a),1,f2);
	fclose(f2);
	fclose(f7);
	fclose(f5);
	printf("processing your data...\n");
	sleep(1);
	system("cls");
	printf("Your accouht has been created successfully.\n");
}
