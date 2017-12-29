#include <iostream>
#include <string>
#include <random>

using namespace std;


float RandomNumberGenerator();

int main() {

	int cashPot{ 0 };
	int targetGoal{ 0 };
	int stake{ 0 };
	int bets{ 0 };
	int numberGames{ 0 };
	int wins{ 0 };
	char ans{ 'y' };

	do {
		numberGames++;
		cout << "How much money is in your pot?: ";
		cin >> cashPot;

		cout << "\nWhat is your target goal?: ";
		cin >> targetGoal;

		cout << "\nWhat is the stake?: ";
		cin >> stake;

		while (cashPot > 0 && cashPot < targetGoal) {

			if (RandomNumberGenerator() < 0.5f) {
				cashPot++;
			}
			else {
				cashPot--;
			}
			cout << "cash: " << cashPot << endl;
			bets++;
		}

		if (cashPot == targetGoal) {
			wins++;
		}

		cout << "Do you want to play again ? y/n: ";
		cin >> ans;
		cout << endl;

	} while (ans == 'y');

	cout << "The total number of bets: " << bets << endl;
	cout << "The total number of wins: " << wins << endl;
	cout << "Win percentage: " << (100 * wins / numberGames) << endl;

	return 0;
}

// Function to generate a random number
float RandomNumberGenerator() {

	std::random_device device;
	std::mt19937 generator(device());
	std::uniform_real_distribution<> distribution(0, 1);
	float outcome = distribution(generator);

	cout << "Outcome " << outcome << " ";

	return outcome;
}