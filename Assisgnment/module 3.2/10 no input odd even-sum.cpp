#include<stdio.h>
main()
{
	int n,i,counteven=0,countodd=0,sumeven=0,sumodd=0;
	for(i=1;i<=10;i++)
	{
		printf("enter number %d :",i);
		scanf("%d",&n);
		if(n%2==0)
		{
			counteven++;
			sumeven=sumeven+n;
		}
		else
		{
			countodd++;
			sumodd=sumodd+n;
		}
	}
	printf("total even number is: %d\n",counteven);
	printf("total odd number is: %d\n",countodd);
	printf("sum of even number is: %d\n",sumeven);
	printf("sum of odd number is: %d\n",sumodd);
	return 0;
}
