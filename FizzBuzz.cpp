#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	cout << "Hello! Welcome to FizzBuzz. Please enter a value to count up to:\n";
	int z;
	cin >> z;
	if (z > 0) {
		cout << "\n";

		for (int i = 1; i <= z; i++) {
			if (i % 3 == 0) {
				cout << "Fizz!\n";
			}
			else if (i % 5 == 0) {
				cout << "Buzz!\n";
				i++;
			}
			else if (i % 3 == 0 && i % 5 == 0) {
				cout << "FizzBuzz!\n";
			}
			else {
				cout << i << endl;
			}
		}
	}
	cin.get();
}

