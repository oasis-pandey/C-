#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout<<"Enter the first side ";
    std::cin>> a;

    std::cout<<"Enter the second side ";
    std::cin>> b;
     
    c = sqrt(pow(a,2)+pow(b,2));
    std::cout<< "The third side is: " << c;
     
    return 0;
}