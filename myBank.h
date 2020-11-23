#ifndef _MYBANK_H_
#define _MYBANK_H_

void openAcount(double anount);

void chackBalance(int acountNumber);

void deposit(int acountNumber, double anount);

void withrawal(int acountNumber, double anount);

void closeAcount(int acountNumber);

void addingInterest(float interestRate);

void printAllOpenAcounts();

void closeAllAcounts();

#endif