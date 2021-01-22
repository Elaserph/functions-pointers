#include <iostream>
using namespace std;

// Specific to C++

int main() {
	int ar[10] = {3, 4, 1, 0, 9, 3, 1, 2}; // Ms./Mr. computer please allocate 4*10 bytes for me
	// and take the location of the first byte and save that pointer to ar
	// int* ar = &(first_value); // where first value is the first value of these allocated 40 bytes

	// cout << ar << endl;
	// cout << &(ar[0]) << endl;
	// cout << ar[0] << endl;
	// cout << ar + 1 << endl;
	// cout << *(ar + 1) << endl;

	for(int i = 0; i < 10; i++) {
		cout << i[ar] << endl;
		// cout << ar[i] << endl;
		// cout << *(ar + i) << endl;
	}

	// a[3] => *(a+3) => *(3+a) => 3[a]

	// arrays is just syntactic-sugar => just some another syntax to represent pointers


	return 1;
}