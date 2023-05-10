#include"statement.h"
char block='n';

struct admin{
	char name[30];
	char uname[20];
	char apass[15];
}adm;
//FILE *fp;
//fp=fopen("admin123.txt","wb");
//puts("enter name:");
//gets(adm.name);
//puts("enter username:");
//gets(adm.uname);
//puts("enter password:");
//gets(adm.apass);
//fwrite(&adm,sizeof(adm),1,fp);
//fclose(fp);
void vuser(){
	FILE *f8;
	char str[20];
	f8=fopen("username.txt","r");
	while((fgets(str,9,f8))!=NULL)
	puts(str);
	fclose(f8);
}
void alogin(){
	FILE *f1;
	char strau[20],pass[15];
	f1=fopen("admin123.txt","rb");
	printf("Admin login page\n");
	printf("Enter Username: ");
	scanf("%s",&strau);
	printf("\n");
	printf("Enter password: ");
	scanf("%s",&pass);
	while(fread(&adm,sizeof(adm),1,f1)==1)
	{
		if(strcmp(adm.uname,strau)==0 && strcmp(adm.apass,pass)==0)
		{
			fseek(f1,-resize,SEEK_CUR);
			admw(adm.name);
			flag+=1;
			break;
		}
	}
	if(!flag){
	flag=0;
	printf("wrong username or password");}
	fclose(f1);
}

