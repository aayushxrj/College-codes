#include<stdio.h>

void withdrawl(int *balance){
    int amount;
    printf("Enter amount to withdraw : ");
    scanf("%d",&amount);
    if(*balance >= amount){
        *balance -= amount;
        printf("Amount withdrawn : %d\n",amount);
        printf("Available balance : %d\n",*balance);
    }
    else{
        printf("Invalid amount request, check balance.\n");
    }
}

void deposit(int *balance){
    int amount;
    printf("Enter amount to deposit : ");
    scanf("%d",&amount);
    printf("Amount deposited : %d\n",amount);
    *balance += amount;
    printf("Available balance : %d\n", *balance);
}

void display(int balance){
    printf("Available balance : %d\n",balance);
}

int main(){
    printf("Welcome to Bank Management System!\n");
    printf("Menu Option:\n");
    printf("1. Withdrawal\n2. Deposit \n3. Display Balance \n4. Exit\n");
    printf("\n");
    int option = 0;
    int balance = 30000;
    while(option!=4){
        printf("Enter an option: ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            withdrawl(&balance);
            printf("\n");
            break;
        case 2:
            deposit(&balance);
            printf("\n");
            break;
        case 3:
            display(balance);
            printf("\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        }
    }
    return 0;
}