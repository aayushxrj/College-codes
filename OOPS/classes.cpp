#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    int id;
    string name;
    void insert(int id, string name);
    void display();
    // student(){
    //     cout << "Student created"<<endl;
    // }
    student();
};

// void student :: insert(int i, string a){
//     id = i;
//     name = a;    
// }
void student :: insert(int id, string name){
    this->id = id;
    this->name = name;    
}

void student :: display(){
    cout << id << "\t" << name << endl;
}

student :: student(){
    cout<< "Student created"<< endl;
}

int main(){
    student s1;
    s1.insert(3014,"Aayush");
    s1.display();

    return 0;
}