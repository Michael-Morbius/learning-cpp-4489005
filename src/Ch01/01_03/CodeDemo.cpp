// Learning C++ 
// Challenge 01_03
// Console Interaction, by Michael Morbius 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "What is your name "; std::cin >> str;
    std::cout << "Hii there, "; std::cout << str; std::cout << "!";

    std::cout << std::endl << std::endl;
    return (0);
}
