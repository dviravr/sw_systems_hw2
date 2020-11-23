#include <stdio.h>
// #include "myBank.h"

int main()
{
    int condition = 1;
    while (condition)
    {
        int acountNumber = 0;
        double amount = 0.0;
        float interestRate = 0.0;
        char command;
        printf("Transaction type?:  ");
        scanf("%c",&command);
        switch (command)
        {
            case 'o':
            case 'O':
                printf("Initial deposit?:  ");
                scanf("%lf",&amount);
                openAcount(amount);
                break;
            case 'b':
            case 'B':
                printf("Account number?:  ");
                scanf("%d",&acountNumber);
                chackBalance(acountNumber);
                break;
            case 'd':
            case 'D':
                printf("Account number?:  ");
                scanf("%d",&acountNumber);
                printf("Amount?:  ");
                scanf("%lf",&amount);
                deposit(acountNumber, amount);
                break;    
            case 'w':
            case 'W':
                printf("Account number?:  ");
                scanf("%d",&acountNumber);
                printf("Amount?:  ");
                scanf("%lf",&amount);
                withrawal(acountNumber, amount);
                break;
            case 'c':
            case 'C':
                printf("Account number?:  ");
                scanf("%d",&acountNumber);
                closeAcount(acountNumber);
                break;
            case 'i':
            case 'I':
                printf("Interest rate?:  ");
                scanf("%f",&interestRate);
                addingInterest(interestRate);
                break;                
            case 'p':
            case 'P':
                printAllOpenAcounts();
                break; 
            case 'e':
            case 'E':
                closeAllAcounts();
                condition = 0;
                break;             
            default:
                printf("Invalid command, please try another command.\n");
        }
    }
    return 0;
}