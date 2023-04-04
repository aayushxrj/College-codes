#include<stdio.h>
#include<stdlib.h>

void withdrawl(int *balance){
    int amount;
    scanf("%d",&amount);
    if(*balance >= amount){
        *balance -= amount;
        printf("%d\n",amount);
        printf("%d\n",*balance);
    }
    else{
        printf("Invalid amount request, check balance.\n");
    }
}
void deposit(int *balance){
    int amount;
    scanf("%d",&amount);
    printf("%d\n",amount);
    *balance += amount;
    printf("%d\n", *balance);
}
void display(int balance){
    printf("%d\n",balance);
}

int main(){
    int option;
    scanf("%d",&option);
    int balance = 30000;
    switch (option)
    {
    case 1:
        withdrawl(&balance);
        break;
    case 2:
        deposit(&balance);
        break;
    case 3:
        display(balance);
        break;
    case 4:
        exit(0);
        break;
    }
    return 0;
}