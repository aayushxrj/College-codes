#include<stdio.h>

//passing 2d array as pointers
// void input_matrix(int r,int c,int (*arr)[c]){
//     for(int i = 0; i<r;i++){
//         for(int j = 0;j<c;j++){
//             printf("Element [%d,%d] : ",i+1,j+1);           
//             scanf("%d",&arr[i][j]);
//         }
//     }    
// }

//passing the 2d array normally
void input_matrix(int r,int c,int arr[r][c]){
    for(int i = 0; i<r;i++){
        for(int j = 0;j<c;j++){
            printf("Element [%d,%d] : ",i+1,j+1);           
            scanf("%d",&arr[i][j]);
        }
    }    
}

int main(){
    int m,n;
    printf("Rows and columns of first matrix : ");
    scanf("%d%d",&m,&n);
    int p,q;
    printf("Rows and columns of second matrix : ");
    scanf("%d%d",&p,&q);
    
    if(n==p){
        int a[m][n],b[p][q],result[m][q];
 
        printf("Enter the First Matrix.\n");
        input_matrix(m,n,a);
        printf("Enter the Second Matrix.\n");
        input_matrix(p,q,b);

        //logic??
        for(int i = 0; i<m; i++){
            for(int j = 0; j<q; j++){
                int sum = 0;
                for(int k = 0; k<p; k++){
                    sum += (a[i][k]*b[k][j]);
                }
                result[i][j] = sum;
            }
        }
        //print the matrix
        for(int i =0; i<m; i++){
            for(int j = 0; j<q; j++){
            printf("%d\t",result[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Matrice mutiplication mpt possible");
    }
    return 0;
}