// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

//standard library that contains objects and functions to print text to the screen and receive text from screens. They do not enter with ;
// #include <iostream>

// int main(){
//     std::cout<<"Hello Angela" << std::endl;
//     std::cout<< std::endl<<std::endl;
//     return(0);
// }


#include <iostream>
#include <string>

// //my solution

// int main(){
//     std::string str;
//     std::cout << "Hello, enter your name:";
//     std::cin >> str;
//     std::cout << "Welcome," << str;

//     std::cout << std::endl<<std::endl;
//     return(0);
// }

//Courses solution

// int main(){
//     std::string str;
//     std::cout <<"Hello, enter your name:" << std::flush; //ensures output is fully sent before receiving user input
//     std::cin >> str;
//     std::cout << "Nice to meet you, " <<str <<"!" <<std::endl;

//     std::cout<<std::endl <<std::endl;
//     return(0);
// }

int main(){
    std::cout<<"Hello there!" <<std::endl;

    std::cout<<std::endl << std::endl;
    return(0);
}