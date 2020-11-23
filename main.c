#include <stdio.h>
#include "myBank.h"

int main()
{
    int condition = 1;
    while (condition)
    {
        int acountNumber = 0;
        double amount = 0.0;
        float interestRate = 0.0;
        char command;
        printf("Please inset a command (O, B, D, W, C, I, P, E):\t");
        scanf("%c",&command);
        switch (command)
        {
        case 'o':
        case 'O':
            printf("Please inset an amount:\t");
            scanf("%lf",&amount);
            openAcount(amount);
            break;
        case 'b':
        case 'B':
            printf("Please inset an acount number:\t");
            scanf("%d",&acountNumber);
            chackBalance(acountNumber);
            break;
        case 'd':
        case 'D':
            printf("Please inset an acount number:\t");
            scanf("%d",&acountNumber);
            printf("Please inset an amount to deposit:\t");
            scanf("%lf",&amount);
            deposit(acountNumber, amount);
            break;    
        case 'w':
        case 'W':
            printf("Please inset an acount number:\t");
            scanf("%d",&acountNumber);
            printf("Please inset an amount to withrawal:\t");
            scanf("%lf",&amount);
            deposit(acountNumber, amount);
            break;
        case 'c':
        case 'C':
            printf("Please inset an acount number to close:\t");
            scanf("%d",&acountNumber);
            closeAcount(acountNumber);
            break;
        case 'i':
        case 'I':
            printf("Please inset an interest rate:\t");
            scanf("%f",&interestRate);
            addingInterest(interestRate);
            break;                
        case 'p':
        case 'P':
            printf("print all");
            break; 
        case 'e':
        case 'E':
            printf("exit");
            condition = 0;
            break;             
        default:
            printf("Invalid command, please try another command.\n");
        }
    }
    return 0;
}