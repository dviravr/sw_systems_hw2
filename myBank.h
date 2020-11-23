#ifndef _MYBANK_H_
#define _MYBANK_H_

void openAcount(double amount);

void chackBalance(int acountNumber);

void deposit(int acountNumber, double amount);

void withrawal(int acountNumber, double amount);

void closeAcount(int acountNumber);

void addingInterest(float interestRate);

void printAllOpenAcounts();

void closeAllAcounts();

#endif