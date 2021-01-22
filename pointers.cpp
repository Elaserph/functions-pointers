// lower level languages

// C++ low level or high level?
// C is low level, C++ is high level
// back in 1980 even C was high level

// what is a mordern language

// C++ -> pointers
// if the language does not garbage collection, then it will allow you to mess with pointers


// Java / Python / JS / Ruby -> do not have pointers
// internally they use pointers, but as a programmer you're not allowed to mess with the pointers
// Garbage collected language

// in the RAM somewhere
// allocate a space of 4 bytes
// another 4 bytes allocated in the RAM somewhere


#include <iostream>
using namespace std;

int main() {
	int a = 10;
	long b = 20;
	cout << a << endl; // 10
	cout << sizeof(a) << endl; // 4

	cout << b << endl; // 20
	cout << sizeof(b) << endl; // 8

	// if you want to find the memory address of a value
	// where in the RAM this value is being stored
	// address

	cout << a << " is located at memory location " << &a << endl;
	cout << sizeof(&a) << endl; // 8
	cout << b << " is located at memory location " << &b << endl;
	cout << sizeof(&b) << endl; // 8

	// whenever you have a pointer -> it has a fixed size
	// I'm on a 64-bit computer
	// that the memory channels have a bandwidth of 64 bits
	// every location in my RAM is given a unique 64-bit address


	// 2004s -> 64 bit computer just came into the picture
	// 256 MB
	// windows xp sp3 32 bit
	// 64 bit
	// 32 bit windows on a system with 20GB RAM
	// wont be able to access all the RAM
	// every location is given a unique 32 bit address
	// number of 32 bit addresses = 2^32
	// how many bytes can you uniquely address? 2^32 bytes
	// 4GB of RAM


	// storing an address on a 64 bit computer will take me 64 bits (8 bytes)
	int* x = &a; // x is an integer pointer
	// int* = int pointer
	// &value = address of value
	// int& = int reference

	// x now stores the address of memory where the value of a is saved
	// sizeof(x) => 8 bytes

	// 2384 -> 10
	// x => 2385
	cout << "value of a = " << a << endl; // 10
	cout << "value of x = " << x << endl; // 10

	x = x + 1;
	cout << "value of a = " << a << endl; // 10
	cout << "value of x = " << x << endl; // 10

	// Dereferencing a pointer
	// T* pointer;
	// pointer  => value of this will be an adress
	// *pointer => look at what is stored at that address
	// *& => inverse operators
	// * => de-referencing (finding the value at the address)
	// & => finding the adress

	a = 10;
	cout << a << endl; // 10
	cout << &a << endl; // adress of a
	cout << *(&a) << endl; // value at address of a => 10

	cout << a << endl; // 10
	x = &a; // x is a pointer pointing to the address of a
	*x = 20; // get the value of x => dereference this. set the value at that location to 20
	cout << a << endl; // 10


	int* z = &a; // declare a int pointer which points to the address of a
	// pointers to pointers
	z = &a; // z = 1000
	int** y = &z; // y is now a pointer pointing to the address where z is saved
	cout << a << endl;
	cout << *z << endl;
	cout << z << endl;
	cout << **y << endl;
	cout << y << endl;


	// int******************** wtf = &(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&a)))))))))))))))))));


	// int a = 1;
	// int* pointer_to_a = &a;
	// int** pointer_to_pointer_to_a = &pointer_to_a; // &&a


	int foo = 10;
	char* spam; // char pointer is 8 bytes
	spam = (char*) &foo;

	// strong typing => there might be some sort of a bug

	return 1;
}

/*

1000 -> 10           a
1004 -> 1000         z
1012 -> 1004         y
*/
