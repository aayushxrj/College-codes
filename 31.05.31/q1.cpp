#include<iostream>
using namespace std;

class Poly{
    double a,b,c;
    public:
    Poly(){
        a = 0;b=0;c=0;
    }
    Poly(double a, double b,double c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    Poly operator +(Poly &p){
        Poly sum;
        sum.a = a + p.a;
        sum.b = b + p.b;
        sum.c = c + p.c;
        return sum;
    }
    friend ostream& operator<<(ostream &out, Poly &p){
    if(p.a>0){
        out<<p.a<<"x^2";
    }
    else if(p.a<0){
        out<<"-"<<-p.a<<"x^2";
    }
    else{
        out<<"";
    }
    if(p.b>0){
        out<<"+"<<p.b<<"x";
    }
    else if(p.b<0){
        out<<"-"<<-p.b<<"x";
    }
    else{
        out<<"";
    }
    if(p.c>0){
        out<<"+"<<p.c;
    }
    else if(p.c<0){
        out<<"-"<<-p.c;
    }
    else{
        out<<"";
    }
    return out;
    }
};

int main(){
    Poly q1(3,4,-2);
    Poly q2(0,-4,10);
    Poly sum = q1+q2;
    cout << q1 << " : q1\n"; 
    cout << q2 << " : q2\n"; 
    cout << sum << " : q1+q2\n";
    return 0;
}