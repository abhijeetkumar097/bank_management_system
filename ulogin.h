#include"regis.h"
char stru[20],strp[13];
int resize=sizeof(struct account);
int flag=0;
void ulogin(){
	FILE *f1;	
	f1=fopen("abc.txt","rb");
	printf("Enter Username: ");
	scanf("%s",&stru);
	printf("\n");
	printf("Enter password: ");
	scanf("%s",&strp);
	while(fread(&a,sizeof(a),1,f1)==1)
	{
		if(strcmp(a.uname,stru)==0 && strcmp(a.pass,strp)==0)
		{
			fseek(f1,-resize,SEEK_CUR);
			wel1(a.fname);
			flag+=1;
			break;
		}
	}
	if(!flag){
	flag=0;
	printf("wrong username or password");}
	fclose(f1);
}
