#include<stdio.h>
#include<string.h>
RS()
{
	char a;
	scanf("%c",&a);
	
	if(a != '\n')
	{
		RS();
		printf("%c",a);
	}
}

main()
{
	printf("Enter a Sentance : ");
	RS();
}