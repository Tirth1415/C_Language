#include<stdio.h>
main()
{
	int a;
	
	printf("Enter a Number : ");
	scanf("%d",&a);
	
	if(a % 2 == 0)
	{
		printf("\n Number is Even.");
	}
	else
	{
		printf("\n Number is Odd.");
	}
}