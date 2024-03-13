#include<iostream>
#include<stdexcept>
int safe(int n,int d)
{
    if(d == 0)
    {
        throw std::runtime_error("can't divide by zero ");

    }
    return n/d;
}
int main()
{
    int n,d;
    std::cout<<"enter the numerator \n";
    std::cin>>n;
    std::cout<<"enter the denominator \n";
    std::cin>>d;
    try
    {
    int res=safe(n,d);
    std::cout<<res<<"\n";
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }


}