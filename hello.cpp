#include <iostream>
using namespace std;

int main()
{
    //dynamic memory for single object
    
    int *ptr = new int; //allocating memory for int
    *ptr = 5; //Assigning the value to  allocated memory
    cout << "The value stored at dynamically allocated int is " << *ptr << endl;//Using the value
    cout << "The address of value stored at dynamically allocated int is " << ptr;
    delete ptr;//free the allocated memory 
    ptr = nullptr; //Best practice to avoid undefined behaviour
    return 0;
}
