#include<stdio.h>
main()
{
	int a, b, c, sum=0;
	
	printf("Enter a Number : ");
	scanf("%d",&a);
	
	while(a>0)
	{
		c=a%10;
		sum=sum+c;
		a=a/10;
	}
	
	printf("\n Sum = %d",sum);
}