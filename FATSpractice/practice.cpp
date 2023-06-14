#include<iostream>
#include<string>
using namespace std;

class rev{
    int num;
    public:
    rev(int num){
        this->num = num;
        cout<<"Number is "<<num<<endl;
    }
    // void revString(){
    //     int revNum = 0;
    //     while(num > 0){
    //         int r = num%10;
    //         revNum = revNum*10 + r;
    //         num/=10; 
    //     }
    //     cout<<"Reversed number is " << revNum<<endl;
    // }
    void revString();
};

void rev :: revString(){
        int revNum = 0;
        while(num > 0){
            int r = num%10;
            revNum = revNum*10 + r;
            num/=10; 
        }
        cout<<"Reversed number is " << revNum<<endl;
    }

int main(){
    rev r1(12345);
    r1.revString();
    return 0;
}