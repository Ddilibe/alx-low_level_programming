#include "main.h"

/**
 * convert_day - converts day of month to day of year, without accounting 
 * for leap yeat
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */

int convert_day(int month, int day)
{
	switch (month)
	{
		case 2:
			day = 31 + day;
			break;
		case 3:
			day = 59 + day;
			break;
		case 4:
			day = 90 + day;
