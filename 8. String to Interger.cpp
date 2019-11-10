#include <iostream>
#include <string>

int main() {

	std::string number = "12344 with random string";
	long long out = 0;
	int isNegative = 0;

	for (int i = 0; i < number.length(); i++) {
		
		int Ascii = (int)number[i];
	

		if (Ascii < 57 and Ascii > 48) {
			out = out * 10 + (Ascii - 48)%10;
		}
		else if (Ascii == 45) isNegative = 1;
	}

	if (isNegative == 1) out = -out;

	std::cout << out;

	return 0;
}
