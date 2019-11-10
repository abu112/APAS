#include <iostream>

int main() {

	int i = 12321;
	int j = i;
	long int out = 0;

	while (i != 0) {
		out = out * 10 + i % 10;
		i = (int)i / 10;
	}

	if (out == j) std::cout << "Palindrome";
	else "Not a Palindrome";

	return 0;
}
