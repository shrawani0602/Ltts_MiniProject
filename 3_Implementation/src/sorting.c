

#include "fun.h"
void sorting(struct bank *account, int *numberOfAccounts)
{
    int i=0,j=0,k,opt;
    char *string1,*string2;
    struct bank temp;

    printf("Choose To Sort The Accounts By Account Number, Owner Name Or Balance.\n\n");
	printf("Press 1 To Sort By Account Number.\n");
	printf("Press 2 To Sort By Owner Last Name.\n");
    printf("Press 3 To Sort By Balance.\n\n");

    printf("Enter Option: ");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:

		for(i=0;i<*numberOfAccounts-1;i++)
		{
			for(j=i+1;j<*numberOfAccounts;j++)
			{
				if(account[i].accNo>account[j].accNo)
				{
					temp=account[i];
					account[i]=account[j];
					account[j]=temp;

				}
			}
		}
        break;


    case 2:
        for(i=0;i<*numberOfAccounts-1;i++)
        {
            for(j=i+1;j<*numberOfAccounts;j++)
            {
                k=1;
                string1=strrchr (account[i].owner,' ');
                string2=strrchr (account[j].owner,' ');

                while(string1[k]==string2[k]&&k<30)
                {
                    k++;
                }
                if(string1[k]>string2[k])
                {
                    temp=account[i];
                    account[i]=account[j];
                    account[j]=temp;

                }
            }
        }

        break;


    case 3:

        for(i=0;i<*numberOfAccounts-1;i++)
		{
			for(j=i+1;j<*numberOfAccounts;j++)
			{
				if(account[i].balance<account[j].balance)
				{
					temp=account[i];
					account[i]=account[j];
					account[j]=temp;

				}
			}
		}

        break;


        default:
        printf("Wrong Input.\n");

    }
    printf("Sorted Successfully.\n");
}
