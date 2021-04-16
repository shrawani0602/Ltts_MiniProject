#include "fun.h"
#define SIZE 5000

struct bank
	{
		int accNo;
		char owner[30];
		float balance;
	};

void menu(struct bank *account, int *numberOfAccounts, char*filename);

int main()
{
    struct bank account[SIZE];
    int numberOfAccounts=0;
    char filename[30];
    FILE *fptr;
	printf("Enter FILE Name to create a new file: ");
	gets(filename);
	
	fptr=fopen(filename,"r");
	if(fptr==NULL)
    {
        printf("New File.\n");
        printf("Press * to continue\n");
		getch();
		

    }
	if(fptr!=NULL)
	{
    while(fread (&account[numberOfAccounts],sizeof(account[numberOfAccounts]),1,fptr)==1)
        numberOfAccounts++;
	}
	
    menu(account,&numberOfAccounts,filename);

    return 0;
}




void file(struct bank *account, int *numberOfAccounts, char *filename);




void menu(struct bank *account, int *numberOfAccounts, char*filename)
{
    int opt;
    do{
		system("cls");
	printf("Press key for desired operation.\n");
	printf("1 : Register New Account.\n");
	printf("2 : Record of all Created Account.\n");
	printf("3 : Sorting Record.\n");
	printf("4 : Search account.\n");
	printf("5 : Update accoont balance .\n");
	printf("6 : De-Register existing Account.\n");
	printf("7 : exit.\n");
	if(*numberOfAccounts==5000)
	{
		printf("Memory Full.\a\n");
		printf("Please De-Register Match To Clear Some Memory [PRESS 6].\a\n");
	}
	printf("Enter Your Option: ");
	scanf("%d",&opt);
	system("cls");
	switch(opt)
	{
	case 1:
        registeration(account,numberOfAccounts);
        getch();
		break;
	case 2:
        detail(account,numberOfAccounts);
        getch();
		break;
	case 3:
        sorting(account,numberOfAccounts);
        getch();
		break;
	case 4:
        searching(account,numberOfAccounts);
        getch();
		break;
	case 5:
        update(account,numberOfAccounts);
        getch();
		break;
	case 6:
        deregister(account,numberOfAccounts);
        getch();
		break;
	case 7:
	    file(account,numberOfAccounts,filename);
	    printf("System Turning Off.");
		break;
	default:
		printf("Wrong Input.\n");
		break;
	}
	}while(opt!=7);

}


void file(struct bank *account, int *numberOfAccounts, char *filename)
{
    int i;
	FILE *fptr;
	fptr=fopen(filename,"w");
	if(fptr==NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Writing Into File....\n");
	for(i=0;i<*numberOfAccounts;i++)
	{
		fwrite(&account[i],sizeof(account[i]),1,fptr);
	}
	fclose(fptr);
}

