#include<iostream>
using namespace std;

int y;

int foo(int x) {
	x = x * 2;
	return x;
}
// foo(x) = 2x
// Mathematical -> it takes some input and gives some output  -> pure function
// because it does NOT effect the outside environment


int spam(int x) {
	x = y * 2; // read only access to y
	return x;
}
// pure, but much more difficult to analyze
// because it is accessing a global state


int egg(int x) {
	y = y * 2; // modifying the outer y
	return x;
}
// impure -> if and only if it changes the global state


int main() {
	return 1;
}


Pure
- easy to analyze
- might waste memory/time

impure
- difficult to analyze and debug
- might save memory



// doubles the values inside a vector

vector<int> v;

void impure_double() {
	for(int i = 0; i < v.size(); i++) {
		v[i] *= 2;
	}
}


vector<int> pure_double(vector<int> v) { // copied -> copy constructor
	vector<int> result;
	for(int i = 0; i < v.size(); i++) {
		result.push(v[i] * 2);
	}
	return result;
}

int main() {
	for(i = 0; i < 10; i++) {
		v.push(i);
	}
	impure_double(); // 2x
	impure_double(); // 4x
	impure_double(); // 8x

	vector<int> a1 = pure_double(v);
	vector<int> a2 = pure_double(a1);
	vector<int> a3 = pure_double(a2);

}