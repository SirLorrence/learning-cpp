//
//  main.cpp
//  BasicIntegerProgram
//
//  Created by Laurence Sadler on 4/19/22.
//

#include <iostream>

int getInputFromUser(){
    std::cout << "Input Number: ";
    int input{};
    std::cin >> input;
    std::cout<<std::endl;
    return input;
}

int doubleNumber(int x){
    return x * 2;
}

int main() {
    
    int num1{getInputFromUser()};
    
    std::cout<< "Double the number "<< num1 << " is " << doubleNumber(num1)<< "\n";
//    int num2{getInputFromUser()};
//
//
//    std::cout << num1 << " + " << num2 << " = " << num1 + num2<< std::endl;
//    std::cout << num1 << " - " << num2 << " = " << num1 - num2<<std::endl;
    
    
    
    return 0;
}
