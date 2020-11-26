#include <stdio.h>
#include "myBank.h"

int main()
{
    int condition = 1;
    while (condition)
    {
        int accountNumber;
        double amount;
        float interestRate;
        char command;
        printf("\nPlease choose a transaction type:\n"
               "O-Open Account\n"
               "B-Balance Inquiry\n"
               "D-Deposit\n"
               "W-Withdrawal\n"
               "C-Close Account\n"
               "I-Interest\n"
               "P-Print\n"
               "E-Exit\n");
        scanf(" %c", &command);
        switch (command)
        {
        case 'o':
        case 'O':
            printf("Please enter amount for initial deposit: ");
            if (scanf("%lf", &amount) == 1)
            {
                openAccount(amount);
            }
            else
            {
                printf("Failed to read the amount\n");
            }
            break;
        case 'b':
        case 'B':
            printf("Please enter account number: ");
            if (scanf("%d", &accountNumber) == 1)
            {
                checkBalance(accountNumber);
            }
            else
            {
                printf("Failed to read the account number\n");
            }
            break;
        case 'd':
        case 'D':
            printf("Please enter account number: ");
            if (scanf("%d", &accountNumber) == 1)
            {
                printf("Please enter the amount to deposit: ");
                if (scanf("%lf", &amount) == 1)
                {
                    deposit(accountNumber, amount);
                }
                else
                {
                    printf("Failed to read the amount\n");
                }
            }
            else
            {
                printf("Failed to read the account number\n");
            }
            break;
        case 'w':
        case 'W':
            printf("Please enter account number: ");
            if (scanf("%d", &accountNumber) == 1)
            {
                printf("Please enter the amount to withdraw: ");
                if (scanf("%lf", &amount) == 1)
                {
                    withdrawal(accountNumber, amount);
                }
                else
                {
                    printf("Failed to read the amount\n");
                }
            }
            else
            {
                printf("Failed to read the account number\n");
            }
            break;
        case 'c':
        case 'C':
            printf("Please enter account number: ");
            if (scanf("%d", &accountNumber) == 1)
            {
                closeAccount(accountNumber);
            }
            else
            {
                printf("Failed to read the account number\n");
            }
            break;
        case 'i':
        case 'I':
            printf("Please enter interest rate: ");
            if (scanf("%f", &interestRate) == 1)
            {
                addingInterest(interestRate);
            }
            else
            {
                printf("Failed to read the interest rate\n");
            }
            break;
        case 'p':
        case 'P':
            printAllOpenAccounts();
            break;
        case 'e':
        case 'E':
            closeAllAccounts();
            condition = 0;
            break;
        default:
            printf("Invalid transaction type\n");
        }
    }
    return 0;
}