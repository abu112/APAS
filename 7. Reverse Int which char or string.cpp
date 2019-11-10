#include <iostream>

int main() {

	int i = 123456;
	long int out = 0;
  
	while (i != 0) {
		out = out * 10 + i%10;
		i = (int)i / 10;
	}

	std::cout << out;

	return 0;
}
//This program fails if you put 0123456 Try fixing it, its easy;
