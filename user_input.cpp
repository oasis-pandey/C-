#include <iostream>
int main(){

    int age;
    std::string name;
    std::cout << "What is your age?";
    std::cin >> age;
 
    std::string brother;
    std::cout<<"What is the name of your brother?";
    std::getline(std::cin>>std::ws,brother);

    std::cout << "What is your name ?";
    std::getline(std::cin>> std::ws,name);//used to get input strings for more than 1 word

    std:: cout << "Your name is "<<name<<"\n";
    std::cout << "You are "<<age<<" years old"<<"\n";

    std:: cout <<"Your brother's name is "<< brother<<"\n";

    return 0;
}