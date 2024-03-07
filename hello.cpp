#include <iostream>
using namespace std;

int fact(int x)
{
    if (x == 0)//base case
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);//The function calls itself
    }
}
int main()
{
    // recursion
    int a = 5;
    cout<<"The factorial of  "<<a<<" is "<<fact(a);
    return 0;
}
