#include<iostream>
class human 
{
    public :

    std::string name;
    std::string occupation;
    int age;
    human(std::string name,std::string occupation,int age)
    {
        this->name=name;
        this->occupation=occupation;
        this->age=age;
    }
    
    void sleep()
    {
        std::cout<<"the person is sleeping \n";
    }
    void eat()
    {
        std::cout<<"the person is eatting \n";
    }
};
int main()
{
    human h1("logesh","student",19);

    std::cout<<h1.name<<"\n";
    std::cout<<h1.occupation<<"\n";
    std::cout<<h1.age<<"\n";
    return 0;
}