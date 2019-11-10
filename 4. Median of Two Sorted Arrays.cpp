#include <iostream>
#include <vector>

int main() {

	std::vector<int> list1 = { 1, 2,3 ,4, 5 };
	std::vector<int> list2 = { 4, 5,6 ,7, 8 };
	int sum = 0;

	for (int x : list2) list1.push_back(x);
	
	for (int x : list1) sum += x;

	std::cout <<"Average is : "<< sum/list1.size();


	return 0;
}
