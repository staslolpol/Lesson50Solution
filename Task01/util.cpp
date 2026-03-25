#include "util.h"


void print(string s) {
	cout << s;
}

void init_rnd(int array[], int length, int a, int b) {
	if (a > b) {
		int temp = b;
		b = a;
		a = temp;
	}

	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (b - a + 1);
	}

}

void user_init(int array[], int lenght) {
	cout << "Input your array elements: ";
	for (int index = 0; index < lenght; index++)
	{
		cout << "array[" << index + 1 << ']';
		cin >> array[index];
	}
}

string convert(int array[], int lenght) {
	string s = "" + to_string(array[0]);
	for (int index = 0; index < lenght; index++)
	{
		s += " " + to_string(array[index]);
	}

	return s;
}

string get_time(long long start, long long finish) {
	if (start > finish) {
		int t = start;
		start = finish;
		finish = t;
	}
	string result = "";

	long long time = finish - start;

	result += to_string(time / 3600);

	result += " : " + to_string((time % 3600) / 60);

	result += " : " + to_string(time % 60);

	return result;
}