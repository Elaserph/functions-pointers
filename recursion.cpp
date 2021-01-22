#include <iostream>
using namespace std;

// int fib(int n) {
// 	fib(n-1); // recursion
// }

// recursion -> a function calling itself
// recursion -> self-dependency

bool is_odd(int);

// yes this is recursion
// this is called mutual recursion
bool is_even(int n) {
	if(n == 0) return true;
	return is_odd(n-1);
}

bool is_odd(int n) {
	if(n == 0) return false;
	return is_even(n-1);
}


int main() {
	// cout << fib(10) << endl;
	cout << is_even(10) << endl;
	cout << is_odd(10) << endl;
	return 1;
}


// Which is more powerful (expressiveness - what can solve more problems)
// recursion or iteration?

// a) recursion
// b) iteration
// c) both are same


recursion > iteration
recursion = iteration + DS(at least as powerful as a stack)

iteration with no extra DS = tail_recursion < recursion


iterative solution are usually more efficient in terms of space and memory
