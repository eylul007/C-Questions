#include <iostream>
using namespace std;

int main() {
	int year, century;
	
	cout << "Enter year: ";
	cin >> year;

	century = ((year - 1) / 100) + 1;

	cout << endl << century;

	return 0;
}