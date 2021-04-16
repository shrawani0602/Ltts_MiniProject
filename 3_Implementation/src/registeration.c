#include "fun.h"

void registeration(struct bank *account, int *numberOfAccounts)
{
    char accNo[7],cmp,name[30];
    int accNum,i,flag;
	printf("Account Registration:\n");
	printf("AccountNo.\tName\n");
    fflush(stdin);
	while(1)
	{
	    flag=0;
	    printf("Details: ");
	    if(*numberOfAccounts<10000)
        {
            fgets (accNo, sizeof (accNo), stdin);
            cmp=strcmp(accNo,"\n");
            if(cmp==0)
            {
                printf("Press Enter To Go Back To Main task.\n");
                break;
            }
            else
            {
                accNum = atoi (accNo);
            }
             gets(name);

             for(i=0;i<*numberOfAccounts;i++)
            {
                if(account[i].accNo==accNum)
                {
                    printf("Account Number Already Exists.\n");
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
               account[*numberOfAccounts].accNo=accNum;
               strcpy(account[*numberOfAccounts].owner,name);
               account[*numberOfAccounts].balance=0.0;
                *numberOfAccounts=*numberOfAccounts+1;
                printf("Registration Successful.\n");
            }

        }

        else
        {

            printf("Error: Memory Full.\a");
            break;
        }

	}
}