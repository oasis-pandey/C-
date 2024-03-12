#include <iostream>
#include <cmath>
int main(){
    int age;
    std::cout << "Enter your age: ";
    std::cin>> age;
    if(age < 18 && age >=0){
        std:: cout << "You are not old enough!";
    }
    else if (age >= 18){
        std::cout<<"Welcome to the site!";
    }
    else if (age <0){
        std::cout << "You have not been born yet!";
    }
    else{
        std::cout << "Enter a valid age!";
    }
     
     return 0;
}