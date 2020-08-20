#include <iostream>
#include <string.h>
using namespace std;  

int main() {   //            QUESTION2 FILE -VISUAL STUDIO HAS PROBLEM WITH GETS BUT WORKS CORRECTLY IN OTHER COMPUTERS
	char first[50];
	char second[50];
	int i, j;

	cout << "Enter the string: ";
	gets_s(first);
	
	cout<<endl<<strlen(first)<<endl;

	for (i = 0, j = (strlen(first) - 1); i <strlen(first); i++, j--) {
		second[i] = first[j];
	}
	
	puts(first);
	puts(second);

	if (strcmp(first, second) == 0) {
		cout << endl << "Palindrome.";
	}

	else cout << endl << "Not palindrome.";

	return 0;
}