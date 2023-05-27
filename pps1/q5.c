#include<stdio.h>

void bubbleSort(int *arr, int n){
    for(int i = 0; i<n-1; i++){
        int swapped = 0;
        for(int j =0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }   
        if(swapped == 0){
            break;
        }     
    }
}

int main(){
    int arr[50];
    char c;
    int i;
    for (i = 0; c != '\n'; i++){
        scanf("%d%c",&arr[i],&c);
        if(arr[i]<0){
            printf("Invalid input, all input must be positive numbers\n");
            return 0;
        }
    }

    //sorting
    bubbleSort(arr,i);

    //printing
    printf("Odd Players[] = ");
    for(int j=0; j<i; j++){
        if(arr[j]%2 != 0){
            printf("%d ", arr[j]);
        }
    }
    printf("\n");
    printf("Even Players[] = ");
    for(int j=0; j<i; j++){
        if(arr[j]%2 == 0){
            printf("%d ", arr[j]);
        }
    }   
    return 0;
}
