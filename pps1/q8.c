#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&arr[i]);
    }
    int low= 0, medium = 0, high =0;
    for(int i=0; i<n; i++){
        if(arr[i]<=5.4){
            low++;    
        }
        else if(arr[i]> 5.4 && arr[i]<=7.0){
            medium++;
        }
        else{
            high++;
        }
    }
    printf("%d %d %d",low,medium,high);    
    return 0;
}