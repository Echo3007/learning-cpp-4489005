// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a,b = 5; //these are globla variables, and their space in memory is managed statically by the compiler

int main(){
    bool my_flag; //local variable
    a = 7;
    my_flag = false;
    std::cout <<"The value of a is: "<<a << std::endl;
    std::cout <<"The value of b is: "<<b << std::endl;
    std::cout << "The value of my_flag is: " << my_flag << std::endl;
    my_flag = true;
    std::cout << "The sum of a + b is: " << a+b<< std::endl;
    std::cout << "The sum of b-a is: " << b-a<< std::endl;
    std::cout<<"The new value of y_fag is: "<< my_flag<< std::endl;
    
    std::cout << std::endl << std::endl;

    unsigned int positive;
    positive = b-a; //will print out 2's complement of the -2 representation in binary -> 2^32 - 2
    std::cout << "The sum of b-a (unsigned) is: " << positive << std::endl;



    return (0);
}
