#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main() {

	std::vector<std::string> lst1; //Use can use array instead of vector but I like it more.

	//lst1 = {"flower", "flow", "flight"};
	lst1 = { "dog", "racecar", "car" };
	char quot= '"';
	std::string common = "";
	
	int t1 = lst1[0].length(); int t2 = lst1[1].length(); //This has been done to reduce the time complexity, instead of using for loop.

	int min = fmin(lst1[2].length(), fmin(t1, t2));

	for (int i = 0; i < min; ++i) {
		if (lst1[0][i] == lst1[1][i] and lst1[0][i] == lst1[2][i]) common += lst1[0][i];
		else break;
	}

	std::cout << quot << common << quot;
	//Don't use printf();
	return 0;
}
