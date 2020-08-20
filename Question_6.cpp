#include <iostream>
using namespace std;
#include "Sq.h"

int main() {
	int size;
	cout << "Enter size: " << endl;
	cin >> size;

	int* arr;
	arr = new int[size];

	cout << "Enter array: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	Square_array(arr,size);

	cout << endl;
	for (int i = 0; i < size; i++) {
		cout <<" "<< arr[i];
	}

	delete[] arr;

	return 0;
}