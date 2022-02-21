//Created by Laurence Sadler (SirLorrence) 

#include <cstdio>
#include <iostream> // for cin (console in/user input) 

int absoluteValue(int x){
//if(x >= 0) return 1; 
//else return -1;

if(x>= 0) return x;
else return -x;
}

int main(){
//int myNum = -20;
int myNum = 0;
printf("Enter a number: ");

std::cin >> myNum;

printf("The absolue value of %d, is %d.\n", myNum, absoluteValue(myNum));
return 0;

}
