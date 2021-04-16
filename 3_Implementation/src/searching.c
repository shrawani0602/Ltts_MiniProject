#include <fun.h>



int searching(struct bank *account, int *numberOfAccounts)
{
	int opt,i,accNo,searchFlag;
	float min_balance,max_balance;
	char name[30];
	searchFlag=0;
	printf("\nChoose To Search The Accounts By Account Number, Owner Name Or Balance\n\n");
	printf("Press 1 To Search By Account Number.\n");
	printf("Press 2 To Search By Owner Name.\n");
    printf("Press 3 To Search By Balance.\n\n");

	printf("Enter Your Option: ");
	scanf("%d",&opt);
	switch(opt)
	{
	case 1:
		printf("Enter Account Number: ");
		scanf("%d",&accNo);
		printf("\nSearch Result.\n\n");
		for(i=0;i<*numberOfAccounts;i++)
		{
			if(account[i].accNo==accNo)
			{
				printf("# Account No.:%d\tOwner:%s\tBalance:%f\n",account[i].accNo,account[i].owner,account[i].balance);
				searchFlag=1;
			}
		}
		if(searchFlag==0)
		{
			printf("Not Found.\n");
		}
		break;
	case 2:

		printf("Enter Owner Name: ");
		scanf("%s",name);
        printf("\nSearch Result.\n\n");
		for(i=0;i<*numberOfAccounts;i++)
		{
		   if(strstr(account[i].owner,name))
		   {
			   printf("#. Account No.:%d\tOwner:%s\tBalance:%f\n",account[i].accNo,account[i].owner,account[i].balance);

			   searchFlag=1;
		   }
		}
		if(searchFlag==0)
		{
			printf("Not Found.\n");
		}
		break;

    case 3:
        printf("Enter Min Balance: ");
		scanf("%f",&min_balance);
		printf("Enter Max Balance: ");
		scanf("%f",&max_balance);
        printf("\nSearch Result.\n\n");
		for(i=0;i<*numberOfAccounts;i++)
		{
		   if(account[i].balance>=min_balance && account[i].balance<=max_balance )
		   {
			   printf("# Account No.:%d\tOwner:%s\tBalance:%f\n",account[i].accNo,account[i].owner,account[i].balance);

			   searchFlag=1;
		   }
		}
		if(searchFlag==0)
		{
			printf("Not Found.\n");
		}
		break;

        default:
		printf("Wrong Input.\n");
		break;

	}
    return searchFlag;
}
