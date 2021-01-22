// matrix manipulation
// libA.cpp
namespace -> A
	print(matrix) -> prints a 2d matrix

// doing math stuff
// libB.cpp
namespace -> B
	print(polymoial as an array) -> prettified mathetmatical notation of that polynpmial


// main.cpp

#include "libA.cpp"
#include "libB.cpp"


int main() {
	A::print();
	B::print();
}


// namespaces allow us to avoid name collision by scoping names

using namespace X;

cout << "";
X::cout << "";

std::cin >> a;
std::vector