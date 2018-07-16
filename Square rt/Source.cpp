#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	int sqr;
	std:cin >> sqr;

	srand((unsigned int)time(NULL));
	for (int x = 1; x <= 100; x++) // Produces up to 100 random numebers
	{
		cout << (rand() % 9) << endl; // In this example, it's asking the square root of 9

		if (x * x == 9) { // The sequence in the generated numbers gets flagged if it is the square root
			cout << "YES" << endl;
		}
		else;
		cout << "NOPE" << endl; // The app will spit out NOPE for any generation that isnt the square root of the number provided above
	}
}