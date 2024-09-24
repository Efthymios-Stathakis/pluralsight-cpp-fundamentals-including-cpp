#include "BankAccount.h"

BankAccount::BankAccount() {}

BankAccount::BankAccount(int deposit): BalanceInPennies(deposit) 
{}

BankAccount::~BankAccount() {}

bool BankAccount::operator<(BankAccount const & b) const
{
    return BalanceInPennies < b.BalanceInPennies;
}