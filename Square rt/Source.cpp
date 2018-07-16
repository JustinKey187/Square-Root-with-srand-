#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	for (int x = 1; x <= 100; x++)
	{
		cout << (rand() % 9) << endl;

		if (x * x == 9) {
			cout << "YES" << endl;
		}
		else;
		cout << "NOPE" << endl;
	}
}