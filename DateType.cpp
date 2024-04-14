#include "DateType.h"
#include <iostream>
using namespace std; 
int main()
{
	//Tested and verified all the functions, except calculateNewDate
	dateType myDate(2, 20, 2003);

	myDate.printDate();

	cout << "Total days passed in year is " << myDate.getDaysPassed() << endl;
	cout << "Total days remaining in year is " << myDate.getDaysRemaining() << endl;
	cout << "The total days in this month are " << myDate.getDaysInMonth() << endl;
	cout << "The date with constructor parameters " << endl;
	myDate.printDate();
	myDate.calculateNewDate(15);
	myDate.resetMonth();
	myDate.resetYear();
	myDate.resetDay();
	

	return 0;
}
