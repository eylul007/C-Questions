#include <iostream>
using namespace std;

int main() {
	int arr[50];
	int size;
	int total = 0;
	int counter = 0;
	int average;
	cout << "Enter size: " << endl;
	cin >> size;

	cout << "Enter array: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++) {
		total = total + arr[i];
	}

	average = total / size;

	for (int i = 0; i < size; i++) {
		if (average > arr[i]) counter++;
	}

	cout << endl << "Average: " << average << " # of below average: " << counter;

	return 0;
}