	#include <iostream>
  #include <cmath>
  
  int main()
  {
  int maxArea = 0;
	
	std::vector<int> arry{1, 8, 6, 2, 5, 4, 8, 3, 7};

	for (int i = 0; i < arry.size(); i++) {
		for (int j = i + 1; j < arry.size(); j++) {
			maxArea = fmax(maxArea, fmin(arry[i], arry[j]) * (j - i));
		}
	}

	std::cout << maxArea;
  
 return 0;
 }
