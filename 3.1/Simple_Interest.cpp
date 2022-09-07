#include<stdio.h>
main()
{
	int p,r,n,ans;
	
	printf("\n Enter Amount : ");
	scanf("%d",&p);
	printf("\n Enter Years (In Months) : ");
	scanf("%d",&r);
	printf("\n Enter Interst Rate : ");
	scanf("%d",&n);
	
	ans = ((p*r*n)/100);
	printf("\n Total Amount = %d",ans);
}