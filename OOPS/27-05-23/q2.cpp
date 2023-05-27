#include<iostream>
using namespace std;

float area(int base, int height){
    return (base*height)/2.0;
}

float area(int length, int breadth,int l1, int l2){
    return length*breadth;
}

float area(int radius){
    return 3.14*radius*radius;
}

int main(){
    int choice;
    int l1 = 0;
    int l2 = 0;
    cout<<"----------------MENU------------------"<<endl;
    cout<<"1.Area of triangle"<<endl;
    cout<<"2.Area of rectangle"<<endl;
    cout<<"3.Area of circle"<<endl;
    cout<<"Please input your choice : ";
    cin>>choice;
    switch(choice){
        case 1:{
            int base, height;
            cout<<"Input base and height :";
            cin>>base>>height;
            cout<<area(base, height);
            break;
        }
        case 2:{
            int length, breadth;
            cout<<"Input length and breadth : ";
            cin>>length>>breadth;
            cout<<area(length, breadth,l1, l2);
            break;
        }
        case 3:{
            int radius;
            cout<<"Input radius : ";
            cin>>radius;
            cout<<area(radius);
            break;
        }
        default:{
            cout<<"Invalid Choice";
            break;
        }
    }
    return 0;
}