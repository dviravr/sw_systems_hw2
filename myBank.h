#ifndef _MYBANK_H_
#define _MYBANK_H_

float bank[50][2];
int capacity;

int isOpen(int accountNumber);

void openAccount(double amount);

void checkBalance(int accountNumber);

void deposit(int accountNumber, double amount);

void withdrawal(int accountNumber, double amount);

void closeAccount(int accountNumber);

void addingInterest(int interestRate);

void printAllOpenAccounts();

void closeAllAccounts();

#endif