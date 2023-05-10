#include<stdio.h>
struct admin{
	char name[30];
	char uname[20];
	char apass[15];
}adm;
int main()
{
	FILE *fp;
	fp=fopen("admin123.txt","wb");
	puts("enter name:");
	gets(adm.name);
	puts("enter username:");
	gets(adm.uname);
	puts("enter password:");
	gets(adm.apass);
	fwrite(&adm,sizeof(adm),1,fp);
	fclose(fp);
}
