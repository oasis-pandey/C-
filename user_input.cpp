#include <iostream>
int main(){

    int age;
    std::string name;
    std::cout << "What is your age?";
    std::cin >> age;

    std::cout << "What is your name ?";
    std::cin>>name;
    std:: cout << "Your name is "<<name<<"\n";
    std::cout << "You are "<<age<<" years old"<<"\n";
    return 0;
}