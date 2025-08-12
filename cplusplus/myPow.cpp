/*
Name: Alexis Winn
Title: Power function
*/

#include <iostream>
#include "myPow.hpp"

/* TODO: 
    > make input more efficient
    > make another input that allows .csv files to enable multiple numbers
*/
int main() {
    // Variables
    int multi,base,exp,modulo; 

    // user input -- redo wtf is this bull??
    std::cout<< "Is there a number multiplying the exponent? If not, put '1': ";
    std::cin >> multi;

    std::cout<< "what number is the base of the exponent?: ";
    std::cin >> base;

    std::cout<< "what number is the exponent?: ";
    std::cin >> exp;

    std::cout<< "what is the modulo?: ";
    std::cin >> modulo;
    
    // test: 1*2^{1516} (mod 1517) = 756
    std::cout << "The composite integer is: " << powFunc(multi,base,exp,modulo) << std::endl;
    
    return 0;
};
