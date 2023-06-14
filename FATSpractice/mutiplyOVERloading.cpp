// #include <iostream>
// using namespace std;

// class person
// {
//     int age;
//     int arr[10][10];

// public:
//     person(int age, int arr[10][10])
//     {
//         this->age = age;
//         for (int i = 0; i < 10; i++)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 this->arr[i][j] = arr[i][j];
//             }
//         }
//     }

//     person operator*(person &p)
//     {
//         int result[10][10];

//         for (int i = 0; i < 10; i++)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 result[i][j] = 0;
//                 for (int k = 0; k < 10; k++)
//                 {
//                     result[i][j] += arr[i][k] * p.arr[k][j];
//                 }
//             }
//         }

//         return person(0, result);
//     }

//     friend ostream &operator<<(ostream &out, person &p)
//     {
//         out << "Age is " << p.age << endl;
//         out << "Matrix: " << endl;
//         for (int i = 0; i < 10; i++)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 out << p.arr[i][j] << " ";
//             }
//             out << endl;
//         }
//         return out;
//     }
// };

// int main()
// {
//     int matrix1[10][10] = {
//         {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
//         {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
//         {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
//         {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
//         {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
//         {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
//         {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
//         {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
//         {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
//         {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}};

//     int matrix2[10][10] = {
//         {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
//         {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
//         {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
//         {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
//         {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
//         {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
//         {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
//         {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
//         {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
//         {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}};

//     person p1(18, matrix1);
//     person p2(20, matrix2);

//     person result = p1 * p2;
//     cout << result;

//     return 0;
// }


#include <iostream>
using namespace std;

class Base{
    public:
    virtual void func() = 0;
};

class Derived: public Base{
    public:
    void func(){
        cout<<"Derived"<<endl;
    }
};

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}

int main()
{
    Derived d;
    d.func();

    
    int (*ptr)(int, int);
    ptr = add;
    cout<<ptr(2,3)<<endl;

    return 0;
}