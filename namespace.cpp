#include <iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
int main(){
int x=3;
std::cout << x<<"\n";
std::cout << first::x<<"\n"; //first namespace
std::cout << second::x<<"\n"; //second namespace

}
//namespace allows to use a single variable to store diff value without creating variable conflict.