#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int b,c;
	
	printf("Enter String : ");
	gets(a);
	
	for(c=0; a[b] != '\0'; c++)
	{
		b++;
	}
	
	printf("\n Length of String = %d",b);
}