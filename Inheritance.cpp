#include<iostream>
class Animal
{
    public:
    bool alive=true;
    void eat()
    {
        std::cout<<"the animal is eating \n";
    }
};
class Dog : public Animal{
    public:
    std::string breed ;
    Dog(std::string breed){
        this->breed=breed;
    }
};
int main()
{
    Dog d1("german sheperad");
    std::cout<<d1.alive<<"\n";
    std::cout<<d1.breed<<"\n";
    return 0;
}