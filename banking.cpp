#include<iostream>

int deposit(int balance )
{
    int a;
    std::cout<<" enter the amount  that you need to deposit : ";
    std::cin>>a;
    std::cout<<"the amount available in your account is "<<balance+a<<"\n";
    return balance+a;
}
int withdraw(int balance )
{
    int a;
    std::cout<<" enter the amount  that you need to withdraw : ";
    std::cin>>a;
    std::cout<<"the amount available in your account is "<<balance-a<<"\n";
    return balance-a;
}

int main()
{
    int balance=1000;
    int choice;
   do
    {
        std::cout<<"enter the choice :\n";
        std::cout<<"enter 1 for withdrawing \n";
        std::cout<<"enter 2 for depositing the money \n";
        std::cout<<"enter 3 for exit \n";
        std::cin>>choice;
        switch(choice)
        {
           
            case 1:
            balance=withdraw(balance);
            break;
            case 2:
            balance=deposit(balance);
            break;
            case 3:
            std::cout<<"thanks for the cooperation \n";
            break;
        }
    } while(choice!=3);

    return 0;
}