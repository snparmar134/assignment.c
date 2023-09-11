#include<stdio.h>
int main()

 {

int i, j, r,k;

printf("ENTER THE VALUE ");
scanf("%d",&r);

for ( i = 0; i < r; i++) 

{

for (k = r - i; k > 1; k--) 
{ 

printf(" "); 

}

for (j = 0; j <= i; j++) 
{ 

    printf("* ");

}

            printf("\n"); 

 }

}
	
