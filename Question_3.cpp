#include <iostream>
using namespace std;

int main() {
	int arr[50];
	int size;
	cout << "Enter size: " << endl;
	cin >> size;

	cout << "Enter array: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	int* multi_arrr;
	multi_arrr = new int[(size-1)];

	for (int i = 0; i < (size-1); i++) {
		multi_arrr[i] = arr[i] * arr[i + 1];
	}

	int max = multi_arrr[0];
	int max_index=0;

	for (int i = 0; i < (size - 1); i++) {
		if (max < multi_arrr[i]) {
			max = multi_arrr[i];
			max_index = i;
		}
	}

	cout << endl << "Pair: " << arr[max_index] << " " << arr[(max_index + 1)];

	delete[] multi_arrr;

	return 0;
}