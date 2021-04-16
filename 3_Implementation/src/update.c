#include "fun.h"
void update(struct bank *account, int *numberOfAccounts)
{
	int opt,i,accNo,searchFlag=0;
	float amount;
	printf("Enter 1 To Search Account Or 2 To Change Balance Directly.\n");
	printf("Enter: ");
	scanf("%d",&opt);
	switch(opt)
	{
    case 1:
        searchFlag=searching(account,numberOfAccounts);

    case 2:
        if (searchFlag==1||opt==2)
        {
            printf("\nEnter Account Number For Which You Want To Change Balance For: ");
            scanf("%d",&accNo);
            searchFlag=0;
            for(i=0;i<*numberOfAccounts;i++)
            {
                if(account[i].accNo==accNo)
                {
                    searchFlag=1;
                    printf("Press 1 To Withdraw.\n");
                    printf("Press 2 To Deposit.\n");
                    printf("Enter Option: ");
                    scanf("%d",&opt);
                    if(opt==1)
                    {
                        printf("Enter Amount: ");
                        scanf("%f",&amount);
                        if(amount>account[i].balance)
                        {
                            printf("Insufficient Balance.");
                        }
                        else
                        {
                            account[i].balance-=amount;
                            printf("Withdrawal Was Successful");
                        }
                    }
                    if(opt==2)
                    {
                        printf("Enter Amount: ");
                        scanf("%f",&amount);
                        account[i].balance+=amount;
                        printf("Deposit Was Successful");
                    }

                }
            }
            if(searchFlag==0)
            {
                printf("Not Found.\n");
            }
        }
        break;

        default:
        printf("Wrong Input.\n");
        break;
	}


}
