#include <stdio.h>
#include "myBank.h"

void cleanBuffer()
{
    // clean unnecessary characters
    int n;
    while ((n = getchar()) != EOF && n != '\n')
        ;
}

int main()
{
    int condition = 1;
    while (condition)
    {
        int accountNumber = 0;
        double amount = 0.0;
        float interestRate = 0.0;
        char command;
        printf("Please choose a transaction type:\n"
                "O-Open Account\n"
                "B-Balance Inquiry\n"
                "D-Deposit\n"
                "W-Withdrawal\n"
                "C-Close Account\n"
                "I-Interest\n"
                "P-Print\n"
                "E-Exit\n");
        scanf(" %c",&command);
        cleanBuffer();        
        switch (command)
        {
        case 'o':
        case 'O':
            printf("Please enter amount for initial deposit:  ");
            scanf("%lf", &amount);
            cleanBuffer();
            openAccount(amount);
            break;
        case 'b':
        case 'B':
            printf("Please enter account number:  ");
            scanf("%d", &accountNumber);
            cleanBuffer();
            checkBalance(accountNumber);
            break;
        case 'd':
        case 'D':
            printf("Please enter account number:  ");
            scanf("%d", &accountNumber);
            cleanBuffer();
            printf("Please enter the amount to deposit:  ");
            scanf("%lf", &amount);
            cleanBuffer();
            deposit(accountNumber, amount);
            break;
        case 'w':
        case 'W':
            printf("Please enter account number:  ");
            scanf("%d", &accountNumber);
            cleanBuffer();
            printf("Please enter the amount to withdraw:  ");
            scanf("%lf", &amount);
            cleanBuffer();
            withdrawal(accountNumber, amount);
            break;
        case 'c':
        case 'C':
            printf("Please enter account number:  ");
            scanf("%d", &accountNumber);
            cleanBuffer();
            closeAccount(accountNumber);
            break;
        case 'i':
        case 'I':
            printf("Please enter interest rate:  ");
            scanf("%f", &interestRate);
            cleanBuffer();
            addingInterest(interestRate);
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
            printf("Invalid command, please try another command.\n");
        }
    }
    return 0;
}