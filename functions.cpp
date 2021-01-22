#include <iostream>
using namespace std;

// a function will NEVER return anything if it always crashes
// type of a function which returns nothing is called the ERR type
int foo() {
	// somehow crash the code
	// or be stuck in an infinite loop
	while(1);
	return 10;
}

// void is a type -> 1  -> void type has only 1 value -> void
// int is a type -> 4-byte signed integer {-2^31 .. (2^31)-1}  |int| = 2^32
// bool is a type -> {0, 1}  |bool| = 2

// extract  this code out into a separate function
float compound_interest(float rate_of_interest, float time, float principle) {
	float rp1 = 1 + rate_of_interest;
	float result = 1;
	for(int i = 0; i < time; i++) {
		result *= rp1;
	}
	// result = rp1^time
	c_interest = principle * (result - 1);
	return c_interest;
}

int main() {
	// compund interest
	float principle, time, rate_of_interest;
	cin >> principle >> time >> rate_of_interest;
	// call / invoke this function
	// float c_interest = compound_interest(time, rate_of_interest, principle);
	// work? -> yes it will run
	// give us the right answer? // No
	float c_interest = compound_interest(rate_of_interest, time, principle);
	float c_interest = compound_interest(rate_of_interest, time, principle);
	float c_interest = compound_interest(rate_of_interest, time, principle);
	float c_interest = compound_interest(rate_of_interest, time, principle);
	while(true)
		float c_interest = compound_interest(rate_of_interest, time, principle);

	// add a and b
	// and print the result
	return 0;
}