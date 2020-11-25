#ifndef _MYBANK_H_
#define _MYBANK_H_

void openAccount(double amount);

void checkBalance(int accountNumber);

void deposit(int accountNumber, double amount);

void withdrawal(int accountNumber, double amount);

void closeAccount(int accountNumber);

void addingInterest(float interestRate);

void printAllOpenAccounts();

void closeAllAccounts();

#endif