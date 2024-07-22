// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGTH 4 //macro variable, macro variables have no scope

// recommended alternative to macros below is declaring AGE_LENGTH as a constant local variable in the main function
int main(){
    //int age[4]; //4 is the capacity of the array
    
    const size_t AGE_LENGTH = 4; //size_t is a more appropriate type for sizes
    int age[AGE_LENGTH];

    float temperature[]= {31.5,32.7,38.9}; //this applies an implicit convertion, a type casting


    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "Age_Arary has  "<< AGE_LENGTH<< " elements" << std::endl;
    std::cout << "Age[0] is: "<< age[0] << std::endl;
    std::cout << "Age[1] is: "<< age[1] << std::endl;
    std::cout << "Age[2] is: "<< age[2] << std::endl;
    std::cout << "Age[3] is: "<< age[3] << std::endl;

    std::cout << std::endl << std::endl;
    std::cout <<"Temperature[0] is: "<< temperature[0] << std::endl;
    std::cout <<"Temperature[1] is: "<< temperature[1] << std::endl;
    std::cout <<"Temperature[2] is: "<< temperature[2] << std::endl;



    std::cout << std::endl << std::endl;
    return (0);
}
