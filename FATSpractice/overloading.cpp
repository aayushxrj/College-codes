#include <iostream>
#include <string>
using namespace std;

class person
{
    int age;
    int arr[10];
    static int test;
public:
    
    person() {}

    person(int age, int *arr)
    {
        this->age = age;
        for (int i = 0; i < 3; i++)
        {
            this->arr[i] = arr[i];
        }
    }

    friend istream &operator>>(istream &in, person &p)
    {
        cout << "Enter age: ";
        in >> p.age;
        cout << "Enter array elements: ";
        for (int i = 0; i < 3; i++)
        {
            in >> p.arr[i];
        }
        return in;
    }

    friend void operator+(person &p1, person &p2)
    {
        int totalage = p1.age + p2.age;
        cout << "Added age is " << totalage;
    }

    friend ostream& operator <<(ostream &out, person &p)
    {
        out << "Age is " << p.age;
        return out;
    }
    int &operator[](int i)
    {
        return arr[i];
    }
};

int person ::test = 0;

int main()
{
    person p1, p2;
    cout << "Enter details for person 1:\n";
    cin >> p1;
    cout << "Enter details for person 2:\n";
    cin >> p2;

    p1 + p2;
    cout << "\n"
         << p1;
    cout << endl;
    cout << p1[0];

    return 0;
}



