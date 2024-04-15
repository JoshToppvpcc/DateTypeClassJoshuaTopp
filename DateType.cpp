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
	myDate.resetYear();
	myDate.resetMonth();
	myDate.resetDay();
	

	return 0;
}
