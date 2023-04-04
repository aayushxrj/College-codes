#include<stdio.h>
#include<stdlib.h>

int main(){
    int number;
    scanf("%d",&number);
    if(number == 0){
        printf("Invalid");
        exit(0);
    }
    int sq = number*number;
    int sum = 0;
    while(sq>0){
        int m = sq%10;
        sum+=m;
        sq/=10;
    }
    if(sum == number){
        printf("Neon Number");
    }
    else{
        printf("Not a Neon Number");
    }
    
    return 0;
}