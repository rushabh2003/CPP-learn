#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    do{
        cout<<"Enter a positive no  :"<<endl;
        cin>>a;
    }while(a < 0);
    cout<<"The number is :"<<a;
}