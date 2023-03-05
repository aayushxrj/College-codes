#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for(int j =1;j<=n*2;j++){
            if(i==j){
                printf("%d",i);
            }
            else if(i+j==n*2){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        if(i!=n){
            printf("\n");
        }
    }
    printf("\n");
    for(int i= n-1;i>0;i--){
        for(int j=n*2-1;j>0;j--){
            if(i+j==2*n){
                printf("%d",i);
            }
            else if(i==j){
                printf("%d",i);
            }
            
            else{
                printf(" ");
            }
        }
        if(i!=1){
            printf("\n");
        }
    }   
    return 0;
}