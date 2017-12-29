#include <iostream>
#include <string>
#include <random>

using namespace std;

int RandomNumberGenerator();

int main() {

	int score{ 0 };
	int p1{ 12 };
	int p2{ 12 };
	bool win{ false };


	while (!win) {

		score = 0;
		score = RandomNumberGenerator() + RandomNumberGenerator() + RandomNumberGenerator();
		cout << "Player one has thrown :" << score << endl;

		if (score == 11) {
			p1++;
			p2--;
		}

		score = 0;
		score = RandomNumberGenerator() + RandomNumberGenerator() + RandomNumberGenerator();
		cout << "Player two has thrown :" << score << endl;
		if (score == 14) {
			p1--;
			p2++;
		}


		cout << "Player scores are: " << "\tPlayer one: " << p1 << "\tPlayer two:" << p2 << endl;

		if (p1 == 0 || p2 == 0) 
			win = true;

	} 

	return 0;
}


// Function to generate a random number
int RandomNumberGenerator() {

	std::random_device device;
	std::mt19937 generator(device());
	std::uniform_int_distribution<int> distribution(1, 6);
	int outcome = distribution(generator);

	return outcome;
}
