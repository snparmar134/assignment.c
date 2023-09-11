#include<stdio.h>
int main()
{
	int days,years,d,y;
	 printf("enter years:");
	 scanf("%d",&years);
	 printf("enter day:");
	 scanf("%d",&days);
	 
	 d=years*365;
	 y=days/365;
	 printf("DAYS:%d\n",d);
	 printf("YEARS:%d\n",y);
	 return 0;
}