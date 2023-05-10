#include"balance.h"
void statement(char stru[20])
{
	char s[70];
	FILE *f6;
	f6=fopen(stru,"r");
	if(f6==NULL){
	printf("user with given username does not exists.");
	exit(1);
	}
	else{
	while((fgets(s,69,f6))!=NULL)
	puts(s);}
	fclose(f6);
}
