#include <iostream>
#include <string>

using namespace std;

void CalculateCollatz(int n);

int main() {


	CalculateCollatz(42);

	return 0;
}


void CalculateCollatz(int n) {

	int count{ 0 };
	int temp = n;
	while (n != 1)
	{
		// If N is even divide it by 2.
		if (n % 2 == 0) {
			n /= 2;
			count++;
			cout << n << " ";
			// If N is odd, multiply by 3 and add 1
		} else {
			n = (3 * n) + 1;
			count++;
			cout << n << " ";
		}
	}

	cout << "\n" << "The number of steps for the number " << temp << " is " << count << endl;
}