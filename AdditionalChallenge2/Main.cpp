#include <iostream>
#include <string>

using namespace std;

int main() {

	int number{ 0 };

	int num1, num2, num3, num4, num5;

	cout << "Enter a five-digit integer: "; // prompt
	cin >> number; // read integer from user

	num1 = number / 10000;
	cout << num1 << "   ";
	//Use the '%' modulus operator to get the remainder afer dividing by 10000
	number = number % 10000;

	num2 = number / 1000;
	cout << num2 << "   ";
	//Use the '%' modulus operator to get the remainder afer dividing by 1000
	number = number % 1000;


	num3 = number / 100;
	cout << num3 << "   ";
	//Use the '%' modulus operator to get the remainder afer dividing by 100
	number = number % 100;

	num4 = number / 10;
	cout << num4 << "   ";
	//Use the '%' modulus operator to get the remainder afer dividing by 10
	number = number % 10;
	num5 = number;

	cout << number << endl;

	cout << num5 << " " << num4 << " " << num3 << " " << num2 << " " << num1 << endl;

	return 0;
}