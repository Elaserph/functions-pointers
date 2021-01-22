int a; //a1 // global variable -> outermost scope A, B, C, D, E, F, Z

// C++ / Java - esque variable scoping
// x-esque means "in the spirit of x"
// Z

void foo() {
	int b; // ABCDE
	bool a; //a2 // variable shadowing
	// A
	for() {
		// B
		int c; // BCD
		if() {
			// C
		} else {
			// D
		}
	}

	while() {
		// E
	}
}

void main() {
	// F
}