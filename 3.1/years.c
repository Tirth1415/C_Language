#include<stdio.h>
main()
{
	int year,month,week,days;
	
	printf("\n Enter a Years : ");
	scanf("%d",&year);
	
	month = year*12;
	week = year*52;
	days = year*365;
	
	printf("\n Years convert into Months = %d",month);
	printf("\n Years convert into Weeks = %d",week);
	printf("\n Years convert into Dayss = %d",days);
	
	printf("\n\n Enter a Days : ");
	scanf("%d",&days);
	
	year = days/365;
	month = days/30;
	week = days/7;
	
	printf("\n Days Convert into Years = %d",year);
	printf("\n Days Convert into Months = %d",month);
	printf("\n Days Convert into Weeks = %d",week);
	
}