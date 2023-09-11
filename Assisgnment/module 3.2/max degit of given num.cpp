#include<stdio.h>
int main()
{
	int num,max=0;
	printf("Enter number:");
	scanf("%d",&num);
	
	while(num!=0)
	{
		if(num%10>max)
		{
			max=num%10;
		}
		num/=10;
	}
	printf("Largest Number=%d",max);
}