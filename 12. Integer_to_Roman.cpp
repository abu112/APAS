#include <iostream>
#include <string>
#include <vector>

int main() {

	std::vector<std::string> Roman_ones{ "","I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
	std::vector<std::string> Roman_tens{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
	std::vector<std::string> Roman_hundreds{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
	std::vector<std::string> Roman_thousand{ "", "M", "MM", "MMM", "MMMM" };
	int num = 123;
	int count = 0;
	std::vector<std::string> toroman;
	std::string output = "";

	while (num > 0) {

		switch (count) {
		case 0:
			toroman.push_back(Roman_ones[num % 10]);
			break;
		case 1:
			toroman.push_back(Roman_tens[num % 10]);
			break;
		case 2:
			toroman.push_back(Roman_hundreds[num % 10]);
			break;
		case 3:
			toroman.push_back(Roman_thousand[num % 10]);
			break;
		default:
			printf("Out Of Index for this program! ");
			break;
		}
		count++;
		num = num / 10;
	}

	int i = toroman.size();
	while (i--) output += toroman[i];

	std::cout <<output;

	return 0;
}
//This Program can be made smaller just by using ones, tens, etc in multiple and sum of their preceding i.e 7 5*1+3= V+III 
