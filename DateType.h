#pragma once
class dateType
	{
	public:

		//precondition - make sure the numbers are input in the correct order, month, day year.
		//post condition - checks to make sure month is between 1-12, day is between 1-31, or 30 or 28 or 29, depending on the month/leap year, and the year is above 0.
		void setDate(int month, int day, int year);

		//Allows modification of the member month, sets it to input
		//Postcondition- Makes sure to assign the int month to dMonth
		void setMonth(int month);
		
		//Same as setMonth() but for int day into int dDay
		void setDay(int day);
		
		//same as setMonth and setDay but for assigning int year to int dYear
		void setYear(int year);

		//Postconditions- makes sure the added days does not exceed the allowable days in a given month, and wraps around to the next month if needed. 
		//Also checks gto make sure the month is a leap year february or not, and correctly wraps to march, but if not, then it just adds the days regularly. 
		//Makes sure to store each new input into the correct variables so they can be used in other functions in the class.
		void calculateNewDate(int dayAmount);

		//Postconditions- returns the number of days in a given month, has if statement to select the correct month and assign the correct number of days,
		//even if that month is a leap year. When this function is called it will simply return the int value of the number of days in the selected month. 
		int getDaysInMonth() const;
		
		//Postcondition- Once the given date is received, this function will be able to calculate the number of days since Jan 1st of that year.
		// It first checks to see whether or not it was a leap year, then adds the correct amount of days of each month preceeding the selected month,
		//  and then the number of days that is the selected date. 
		int getDaysPassed() const;
		
		//Similar to getDaysPassed() but backwords
		//Postcondition- makes sure to return just the int value of the number of days remaining in the year.
		//First it calculates the remaining months of the year and adds the number of days in each month between current month and January, then adds the remaining days in the current month.
		//returns it all so the value of this function when called is just the remaining days in the year.
		int getDaysRemaining() const;
	
		//Postcondition- simply returns the value of the input day, or dDay, can be checked when called.
		int getDay() const;
		
		//Same as get day, simply returns the value of the variable dMonth.
		int getMonth() const;
		
		//Same as getMonth and getDay, retunrs the int value of the variable dYear.
		int getYear() const;

		//Postconditions- Checks to make sure input year is valid, and runs through some if statements to check against the criteria of a leap year. 
		//(From 0) Every 4 years is a leap year, Every 100 years is not a leap year, but every 400 years is a leap year. 
		//Returns true if it is a leap year, returns false if it is not a leap year.
		//Used to determine number of days in February in other functions.
		bool isLeapYear() const;
		
		//When called, prints the dats in the format : dMonth-dDay-dYear
		void printDate() const;

		//Default Constuctor
		dateType(int = 1, int = 1, int = 1900);
	private:
		int dMonth;
		int dDay;
		int dYear;
	};

