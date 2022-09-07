#include<stdio.h>
#include<string.h>
main()
{
	char input[100],reverse[100];
	
	printf("Enter String : ");
	scanf("%s",&input);
	
	strcpy(reverse,input);
	strrev(reverse);
	
	if(strcmp(input,reverse) == 0)
	{
		printf("\n String Palindrome.");
	}
	else
	{
		printf("\n String is Not Palindrome.");
	}
}