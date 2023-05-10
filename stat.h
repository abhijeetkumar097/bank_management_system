#include"balance.h"
void statement(char stru[10])
{
	char s[70];
	FILE *f6;
	f6=fopen(stru,"r");
	while((fgets(s,69,f6))!=NULL)
	puts(s);
	fclose(f6);
}
