#include <iostream>

using namespace std;


// Print a diamond pattern
int main() {

	// Size of diamond
	int size{ 9 };
	int space{ 1 };

	space = size - 1;


	for (int i = 1; i < size; i+=2) {


		for (int j = size; j >= i; j -= 2) {
			cout << " ";
		}

		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;

	}

	for (int i = 1; i <= size; i += 2) {


		for (int j = 1; j <= i; j += 2) {
			cout << " ";
		}

		for (int k = size; k >= i; k--) {
			cout << "*";
		}
		cout << endl;

	}




	return 0;
}