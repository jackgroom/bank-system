//
//  main.cpp
//  bank system
//
//  Created by jack on 24/01/2022.
//

#include <iostream>
#include <string>

// ----------------------------------------------------------------------------------------
// User structure

struct User {
private:
    int account_number;
    unsigned int account_balance;
    
    std::string account_name;
    int account_pin;
    
public:
    User(int newAccountNumber) : account_number{ newAccountNumber }, account_balance{ 0 } {}
    
    int get_balance() { return account_balance; };
    int get_account_number() { return account_number; };
    std::string get_account_name() { return account_name; };
    
    void deposit(int x) { account_balance += x; };
    void withdraw(int x) { account_balance -= x; };
    
    bool check_pin(int newPin) { return newPin == account_pin; };
};

// ----------------------------------------------------------------------------------------

int main(int argc, const char * argv[]) {
    
    int account_number;
    int pin;
    
    std::cout << "Enter your account number: ";
    std::cin >> account_number;
    std::cout << "Enter your pin: ";
    std::cin >> pin;
    
//    User* newUser = new User(1234);
//    std::cout << newUser->get_balance() << "\n";
    
    return 0;
}
