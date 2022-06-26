#include <iostream> 
#include <iomanip>

int main(){
    // std::cout<< "int: " << sizeof(int)<<std::endl;
    // std::cout<< "unsigned: "<<sizeof(u_int)<<std::endl;
    double x {9876543.21};
    std::cout<<std::setprecision(16);
    std::cout<<x <<std::endl;
}