#include "fun.h"


void detail(struct bank *account, int *numberOfAccounts)
{
    int i;
	for(i=0;i<*numberOfAccounts;i++)
	{
		printf("Account No.:%d\tOwner:%s\tBalance:%f\n",account[i].accNo,account[i].owner,account[i].balance);
	}
}