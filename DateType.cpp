#include "DateType.h"
#include <iostream>
using namespace std; 
int main()
{
	//Tested and verified all the functions, except calculateNewDate
	dateType myDate(2, 20, 2003);
	cout << "The date with constructor parameters : ";
	myDate.printDate();
	cout << "Total days passed in year is " << myDate.getDaysPassed() << endl;
	cout << "Total days remaining in year is " << myDate.getDaysRemaining() << endl;
	cout << "The total days in this month are " << myDate.getDaysInMonth() << endl;
	myDate.calculateNewDate(15);
	myDate.setYear(2000);
	cout << " The new date after setting the year to 2000 is : ";
	myDate.printDate();
	myDate.setMonth(2);
	cout << "The new date after setting the month to 2 is : ";
	myDate.printDate();
	myDate.setDay(29);
	cout << "The new date after setting the day to 29 is : ";
	myDate.printDate();
	myDate.setYear(2001);
	cout << "The new date after restting the year to 2001 is : ";
	myDate.setDate(2,29,2001);
	myDate.printDate();
	

	return 0;
}
