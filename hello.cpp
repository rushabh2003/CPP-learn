#include <iostream>
using namespace std;

int main()
{
    //type conversion

    int x = 2.71;// Implicit type conversion from double to int
    cout<<x<<endl;
    int score = 9;
    int questions = 10;
    double result = (double)score/questions * 100; // Explicit type conversion
    cout<<result;
}