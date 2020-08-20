#include <iostream>
using namespace std;

int main() {
	int arr1[50];
	int size1;

	int arr2[50];
	int size2;

	int arr3[100];

	int i;
	int j;

	cout << "Enter size: " << endl;
	cin >> size1;

	cout << "Enter first array: " << endl;
	for (i = 0; i < size1; i++) {
		cin >> arr1[i];
	}

	cout << "Enter size: " << endl;
	cin >> size2;

	cout << "Enter second array: " << endl;
	for (i = 0; i < size2; i++) {
		cin >> arr2[i];
	}

	for (i = 0; i < size1; i++) {
		arr3[i] = arr1[i];
	}

	for (i = size1,j=0; i < (size1 + size2); i++,j++) {
		arr3[i] = arr2[j];
	}

	cout << endl;
	for (i = 0; i < (size1+size2); i++) {
		cout << arr3[i];
	}

	return 0;
}