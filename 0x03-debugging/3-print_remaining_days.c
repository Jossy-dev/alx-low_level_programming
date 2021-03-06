#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints how many days are left
 * in a date that is inputted
 * @month: month in number format
 * @day: day of the month
 * @year: the year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}
		printf("Day of the year is: %d\n", day);
		printf("Remaining days are: %d\n", 366 - day);
	}
		else
		{
			if (month == 2 && day == 60)
				printf("Invalid date entered: %02d/%02d/%04d\n", month, day - 31, year);
			else
			{
				printf("Day of the year is: %d\n", day);
				printf("Remaining days are: %d\n", 365 - day);
			}
		}
}
