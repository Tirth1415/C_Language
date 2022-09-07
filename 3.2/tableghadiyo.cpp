#include<stdio.h>
main()
{
	int a,i;
	
	printf("Enter a Number : ");
	scanf("%d",&i);
	
	for(a=1;a<=10; a++)
	{
		printf("\n%d * %d = %d", i,a,i*a);
	}
}