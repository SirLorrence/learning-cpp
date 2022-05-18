//Created by Laurence Sadler (SirLorrence @ GitHub) 

#include<iostream>

int main(){

// 	std::cout << "Hello, World"  << std::endl;

int n1 = 0, n2 = 0;

std::cout << "Enter to Numbers: " << std::endl;
std::cin >> n1 >> n2;
// std::cout<< "The Sum of thoughs numbers are: " << n1 + n2 << std::endl;
std::cout <<"The product of those numbers are: "<< n1 * n2<<std::endl;

//This shouldn't work because you're ending the statement line with the only ostream. 
//The other lines needs an ostream;

// std::cout << "The sum of " << n1;
//          << " and " << n2;
//          << " is " << n1 + n2 << std::endl;

// printf("Hello World");

// std::cout <<"Hello" /* who would do this */ << std::endl;
return 0;
}