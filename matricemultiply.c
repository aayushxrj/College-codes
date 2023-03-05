#include<stdio.h>

int main(){
    int a[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int b[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int c[3][3];
    //logic??
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            int sum = 0;
            for(int k = 0; k<3; k++){
                sum += (a[i][k]*b[k][j]);
            }
            c[i][j] = sum;
        }
    }
    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}