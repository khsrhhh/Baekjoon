#include <iostream>
using namespace std;

int day_cal(int month, int day)
{
	int day_of_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int sum_of_day = 0;
	
	for(int i = 0; i < month; i++)
	{
		sum_of_day += day_of_month[i];
	}
	
	sum_of_day += day;
	
	return sum_of_day % 7;
}

int main(void)
{
	int month;	int day;
	
	cin >> month;	cin >> day;
	
	switch(day_cal(month, day))
	{
		case 1:
			cout << "MON";
			break;
		case 2:
			cout << "TUE";
			break;
		case 3:
			cout << "WED";
			break;
		case 4:
			cout << "THU";
			break;
		case 5:
			cout << "FRI";
			break;
		case 6:
			cout << "SAT";
			break;
		case 0:
			cout << "SUN";
			break;
	}
	
	return 0;
}