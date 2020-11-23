#include "myBank.h"
#include <stdio.h>

const int SET_ACOUNT_NUMBER = 901;
float bank[50][2]= {{0},{0}};
int capacity = 0;

void openAcount(double amount){
    if(capacity > 49){
        printf("We are apologies, the bank can not open new account in that moment.\n");
        return;
    }
    int temp;
    for (size_t i = 0; i < 50; i++)
    {
        if(bank[i][0]==0){
            temp=i;
            break;
        }
    }
    
    bank[temp][0]=1;
    bank[temp][1]=amount;
    printf("Account created successfully, your account number is: %d\n",(temp+SET_ACOUNT_NUMBER));
    capacity++;
}

void chackBalance(int acountNumber){
    int index = acountNumber-SET_ACOUNT_NUMBER;
    if(bank[index][0]==0){
        printf("Err :This acount number dont exsist.\n");
    }
    else
    {
        printf("The balance of account number %d is: %.2f\n",acountNumber, bank[index][1]);
    }
}


void withrawal(int acountNumber, double amount){
    int index = acountNumber-SET_ACOUNT_NUMBER;
    if(bank[index][0]==0){
        printf("Err: This acount number dont exsist.\n");
    }
    else if (bank[index][1]< amount)
    {
        printf("Err: You do not have enough money to make the withdrawal\n");
    }
    else{
        bank[index][1] -= amount;
        printf("The money withdrawal was successful! The updated amount of account number %d is %.2f.\n",acountNumber,bank[index][1]);
    }


}

void deposit(int acountNumber, double amount){
    int index = acountNumber-SET_ACOUNT_NUMBER;
    if(bank[index][0]==0){
        printf("Err: This acount number dont exsist.\n");
    }
    else
    {
        bank[index][1] += amount;
        printf("The deposit was made successfully! The updated amount of account number %d is %.2f. \n",acountNumber,bank[index][1]);
    }
    }

void closeAcount(int acountNumber){
    int index = acountNumber-SET_ACOUNT_NUMBER;
    if(bank[index][0]==0){
        printf("Err: This acount number dont exsist.\n");
    }
    else
    {
        bank[index][0]= 0;
        printf("Account number %d successfully closed!\n", acountNumber);
        capacity--;
    }
    

}

void addingInterest(float interestRate){
    if(interestRate<0){
        printf("The value entered is incorrect! Please try again.\n");
        return;
    }
    float per = 1 + (interestRate/100.0);
    for (size_t i = 0; i < 50; i++)
    {   
        if(bank[i][0]!=0)
            bank[i][1]*= per;
    }
        printf("The interest rate was added successfully!\n");
}

void printAllOpenAcounts(){
     int temp = 0;
     for (int i = 0; i < 50; i++)
    {   
        if(bank[i][0]!=0){
            temp = 1;
            printf("The amount in account number %d is: %.2f\n",(i+SET_ACOUNT_NUMBER),bank[i][1]);
        }
    }
    if(temp== 0){
        printf("No accounts open.\n");
    }
}

void closeAllAcounts(){
    for (size_t i = 0; i < 50; i++)
    {   
        bank[i][0]=0;
    }
    printf("All accounts have been closed. Bye Bye\n");

}
