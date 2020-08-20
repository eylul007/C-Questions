#include <iostream>
using namespace std;

int main() {
	int day, month, year, hours;

	cout << "Enter your birthday: " << endl;
	cout << "Day: "<<endl;
	cin >> day;
	cout << "Month: " << endl;
	cin >> month;
	cout << "Year: " << endl;
	cin >> year;

	int total_days;
	int current_day, current_month, current_year;
	cout << "Enter current date: " << endl;
	cout << "Day: " << endl;
	cin >> current_day;
	cout << "Month: " << endl;
	cin >> current_month;
	cout << "Year: " << endl;
	cin >> current_year;

	if ((current_month < month)|| (current_month == month)) {
		if (current_day < day) {
			total_days = (current_day + (30 - day)) + ((current_month + ((12 - month) - 1)) * 30) + (((current_year - year) - 1) * 365);
		}
		else {
			total_days = (current_day - day) + ((current_month + (12 - month)) * 30) + (((current_year - year) - 1) * 365);
		}
	}

	else
	{
		if (current_day < day) {
			total_days = (current_day + (30 - day)) + ((current_month - month) * 30) + ((current_year - year) * 365);
		}
		else {
			total_days = (current_day - day) + ((current_month - month) * 30) + ((current_year - year) * 365);
		}
	}

	hours = total_days * 24;

	cout << endl << "Total hours: " << hours;

	return 0;
}