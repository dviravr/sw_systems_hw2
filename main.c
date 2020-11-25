#include <stdio.h>
#include "myBank.h"

void cleanBuffer(){
    int n;
    while((n = getchar()) != EOF && n != '\n' );
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
        printf("Transaction type?:  ");
        cleanBuffer();
        scanf(" %c",&command);
        cleanBuffer();        
        switch (command)
        {
            case 'o':
            case 'O':
                printf("Initial deposit?:  ");
                scanf("%lf",&amount);
                openAccount(amount);
                break;
            case 'b':
            case 'B':
                printf("Account number?:  ");
                scanf("%d",&accountNumber);
                checkBalance(accountNumber);
                break;
            case 'd':
            case 'D':
                printf("Account number?:  ");
                scanf("%d",&accountNumber);
                printf("Amount?:  ");
                scanf("%lf",&amount);
                deposit(accountNumber, amount);
                break;    
            case 'w':
            case 'W':
                printf("Account number?:  ");
                scanf("%d",&accountNumber);
                printf("Amount?:  ");
                scanf("%lf",&amount);
                withdrawal(accountNumber, amount);
                break;
            case 'c':
            case 'C':
                printf("Account number?:  ");
                scanf("%d",&accountNumber);
                closeAccount(accountNumber);
                break;
            case 'i':
            case 'I':
                printf("Interest rate?:  ");
                scanf("%f",&interestRate);
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