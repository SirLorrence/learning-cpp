#include <iostream>

int main(){
	unsigned num = 20, num2 = 45;
	int num3 = 20;

	std::cout << "Reg: " << num2 - num << std::endl;
	std::cout << "Wrap: " << num - num2 << std::endl;

	std::cout << num3 - num << std::endl;
	return 0;
}