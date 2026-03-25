#include "util.h"

int main() {
	srand(time(NULL));
	int array[DEFAUT_SIZE];
	int size = 20;

	cout << "Input size: ";
	cin >> size;

	init_rnd(array, size, 0, 10);


	return 0;
}