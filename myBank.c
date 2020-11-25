#include "myBank.h"
#include <stdio.h>

<<<<<<< HEAD
const int SET_ACOUNT_NUMBER = 901;
float bank[50][2] = {{0}, {0}};
int capacity = 0;

void openAcount(double amount)
{
    if (capacity > 49)
    {
=======
const int SET_ACCOUNT_NUMBER = 901;
float bank[50][2]= {{0},{0}};
int capacity = 0;

void openAccount(double amount){
    if(capacity > 49){
>>>>>>> 9ec81f2381bf461296a4ff0a71bd348e45c4bbc3
        printf("We are apologies, the bank can not open new account in that moment.\n");
        return;
    }
    if (amount < 0.0)
    {
        printf("Err: you can not deposit a negative number.");
        return;
    }
    int temp;
    for (size_t i = 0; i < 50; i++)
    {
        if (bank[i][0] == 0)
        {
            temp = i;
            break;
        }
    }
<<<<<<< HEAD

    bank[temp][0] = 1;
    bank[temp][1] = amount;
    printf("Account created successfully, your account number is: %d\n", (temp + SET_ACOUNT_NUMBER));
    capacity++;
}

void chackBalance(int acountNumber)
{
    int index = acountNumber - SET_ACOUNT_NUMBER;
    if (bank[index][0] == 0)
    {
        printf("Err :This acount number dont exsist.\n");
    }
    else
    {
        printf("The balance of account number %d is: %.2f\n", acountNumber, bank[index][1]);
    }
}

void withrawal(int acountNumber, double amount)
{
    int index = acountNumber - SET_ACOUNT_NUMBER;
    if (bank[index][0] == 0)
    {
        printf("Err: This acount number dont exsist.\n");
=======
    
    bank[temp][0]=1;
    bank[temp][1]=amount;
    printf("Account created successfully, your account number is: %d\n",(temp+SET_ACCOUNT_NUMBER));
    capacity++;
}

void checkBalance(int accountNumber){
    int index = accountNumber-SET_ACCOUNT_NUMBER;
    if(bank[index][0]==0){
        printf("Err :This account number dont exsist.\n");
    }
    else
    {
        printf("The balance of account number %d is: %.2f\n",accountNumber, bank[index][1]);
    }
}


void withdrawal(int accountNumber, double amount){
    int index = accountNumber-SET_ACCOUNT_NUMBER;
    if(bank[index][0]==0){
        printf("Err: This account number dont exsist.\n");
>>>>>>> 9ec81f2381bf461296a4ff0a71bd348e45c4bbc3
    }
    else if (bank[index][1] < amount)
    {
        printf("Err: You do not have enough money to make the withdrawal\n");
    }
    else
    {
        bank[index][1] -= amount;
<<<<<<< HEAD
        printf("The money withdrawal was successful! The updated amount of account number %d is %.2f.\n", acountNumber, bank[index][1]);
=======
        printf("The money withdrawal was successful! The updated amount of account number %d is %.2f.\n",accountNumber,bank[index][1]);
>>>>>>> 9ec81f2381bf461296a4ff0a71bd348e45c4bbc3
    }
}

<<<<<<< HEAD
void deposit(int acountNumber, double amount)
{
    int index = acountNumber - SET_ACOUNT_NUMBER;
    if (bank[index][0] == 0)
    {
        printf("Err: This acount number dont exsist.\n");
=======
void deposit(int accountNumber, double amount){
    int index = accountNumber-SET_ACCOUNT_NUMBER;
    if(bank[index][0]==0){
        printf("Err: This account number dont exsist.\n");
>>>>>>> 9ec81f2381bf461296a4ff0a71bd348e45c4bbc3
    }
    else
    {
        bank[index][1] += amount;
<<<<<<< HEAD
        printf("The deposit was made successfully! The updated amount of account number %d is %.2f. \n", acountNumber, bank[index][1]);
=======
        printf("The deposit was made successfully! The updated amount of account number %d is %.2f. \n",accountNumber,bank[index][1]);
    }
>>>>>>> 9ec81f2381bf461296a4ff0a71bd348e45c4bbc3
    }
}

<<<<<<< HEAD
void closeAcount(int acountNumber)
{
    int index = acountNumber - SET_ACOUNT_NUMBER;
    if (bank[index][0] == 0)
    {
        printf("Err: This acount number dont exsist.\n");
    }
    else
    {
        bank[index][0] = 0;
        printf("Account number %d successfully closed!\n", acountNumber);
=======
void closeAccount(int accountNumber){
    int index = accountNumber-SET_ACCOUNT_NUMBER;
    if(bank[index][0]==0){
        printf("Err: This account number dont exsist.\n");
    }
    else
    {
        bank[index][0]= 0;
        printf("Account number %d successfully closed!\n", accountNumber);
>>>>>>> 9ec81f2381bf461296a4ff0a71bd348e45c4bbc3
        capacity--;
    }
}

void addingInterest(float interestRate)
{
    if (interestRate < 0)
    {
        printf("The value entered is incorrect! Please try again.\n");
        return;
    }
    float per = 1 + (interestRate / 100.0);
    for (size_t i = 0; i < 50; i++)
    {
        if (bank[i][0] != 0)
            bank[i][1] *= per;
    }
    printf("The interest rate was added successfully!\n");
}

<<<<<<< HEAD
void printAllOpenAcounts()
{
    int temp = 0;
    for (int i = 0; i < 50; i++)
    {
        if (bank[i][0] != 0)
        {
            temp = 1;
            printf("The amount in account number %d is: %.2f\n", (i + SET_ACOUNT_NUMBER), bank[i][1]);
        }
    }
    if (temp == 0)
    {
        printf("No accounts open.\n");
    }
}

void closeAllAcounts()
{
=======
void printAllOpenAccounts(){
     int temp = 0;
     for (int i = 0; i < 50; i++)
    {   
        if(bank[i][0]!=0){
            temp = 1;
            printf("The amount in account number %d is: %.2f\n",(i+SET_ACCOUNT_NUMBER),bank[i][1]);
        }
    }
    if(temp== 0){
        printf("No accounts are open.\n");
    }
}

void closeAllAccounts(){
>>>>>>> 9ec81f2381bf461296a4ff0a71bd348e45c4bbc3
    for (size_t i = 0; i < 50; i++)
    {
        bank[i][0] = 0;
    }
    printf("All accounts have been closed. Bye Bye\n");
}
