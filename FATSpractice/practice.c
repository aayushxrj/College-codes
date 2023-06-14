#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int *arr, int n){
    for(int i = 0; i<n-1; i++){
        int swapped = 0;
        for(int j =0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                //swap
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}

int main(){
    // char str[] = "1234";
    // int num  = atoi(str);
    // printf("%d", num);
    int num = 1234;
    char str[10];
    itoa(num, str, 10);
    printf("%s", str);


    return 0;
}
