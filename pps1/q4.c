#include <stdio.h>

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
    int number;
    scanf("%d",&number);
    int temp, arr[4];
    
    if(number<0){
        printf("invalid\n");
        return 0;
    }
    for(int i=0;i<4;i++){
        arr[i]=number%10;
        number/=10;
    }
    // sorting
    bubbleSort(arr,4);
    
    printf("%d\n",10*(arr[0]+arr[1])+(arr[2]+arr[3]));
}