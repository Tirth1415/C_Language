#include<stdio.h>
main()
{
	int r,ans;
	
	printf("\n Enter a Radius : ");
	scanf("%d",&r);
	
	ans = 3.14*r*r;
	printf("\n Area Of Circle = %d",ans);
	
	
	
	int b,d,ans2;
	
	printf("\n\n\n Enter one side of rectangle : ");
	scanf("%d",&b);
	printf("\n Enter second side of rectangle : ");
	scanf("%d",&d);
	
	ans2 = b*d;
	printf("\n Area of rectangle = %d",ans2);
	
	
	int w,h,ans3;
	
	printf("\n\n\n Enter Width of Triangle : ");
	scanf("%d",&w);
	printf("\n Enter Height of Triangle : ");
	scanf("%d",&h);
	
	ans3 = 0.5*w*h;
	printf("\n Area of Triangle = %d",ans3);
	
}