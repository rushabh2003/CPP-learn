#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a;
    cout<<"Enter your age "<<endl;
    cin>>a;
    if(a > 60){
        cout<<"You must retire"<<endl;
    }else if(a < 18){
        cout<<"Go and Play"<<endl;
    }else{
        cout<<"Go workout ";
    }

}