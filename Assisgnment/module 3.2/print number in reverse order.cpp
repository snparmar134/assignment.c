#include<stdio.h>
main()
{
	int n,reverse=0,reminder;
	
	printf("enter a number to revesre:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		reminder=n%10;
		reverse=reverse*10+reminder;
		n=n/10;
	}
	printf("revesre of entered number is =%d\n",reverse);
	return 0;
	
	
}
