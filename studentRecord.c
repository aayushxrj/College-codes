#include<stdio.h>

char grade(int avg){
    if(avg>=90){
        return 'S';
    }
    else if(avg>=80 && avg<90){
        return 'A';
    }
    else if(avg>=70 && avg<80){
        return 'B';
    }
    else if(avg>=60 && avg<70){
        return 'C';
    }
    else if(avg>=50 && avg<60){
        return 'D';
    }
    else if(avg>=40 && avg<50){
        return 'E';
    }
    else if(avg<40){
        return 'F';
    }
}

int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    int arr[n][6];
    for(int i = 0; i<n; i++){
        printf("Reg No. of Student %d : ",i+1);
        scanf("%d",&arr[i][0]);
        printf("Enter Marks of 5 subjects : ");
        scanf("%d%d%d%d%d",&arr[i][1],&arr[i][2],&arr[i][3],&arr[i][4],&arr[i][5]);
    }

    //output
    for(int i = 0;i<n;i++){
        int sum = 0, avg;
        for(int j =1;j<6;j++){
            sum+=arr[i][j];
        }
        avg = sum/5;
        printf("%d scored %c Grade.\n",arr[i][0],grade(avg));
    }

    return 0;
}