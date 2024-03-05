#include <iostream>
using namespace std;

int main()
{
    //Memory addresses and pointers in cpp
    int a = 1729;
    int *ptr;//creating a pointer
    ptr = &a;//storing address of variable into the pointer
    cout<<"The given value is "<<a<<endl;
    cout<<"The value is stored at "<<ptr<<endl;//hexadecimal memory address is returned
    cout<<"The pointer points to the value  "<<*ptr<<endl;
}
