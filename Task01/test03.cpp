#include <iostream>
using namespace std;

// base case
//fib(1) --> 0
//fib(2) --> 1

//recursion case
//fib(n)= fib(n - 1) + fib(n - 2)

long long fibonachi(int index) {
	if (index <= 0) {
		return -1;
	}

	if (index <= 2) {
		return index - 1;
	}

	return fibonachi(index - 1) + fibonachi(index - 2);
}

void test(int counter) {
	cout << counter << endl;
	test(++counter);
}

int main() {
	cout << fibonachi(50);
	return 0;
}