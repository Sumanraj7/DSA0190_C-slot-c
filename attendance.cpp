#include <iostream>

int main() {
    int total, attend, a = 0;

    std::cout << "Enter the total number of classes: ";
    std::cin >> total;

    std::cout << "Enter the total number of classes attended: ";
    std::cin >> attend;


    if (total >= attend) {
        double attendance = (static_cast<double>(attend) / total) * 100;
        std::cout << "Current attendance percentage: " << attendance << "%" << std::endl;

        double minimum;
        std::cout << "Enter the minimum attendance percent required: ";
        std::cin >> minimum;

        if (minimum == attendance) {
            std::cout << "You can't take any more leave." << std::endl;
        } else if (minimum > attendance) {
            while (attendance < minimum) {
                total++;
                attend++;
                attendance = (static_cast<double>(attend) / total) * 100;
                a++;
            }
            std::cout << "The number of classes required to attain the minimum attendance percent is " << a << std::endl;
        } else {
            while (attendance > minimum) {
                total++;
                attendance = (static_cast<double>(attend) / total) * 100;
                a++;
            }
            std::cout << "The number of classes you can take leave is " << a << std::endl;
        }
    } else {
        std::cout << "Invalid input." << std::endl;
    }

    return 0;
}
