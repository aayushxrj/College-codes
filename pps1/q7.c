#include<stdio.h>

int main(){
    int income;
    scanf("%d",&income);
    int tax = 0;
    if(income <=150000){
        tax = 0;
    }
    else if(income <300000){
        tax = 0.1*(income-150000);
    }
    else if(income <=500000 ){
        tax = 0.1*(income-150000) + 0.2*(income-300000);
    }
    else{
        tax = 0.1*(income-150000) + 0.2*(income-300000) + 0.3*(income-500000);
    }
    if(tax == 0){
        printf("no tax\n");
    }
    else{
        printf("%d",tax);
    }    
    return 0;
}