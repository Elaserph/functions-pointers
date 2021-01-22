#include<iostream>
using namespace std;

int* ar;
int count = 0, capacity = 0;

void declare_vector(int n) {
	// malloc => memory allocation
	ar = (int*) malloc(n * sizeof(int));
	capacity = n;
}

int get(int i) {
	// return the value at ar[i]
	return *(ar + i);
}

void set(int i, int value) {
	*(ar + i) = value;
}

void resize(int new_size) {
	// allocate new space
	int *b = (int*) malloc(new_size * sizeof(int));
	// copy the contents
	for(int i = 0; i < capacity; i++) {
		*(b+i) = *(ar+i);
	}
	// free the old memory
	free(ar);
	// replace the vector pointer
	ar = b;
	capacity = new_size;
} // O(new_capacity + capacity)

void push(int value) { // O(capacity)
	// insert the value at the end of the vector -> veector's size will grow by 1
	if(count == capacity) {
		// vector is already full
		// cout << "vector is full. resizing" << endl;
		// resize(capacity + 1); // O(n^2)
		resize(capacity*2); // O(n)
	}
	set(count, value);
	count++;
}

int main() {
	// int ar[10]; // declare an array of fixed size
	// I cannot resize the array
	declare_vector(1);
	int n = 50000;
	for(int i = 0; i < n; i++) {
		push(i*i);
	}

	return 1;
}