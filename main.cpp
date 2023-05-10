#include"admin.h"
int main(){
	wel2();
	int d,de,a;
	char ch='y',as[10];
	printf("Enter your choice:");
	scanf("%d",&d);
	printf("\n");
	fflush(stdin);
	if(d>4 || d<1)
	{
		printf("invalid response..\nPlease press ,'y' to go to first window , any other key to exit :");
		ch=getchar();
		if(ch=='y' || ch=='Y')
		{
			printf("\n");
			printf("Enter your choice:");
			scanf("%d",&d);	
		}
		else
		exit(0);
	}
	else{
	while(ch=='y' || ch=='Y'){
	switch(d)
	{
		case 1:
			system("cls");
			ulogin();
			if(flag==0){
				fflush(stdin);
				printf("\nPlease press ,'y' to go to first window , any other key to exit :");
				ch=getchar();
				if(ch=='y' || ch=='Y')
				{		
					system("cls");
					wel2();
					printf("\n");
					printf("Enter your choice:");
					scanf("%d",&d);
					fflush(stdin);
					continue;
				}
				else
					exit(0);
			}
			else{
			printf("Enter your choice:");
			scanf("%d",&de);
			fflush(stdin);
			if(de>6 || de<1)
			{
				printf("\ninvalid response..\nPlease press ,'y' to go to first window , any other key to exit :");
				ch=getchar();
				if(ch=='y' || ch=='Y')
				{
					printf("\n");
					printf("Enter your choice:");
					scanf("%d",&de);	
				}
				else
					exit(0);
			}
			switch(de)
			{
				case 1:
					deposit(stru);
					fflush(stdin);
					break;
				case 2:
					with(stru);
					fflush(stdin);
					break;
				case 3:
					bcheck(stru);
					break;
				case 4:
					cpass(stru,strp);
					fflush(stdin);
					break;
				case 5:
					statement(stru);
					break;
				case 6:
					exit(0);
			}}
			break;
		case 2:
			system("cls");
			regis();
			fflush(stdin);
			printf("\nPlease press ,'y' to go to first window , any other key to exit :");
			ch=getchar();
			if(ch=='y' || ch=='Y')
			{
				printf("\n");wel2();
				printf("Enter your choice:");
				scanf("%d",&d);
				fflush(stdin);
				continue;
			}
			else
				exit(0);
			break;
		case 3:
			system("cls");
			alogin();
			if(flag==0){
				fflush(stdin);
				printf("\nPlease press ,'y' to go to first window , any other key to exit :");
				ch=getchar();
				if(ch=='y' || ch=='Y')
				{		
					system("cls");
					wel2();
					printf("\n");
					printf("Enter your choice:");
					scanf("%d",&d);
					fflush(stdin);
					continue;
				}
				else
					exit(0);
			}
			else{
			printf("Enter your choice:");
			scanf("%d",&a);
			fflush(stdin);
			if(a>3 || a<1)
			{
				printf("\ninvalid response..\nPlease press ,'y' to go to first window , any other key to exit :");
				ch=getchar();
				if(ch=='y' || ch=='Y')
				{
					printf("\n");
					printf("Enter your choice:");
					scanf("%d",&a);	
				}
				else
					exit(0);}
			switch(a)
			{
				case 1:
					system("cls");
					vuser();
					break;
				case 2:
					system("cls");
					printf("enter username of person: ");
					gets(as);
					statement(as);
					break;
				case 3:
					system("cls");
					exit(0);
			}
			break;
			}
		case 4:
			exit(0);
	}
	printf("\nPlease press ,'y' to go to first window , any other key to exit :");
	ch=getchar();
	if(ch=='y' || ch=='Y')
	{
		system("cls");
		wel2();
		printf("\n");
		printf("Enter your choice:");
		scanf("%d",&d);
		fflush(stdin);
	}
		else
		exit(0);
	}
}
}	
