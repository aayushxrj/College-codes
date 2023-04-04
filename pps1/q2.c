#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char arr[9];
    scanf("%s",arr);
    if(strlen(arr)!=8){
        printf("Invalid Input");
        exit(0);
    }
    else{
        int sumO =0, sumE =0;
        for(int i =0; i<8; i++){
            if(i%2==0){
                sumO+=(arr[i]-'0');
            }
            else{
                sumE+=(arr[i]-'0');
            }
        }
        int result = sumO*3 + sumE;
        if(result%10 == 0){
            printf("Lucky Number");
        }
        else{
            printf("Not a Lucky Number");
        }
    }
    return 0;
}