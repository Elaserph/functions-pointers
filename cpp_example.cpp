#include <iostream>
using namespace std;

// function declaration
// function deifnition

void foo(); // declaration

int main() {
	foo();
	return 1;
}

void foo() { // definition
	cout << "Hello, World!" << endl;
}