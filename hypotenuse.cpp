#include<iostream>
#include<cmath>
int main()
{
    double a,b,c;
    std::cout<<"enter the value of one side of the triangle ";
    std::cin>>a;
    std::cout<<"enter the value of other side of the triangle ";
    std::cin>>b;
    int x=pow(a,2);
    int y=pow(b,2);
    int z=x+y;
    c=sqrt(z);
    std::cout<<"the hypotenuse of the triangle is "<<c<<"\n";


    return 0;
}