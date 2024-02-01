#include<stdio.h>
int main()
{
	int days,month,year;
	printf("enter the month:");
	scanf("%d",&month);
	switch(month){
		case 1:case 3:case 5: case 7:case 9:case 11:
			printf("31 days");
			break;
		case 4:case 6:case 8: case 10: case 12:
			printf("30 days");
			break;
		case 2:
			printf("enter the year");
			scanf("%d",&year);
			if ((year % 100==0) && (year % 400==0))
			{
			printf("29 days");
			}
			else if((year %4==0)&&(year %100!=0))
			{
			printf("28 days");
		}
		break;
	}
}
