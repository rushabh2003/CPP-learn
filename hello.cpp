#include <iostream>
using namespace std;
void passByValue(int x)
{
    x++;
    cout<<"The value of (a) pass by value  is "<<x<<endl;
}
void passByRef(int &y)
{
    y++;
    cout<<"The value of (b) pass by reference is "<<y<<endl;
}

int main()
{
    // Pass by Value and Pass by refference
    int a = 3,b = 5;
    passByValue(a);
    cout<<"The value of a is "<<a<<endl;
    passByRef(b);
    cout<<"The value of b is "<<b<<endl;
}
