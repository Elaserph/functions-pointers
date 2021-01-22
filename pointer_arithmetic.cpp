#include <iostream>
using namespace std;

int main() {
	long a;
	long *p = &a;
	cout << p << endl;
	p++;
	cout << p << endl;

	return 0;
}

// a = 10, b = 11, c = 12, d = 13, e = 14, f = 15

// 0x7ffc69c824a0
// 0x7ffc69c8249c
// --------------
// 00000000000004
