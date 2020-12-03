#include "myBank.h"
#include <stdio.h>
#define SET_ACCOUNT_NUMBER 901

float bank[50][2] = {{0}, {0}};
int capacity = 0;

int isOpen(int accountNumber)
{
    int index = accountNumber - SET_ACCOUNT_NUMBER;
    if ((accountNumber > 950) || (accountNumber < 901))
    {
        printf("Invalid account number\n");
        return 0;
    }
    else if (bank[index][0] == 0)
    {
        printf("This account is closed\n");
        return 0;
    }
    else
    {
        return 1;
    }
}

void openAccount(double amount)
{
    if (capacity > 49)
    {
        printf("We are apologies, the bank can not open new account in that moment\n");
        return;
    }
    if (amount < 0.0)
    {
        printf("Invalid Amount\n");
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

    bank[temp][0] = 1;
    bank[temp][1] = amount;
    printf("New account number is: %d \n", (temp + SET_ACCOUNT_NUMBER));
    capacity++;
}

void checkBalance(int accountNumber)
{
    int index = accountNumber - SET_ACCOUNT_NUMBER;
    if (isOpen(accountNumber))
    {
        printf("The balance of account number %d is: %.2f\n", accountNumber, bank[index][1]);
    }
}

void withdrawal(int accountNumber, double amount)
{
    int index = accountNumber - SET_ACCOUNT_NUMBER;
    if (isOpen(accountNumber))
    {
        if (bank[index][1] < amount)
        {
            printf("Cannot withdraw more than the balance\n");
        }
        else
        {
            bank[index][1] -= amount;
            printf("The new balance is: %.2f\n", bank[index][1]);
        }
    }
}

void deposit(int accountNumber, double amount)
{
    int index = accountNumber - SET_ACCOUNT_NUMBER;
    if (isOpen(accountNumber))
    {
        if (amount < 0)
        {
            printf("Cannot deposit a negative amount\n");
        }
        else
        {
            bank[index][1] += amount;
            printf("The new balance is: %.2f\n", bank[index][1]);
        }
    }
}

void closeAccount(int accountNumber)
{
    int index = accountNumber - SET_ACCOUNT_NUMBER;
    if ((accountNumber > 950) || (accountNumber < 901))
    {
        printf("Invalid account number\n");
    }
    else if (bank[index][0] == 0)
    {
        printf("This account is already closed\n");
    }
    else
    {
        bank[index][0] = 0;
        printf("Closed account number %d\n", accountNumber);
        capacity--;
    }
}

void addingInterest(int interestRate)
{
    if (interestRate < 0)
    {
        printf("Invalid interest rate\n");
        return;
    }
    float per = 1 + (interestRate / 100.0);
    for (size_t i = 0; i < 50; i++)
    {
        if (bank[i][0] != 0)
        {
            bank[i][1] *= per;
        }
    }
}

void printAllOpenAccounts()
{
    for (int i = 0; i < 50; i++)
    {
        if (bank[i][0] != 0)
            printf("The balance of account number %d is: %.2f\n", (i + SET_ACCOUNT_NUMBER), bank[i][1]);
    }
}

void closeAllAccounts()
{
    for (size_t i = 0; i < 50; i++)
    {
        bank[i][0] = 0;
    }
}
