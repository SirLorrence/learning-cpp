#include "io.h"
#include <iostream>

int readNumber (){
    int input{};
    std::cout << "Enter a number: ";
    std::cin >> input;
    std::cout<<std::endl;
    return input;
}

void writeAnswer(int x){
    std::cout << "You have entered: " << x; 
}