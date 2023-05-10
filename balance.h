#include"cpass.h"
void bcheck(char str[20])
{
	FILE *f6;
	f6=fopen("abc.txt","rb");
	while(fread(&a,resize,1,f6)==1)
	{
		if(strcmp(str,a.uname)==0)
		{
			printf("Your current balance : %.3f",a.balance);
			break;
		}
	}
}
