#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // seed for random number generator
    int daysUntilExpiration = rand() % 12; // generate random number between 0 and 11

    switch (daysUntilExpiration) {
        case 0:
            std::cout << "Your subscription has expired.\n";
            break;
        case 1:
            std::cout << "Your subscription expires within a day! Renew now and save 20%!\n";
            break;
        default:
            if (daysUntilExpiration <= 5) {
                std::cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!\n";
            } else if (daysUntilExpiration <= 10) {
                std::cout << "Your subscription will expire soon. Renew now!\n";
            } else {
                std::cout << "You have an active subscription.\n";
            }
            break;
    }

    return 0;
}