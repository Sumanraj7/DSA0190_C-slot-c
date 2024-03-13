#include<iostream>
class Student{
    private:
    std::string name="logesh";
    public:
    std::string get()
    {
        return name;
    }
    void set(std::string name)
    {
        this-> name=name ;
    }
};
int main()
{
    Student s1;
    s1.set("hello");
    std::cout<<s1.get();
    return 0;
}