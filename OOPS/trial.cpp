// // #include <iostream>
// // using namespace std;

// // class Base
// // {
// // public:
// //     void show() { cout << " In Base \n"; }
// // };
// // class Derived : public Base
// // {
// // public:
// //     void show() { cout << "In Derived \n"; }
// // };
// // int main(void)
// // {
// //     Base *bp = new Derived;
// //     // Derived bp;
// //     // bp.show();
// //     // bp->show();
// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int a = 10, *ptr1, **ptr2;
// //     ptr1 = &a;
// //     ptr2 = &ptr1;
// //     cout << "A=" << a;
// //     cout << "\nA using ptr1=" << *ptr1;
// //     cout << "\nA using ptr2=" << **ptr2;
// //     cout << "\nAddress of A : " << ptr1 << endl;
// //     cout << "\nAddress of ptr1 : " << ptr2 << endl;
// //     cout <<"\nManipulation of Pointer :"<< (*ptr1) / 2;
// //     ptr1 += 2;
// //     cout << "\nAddress of A : " << ptr1 << endl;
// //     ptr2 += 2;
// //     cout << "\nAddress of ptr1 : " << ptr2 << endl;
// //     cout << "\nA=" << a;
// //     cout << "\nA using ptr1=" << *ptr1;
// //     cout << "\nA using ptr2=" << **ptr2;
// // }

// // #include <iostream>
// // using namespace std;
// // class Matrix{
// //     private:
// //     int rows;
// //     int columns;
// //     int **mat;
// //     public:
// //     friend istream &operator>>(istream &in, Matrix &m);
// //     friend ostream &operator<<(ostream &out, Matrix &m);
// //     Matrix(int rows, int columns){
// //         this->rows = rows;
// //         this->columns = columns;
// //         mat = new int*[rows];
// //         for(int i = 0; i < rows; i++){
// //             mat[i] = new int[columns];
// //         }
// //     }
// //     Matrix operator+(Matrix &m){
// //         Matrix temp(rows, columns);
// //         for(int i = 0; i < rows; i++){
// //             for(int j = 0; j < columns; j++){
// //                 temp.mat[i][j] = mat[i][j] + m.mat[i][j];
// //             }
// //         }
// //         return temp;
// //     }
// //     Matrix operator-(Matrix &m){
// //         Matrix temp(rows, columns);
// //         for(int i = 0; i < rows; i++){
// //             for(int j = 0; j < columns; j++){
// //                 temp.mat[i][j] = mat[i][j] - m.mat[i][j];
// //             }
// //         }
// //         return temp;
// //     }
// // };
// // istream &operator>>(istream &in, Matrix &m){
// //     for(int i = 0; i < m.rows; i++){
// //         for(int j = 0; j < m.columns; j++){
// //             in >> m.mat[i][j];
// //         }
// //     }
// //     return in;
// // }
// // ostream &operator<<(ostream &out, Matrix &m){
// //     for(int i = 0; i < m.rows; i++){
// //         for(int j = 0; j < m.columns; j++){
// //             out << m.mat[i][j] << " ";
// //         }
// //         out << endl;
// //     }
// //     return out;
// // }
// // int main(){
// //     int r1, c1, r2, c2;
// //     char op;
// //     cin >> r1 >> c1;
// //     Matrix m1(r1, c1);
// //     cin >> m1;
// //     cin >> r2 >> c2;
// //     Matrix m2(r2, c2);
// //     cin >> m2;
// //     cin >> op;
// //     Matrix result(r1, c1);
// //     if (op == '+'){
// //         result = m1 + m2;
// //     }
// //     else if (op == '-'){
// //         result = m1 - m2;
// //     }
// //     cout << result;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// class base
// {
// public:
//     virtual void print()
//     {
//         cout << "print base class\n";
//     }
//     void show()
//     {
//         cout << "show base class\n";
//     }
// };
// class derived : public base
// {
// public:
//     void print()
//     {
//         cout << "print derived class\n";
//     }
//     void show()
//     {
//         cout << "show derived class\n";
//     }
// };
// int main()
// {
//     base *bptr;
//     derived d;
//     bptr = &d;
//     // base *bptr = new derived;
//     // Virtual function, binded at runtime
//     bptr->print();
//     // Non-virtual function, binded at compile time
//     bptr->show();
//     // derived d;
//     // d.print();
//     return 0;
// }

// // #include<iostream>
// // using namespace std;
// // class Base
// // {
// // int x;
// // public:
// // virtual void fun() = 0;
// // int getX() { return x; }
// // };
// // // This class inherits from Base and implements fun()
// // class Derived: public Base {
// //     int y;
// //     public:
// //     void fun() {
// //         cout << "fun() called"; } };
// // int main(void) {
// //     Derived d;
// //     d.fun();
// //     return 0; }

#include <iostream>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout << "print base class\n";
    }
    void show()
    {
        cout << "show base class\n";
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "print derived class\n";
    }
    void show()
    {
        cout << "show derived class\n";
    }
};
int main()
{
    // base *bptr;
    // derived d;
    // bptr = &d;
    base *bptr = new derived;

    // Virtual function, binded at runtime
    bptr->print();
    // Non-virtual function, binded at compile time
    bptr->show();
    return 0;
}