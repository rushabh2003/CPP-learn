#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string a;
    while(a.empty()){
        cout<<"Enter your name :"<<endl;
        getline(cin,a);
    }
    cout<<"Hello "<<a;
}