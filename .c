#include<stdio.h>
int main()
{
	int days,month,year;
	
		
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
