#include <iostream>

int main(){

	// int valToAdd = 50;
	// int sum = 0;
	// while (valToAdd <= 100){
	// 	sum += valToAdd;
	// 	++valToAdd;
	// }

	// std::cout << "The sum of the numbers from 50 to 100 is "<< sum<<std::endl;

	// int numCount = 10;
	// while (numCount != -1){
	// 	std::cout << numCount << std::endl;
	// 	--numCount;
	// }


	// int sumVal =0; 

	// for (int i = -100; i <= 100; ++i){
	// 	sumVal += i;
	// }
	// std::cout << sumVal << std::endl;


	// int sum = 0, val =0;
	// while(std::cin >> val)
	// 	sum += val;
	// std::cout << "The sum is "<<sum<<std::endl;	

	int currentValue = 0 , value = 0;

	if(std::cin >> currentValue){
		int count = 1;
		while(std::cin >> value){
			if(currentValue == value)
				++count;
			else{
				std::cout << currentValue << " occurs "<< count << " times" << std::endl;
				currentValue = value;
				count = 1;
			}
		}

		std::cout << currentValue << " occurs "<< count << " times" << std::endl;
				currentValue = value;

	}
	
	return 0;
}