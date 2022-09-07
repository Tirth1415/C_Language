#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	
	printf(" Enter array A = \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf(" A[%d][%d]=", i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf(" Enter array B = \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf(" B[%d][%d]=", i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0; j<2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf(" Addition array = \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",c[i][j]);	
		}
		printf("\n");		
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0; j<2; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	
	printf(" Substration array = \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",c[i][j]);	
		}
		printf("\n");		
	}
	
		for(i=0;i<2;i++)
	{
		for(j=0; j<2; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	
	printf(" Multiplication array = \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",c[i][j]);	
		}
		printf("\n");		
	}
}