#include<iostream>
using namespace std;

class mystring{
    char str[100];
    public:
    mystring(){
        cout<<"Enter string : ";
        cin>>str;
    }
    void operator !();
};
void mystring :: operator!(){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        i++;
    }
    cout<<str<<endl;
}

int main(){
    mystring s1;
    !s1;
    return 0;
}