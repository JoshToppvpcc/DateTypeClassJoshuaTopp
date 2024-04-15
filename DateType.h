#pragma once
class dateType
	{
	public:
		//set member variables dMonth, dDay, and dYear
		void setDate(int month, int day, int year);


		void setMonth(int month);
		//set member variable dMonth

		void setDay(int day);
		//set member variable dDay

		void setYear(int year);
		//set member variable dYear

		void calculateNewDate(int dayAmount);
		//calculate new date by adding a fixed amount of days to the date

		int getDaysInMonth() const;
		//return number of days in dMonth

		int getDaysPassed() const;
		//return number of days passed in the year

		int getDaysRemaining() const;
		//return number of days remaining in the year

		int getDay() const;
		//return dDay

		int getMonth() const;
		//return dMonth

		int getYear() const;
		//return dYear

		bool isLeapYear() const;
		//check if dYear is a leap year

		void printDate() const;
		//print the date in the format: dMonth-dDay-dYear

		dateType(int = 1, int = 1, int = 1900);
		//default constructor
	private:
		int dMonth;
		int dDay;
		int dYear;
	};

