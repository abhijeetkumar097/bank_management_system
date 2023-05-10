#include"trans.h"
void cpass(char stru[20],char strp[13])
{
	FILE *f4;
	char str4[13];
	f4=fopen("abc.txt","rb+");
	while(fread(&a,resize,1,f4)==1)
	{
		if(strcmp(stru,a.uname)==0 && strcmp(strp,a.pass)==0)
		{
			printf("\n");
			printf("Enter new password of same length as previous one..");
			printf("\n");
			printf("Enter new password : ");
			scanf("%s",&a.pass);
			strcpy(strp,a.pass);
			fseek(f4,-18,SEEK_CUR);
			fwrite(&(a.pass),sizeof(a.pass),1,f4);
			printf("password updated successfully..\n");
			break;
		}

	}
	fclose(f4);
}
