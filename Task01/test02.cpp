#include <iostream>
using namespace std;

long long factorial(int number) {
	if (number < 0) {
		return -1;
	} 

	if (number <= 1) {
		return 1;
	}

	return number * factorial(number - 1);
}

void test(int counter) {
	cout << counter << endl;
	test(++counter);
}

int main() {
	cout << factorial(5);
	return 0;
}