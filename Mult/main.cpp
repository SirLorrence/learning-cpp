#include "add.h"
#include <iostream>

// int add (int x, int y); 
int GetInput();

int main(){
    // std::cout << "5+5= "<<add(5,5)<<std::endl;
    int x{GetInput()};
    int y{GetInput()};
    std::cout << x << " + " << y << " = "<< add(x,y);
    return 0;

}