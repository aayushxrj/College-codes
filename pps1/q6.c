#include <stdio.h>
#include <stdlib.h>

int inputNum(int *wrong_no){
    int a;
    while(1){
        scanf("%d",&a);
        if(a<2){
            *wrong_no+=1;
            if(*wrong_no>=2){
                printf("You have given invalid input 2 times and more, you cannot continue. Thanks.\n");
                exit(0);
            }
            if(a==1){
                printf("Invalid, Item must be more than 1\n");
            }
            else{
                printf("Invalid input, Enter details again\n");
            }
        }
        else{
            break;
        }
    }
    return a;
}

int repetition_check(int val,int n,int *arr){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,m,wrong_no=0;
    n=inputNum(&wrong_no);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    m=inputNum(&wrong_no);
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int c[n+m],counter=n;
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=m-1;i>=0;i--){
        if(!repetition_chece(b[i],counter,c)){
            c[counter]=b[i];
            counter++;
        }
    }
    for(int i=0;i<counter;i++){
        printf("%d ",c[i]);
    }
    for(int i=0;i<counter;i++){
        for(int j=0;j<counter-1-i;j++){
            if(c[j]>c[j+1]){
                int temp=c[j+1];
                c[j+1]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<counter;i++){
        printf("%d ",c[i]);
    }
    return 0;
}