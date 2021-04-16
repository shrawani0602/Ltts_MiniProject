#include "fun.h"

void deregister(struct bank *account, int *numberOfAccounts)
{
	int accNo,i,index,searchFlag=0,balanceFlag=0,opt;

	printf("Enter 1 To Search Account Or 2 To De-register Account Directly.\n");
	printf("Enter: ");
	scanf("%d",&opt);
	switch(opt)
	{
    case 1:
        searchFlag=searching(account,numberOfAccounts);
    case 2:
        if(searchFlag==1||opt==2)
        {
            printf("\nDe-register Account.\n\n");
            printf("Enter Account Number: ");
            scanf("%d",&accNo);
            searchFlag=0;
            for(i=0;i<*numberOfAccounts;i++)
            {
                if(account[i].accNo==accNo)
                {
                    searchFlag=1;
                    index=i;
                    if(account[index].balance==0)
                    {
                        balanceFlag=1;
                    }
                }

            }

            if(searchFlag==1&&balanceFlag==1)
            {
                 if(index<*numberOfAccounts-1)
                {
                    for(i=index;i<*numberOfAccounts-1;i++)
                    {
                        account[i]=account[i+1];
                    }
                    *numberOfAccounts=*numberOfAccounts-1;
                    printf("De-registration Successful.\n");

                }
                else
                {
                    if(index==*numberOfAccounts-1)
                    {
                        *numberOfAccounts=*numberOfAccounts-1;
                        printf("De-registration Successful.\n");
                    }
                }
            }
            if(searchFlag==0)
            {
                printf("Not Found.\n");
            }

            if(balanceFlag==0&&searchFlag==1)
            {
                printf("Error: Account is not empty.\n");
            }

        }
        break;

        default:
        printf("Wrong Input.\n");
        break;
	}}