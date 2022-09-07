#include<stdio.h>
main()
{
	int a,b,ans;
	
	printf(" Enter Value of A : ");
	scanf("%d",&a);
	printf(" Enter Value of B : ");
	scanf("%d",&b);
	
	ans = a+b;
	printf("\n Addition = %d",ans);
	
	ans = a-b;
	printf("\n Substraction = %d",ans);
	
	ans = a*b;
	printf("\n Multiplication = %d",ans);
	
	ans = a/b;
	printf("\n Division = %d",ans);
	
	ans = a%b;
	printf("\n Modulor = %d",ans);
	
}