// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int m = num;
//     int n =num*2 -1;

//     for(int i = 1; i<=m; i++){
//         for(int j =1; j<=n; j++){
//             if(i+j==6){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int factorial(int num){
    int fact=1;
    while(0<num){
        fact*=num;
        num--;
    }
    return fact;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        for(int i=0;i<n-x;i++){
            printf(" ");
        }
        // printf("*\n");
        for(int i=0;i<=x;i++){
            printf("%d ",factorial(x)/(factorial(x-i)*factorial(i)));
        }
        printf("\n");
    }
    return 0;
}