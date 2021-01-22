#include <iostream>
using namespace std;

int main() {
	// unsigned long a = 3 * (1ul<<32) + 10; // 8 bytes
	// unsigned long* pointer_a = &a;
	// unsigned int* pointer_b = (unsigned int*) &a;
	// cout << *pointer_a << endl;
	// cout << pointer_a << endl;
	// cout << *pointer_b << endl;
	// cout << pointer_b << endl;
	// cout << *(pointer_b+1) << endl;
                  //   1------12------23------34------4
	              //     10       3       4       20
	unsigned int a = 0b00001010000000110000010000010100;
	cout << a << endl;
	unsigned char* p = (unsigned char*) &a;
	for(int i = 0; i < 4; i++) {
		cout << (int) *p << endl;
		p++;
	}
	return 1;
}


// 12884901888 = 3* 2^ 32
// 4 bytes                          4bytes
// 00000000000000000000000000000011 00000000000000000000000000001010
//                            -------------32------------
//                                                                 ^^
// ^^
// endian-ness
// right vs left endian