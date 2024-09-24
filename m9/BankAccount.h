#pragma once
#include <string>

class BankAccount
{
private:
    int BalanceInPennies;

public:
    BankAccount();
    BankAccount(int deposit);
    ~BankAccount();
    std::string GetHolderName() const {return "Not implemented";}
    int GetBalance() const {return BalanceInPennies;}
    bool operator<(BankAccount const& b) const;
};