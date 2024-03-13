#include <iostream>
#include <cmath>

using namespace std;



int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int m=n,c=0,sum=0;
    while(n!=0)
    {
        n=n/10;
        ++c;
    }
    n=m;
    while(n!=0)
    {
        int d=n%10;
        sum = sum + pow(d,c);
        cout<<sum<<"\n";
        n=n/10;

        
    }

    if (sum == m) {
        std::cout << sum << " is an Armstrong number." << endl;
    } else {
        std::cout << sum << " is not an Armstrong number." << endl;
    }

    return 0;
}
