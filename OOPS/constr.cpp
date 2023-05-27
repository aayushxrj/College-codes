#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string name;
    int salary;
    public:
    Employee(string name, int salary){
        this->name = name;
        this->salary = salary;
    }
    void display(){
        cout << name <<" - "<<salary<<endl;
    }
};

int main(){
    Employee a = Employee("Aayush", 50000);
    a.display();
    Employee b("Akash",30000);
    b.display();
    return 0;
}