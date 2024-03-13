#include<iostream>

int main()
{
    std::string a;
    int b;
    std::cout<<"Enter your age  \n";
    std::cin>>b;
   std::cout<<"enter  your name \n";
   std::getline(std::cin >> std::ws ,a);
   std::cout<<"hello "<<a<<"\nyour age is "<<b;
   return 0;
}