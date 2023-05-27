#include<iostream>
using namespace std;

class Time{
    private:
        int hours, minutes, seconds;
    public:
        int operator==(Time t);
        friend ostream& operator<<(ostream &out, Time &t);
        friend istream& operator>>(istream &in, Time &t);
};
int Time :: operator==(Time t){
    if(hours==t.hours && minutes==t.minutes && seconds==t.seconds){
        return 1;
    }
    return 0;
}

ostream& operator<<(ostream& out, Time &t){
    cout<<"Hours, Minutes and Seconds :";
    out<<t.hours<<":"<<t.minutes<<":"<<t.seconds<<endl;
}
istream& operator>>(istream& in, Time &t){
    cout<<"Input Hours, Minutes and Seconds :";
    in>>t.hours>>t.minutes>>t.seconds;
}

int main(){
    Time t1, t2;
    cin>>t1;
    cin>>t2;
    if(t1==t2){
        cout<<"Same\n";
    }
    else{
        cout<<"Different\n";
    }
    cout<<t1;
    cout<<t2;
    return 0;
}