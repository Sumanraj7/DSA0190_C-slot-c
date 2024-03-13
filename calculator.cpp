#include<iostream>
#include<cmath>
int main()
{
    
    int a,b,c;
   
    std::cout<<"enter 1 for performing addition \n ";
    std::cout<<"enter 2 for performing subtraction \n ";
    std::cout<<"enter 3 for performing multiplication \n ";
    std::cout<<"enter 4 for performing division \n ";
    std::cout<<"enter 5 for performing exponential  \n ";
     std::cout<<"enter your choice \n ";
    std::cin>>a;
    switch(a)
    {
        case 1:
        std::cout<<"enter an number ";
        std::cin>>b;
        std::cout<<"enter an number ";
        std::cin>>c;
        std::cout<<"the sum of the given number is "<<b+c<<"\n";
        break;
        case 2:
        std::cout<<"enter an number ";
        std::cin>>b;
        std::cout<<"enter an number ";
        std::cin>>c;
        std::cout<<"the difference of the given number is "<<b-c<<"\n";
        break;
       case 3:
        std::cout<<"enter an number ";
        std::cin>>b;
        std::cout<<"enter an number ";
        std::cin>>c;
        std::cout<<"the product of the given number is "<<b*c<<"\n";
        break;
       case 4:
        std::cout<<"enter an number ";
        std::cin>>b;
        std::cout<<"enter an number ";
        std::cin>>c;
        std::cout<<"the quotient of the given number is "<<b/c<<"\n";
        break;
       case 5:
        std::cout<<"enter an number ";
        std::cin>>b;
        std::cout<<"enter an number ";
        std::cin>>c;
        std::cout<<"the exonent  of the given number is "<<pow(b,c)<<"\n";
        break;
        default:
        std::cout<<"enter an number between  1 to 5 ";
        break;


    }
}