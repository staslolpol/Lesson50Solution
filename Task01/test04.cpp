#include <iostream>
using namespace std;

int sum (int array[], int size) {
	if (size <= 0) {
		return -1;
	}

	//base
	if (size == 1) {
		return array[0];
	}

	//recursion
	size--;
	return array[size] + sum(array, size );
}

void test(int counter) {
	cout << counter << endl;
	test(++counter);
}

int main() {
	int size = 9;
	int array[]{ 1,2,3,4,5,6,7,8,9 };
	cout << sum(array, size);
	return 0;
}