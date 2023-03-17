#include<stdio.h>

int main(){
    int condn = 1;
    int n,sump=0,sumn=0;
    printf("Enter -1 to exit...\n");
    while(condn== 1){
        printf("Enter the number: ");
        scanf("%d",&n);
        if(n==-1){
            condn = 0;
        }
        else if(n>0){
            sump+=n;
        }
        else{
            sumn+=n;
        }
    }
    printf("The average of negative number is :%d",sumn);
    printf("The average of positive number is :%d",sump);
    return 0;
}