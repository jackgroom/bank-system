//
//  main.cpp
//  bank system
//
//  Created by jack on 24/01/2022.
//

#include <iostream>
#include <string>

struct User {
private:
    int account_number {};
    int account_balance {};
    
    std::string account_name;
    int account_pin;
    
public:
    User(int newAccountNumber) : account_number{ newAccountNumber }, account_balance{ 0 } {}
    
    int get_balance() { return account_balance; };
    void deposit(int x) { account_balance += x; };
    void withdraw(int x) { account_balance -= x; };
};

int main(int argc, const char * argv[]) {
    
    User* newUser = new User(1234);
    std::cout << newUser->get_balance() << "\n";
    
    return 0;
}
