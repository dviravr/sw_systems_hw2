#include "myBank.h"
#include <stdio.h>


const int setAcountNumber = 901;
float bank[50][2]= {{0},{0}};
int capacity = 0;

void openAcount(double amount);{
    if(capacity > 49){
        printf("We are apologies, the bank can not open new account in that moment.");
    }

    bank[capacity][0]=1;
    bank[capacity][1]=amount;
    printf("Account created successfully, your account number is: %d",(capacity+setAcountNumber));

    capacity++;

}


void chackBalance(int acountNumber
void deposit(int acountNumber, dou
void withrawal(int acountNumber, d
void closeAcount(int acountNumber)
void addingInterest(float interest
void printAllOpenAcounts();
void closeAllAcounts();