#include"ulogin.h"
void deposit(char stru[20])
{
//	ulogin();
	float dep;
	FILE *f3,*f5;
	printf("Enter deposit money :");
	scanf("%f",&dep);
	f5=fopen(stru,"a");
	printf("\n");
	f3=fopen("abc.txt","rb+");
	while(fread(&a,sizeof(a),1,f3)==1)
	{
		if(strcmp(a.uname,stru)==0)
		{
			printf("old balance: %f\n",a.balance);
			a.balance=a.balance+dep;
			printf("current balance: %f\n",a.balance);
			fseek(f3,-4,SEEK_CUR);
			fwrite(&(a.balance),sizeof(a.balance),1,f3);
			break;
		}
	}
	fprintf(f5,"deposited %.3f on %s , BALANCE : %.3f\n",dep,__DATE__,a.balance);
	fclose(f5);
	fclose(f3);
}
void with(char stru[20])
{
	float with;
	FILE *f3,*f5;
	printf("Enter money withdrawn :");
	scanf("%f",&with);
	f5=fopen(stru,"a");
	printf("\n");
	f3=fopen("abc.txt","rb+");
	while(fread(&a,sizeof(a),1,f3)==1)
	{
		if(strcmp(a.uname,stru)==0)
		{
			printf("old balance: %f\n",a.balance);
			a.balance=a.balance-with;
			printf("current balance: %f\n",a.balance);
			fseek(f3,-4,SEEK_CUR);
			fwrite(&(a.balance),sizeof(a.balance),1,f3);
			break;
		}
	}
	fprintf(f5,"withdrawn %.3f on %s , BALANCE : %.3f\n",with,__DATE__,a.balance);
	fclose(f5);
	fclose(f3);
}
