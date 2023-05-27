#include<iostream>
#include<string>
using namespace std;

class Student{
    int rollNo;
    int marks[5];
    public:
    void getData();
    void totMarks();
};

void Student ::getData(){
    for(int i =0; i< 5; i++){
        cout<<"enter marks for the "<< i+1 << " subject";
        cin >> marks[i];
        cout<<endl;
    }
}

void Student ::totMarks(){
    int total = 0;
    for(int i =0; i<5; i++){
        total+=marks[i];        
    }
    cout<<"Total marks is " << total;
}

int main(){
    Student s1;
    s1.getData();
    s1.totMarks();
    return 0;
}