#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first num:");
	scanf("%d",&a);
	printf("enter second num:");
	scanf("%d",&b);
	
	a=a+b;
    b=a-b;
    a=a-b;
	
	printf("\nafter swaping first num:%d\n",a);
	printf("after swaping second num:%d",b);
	return 0;
}