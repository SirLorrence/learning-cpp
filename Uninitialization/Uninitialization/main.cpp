//
//  main.cpp
//  Uninitialization
//
//  Created by Laurence Sadler on 4/14/22.
//

#include <iostream>


int main() {
    
    int x; // uninitialized variable
    std::cout << x; // this should return the objects location in memory
    return 0;
}
