#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //Logical operators and(&&) , or(||) and not(!)
    cout<<"Enter a number "<<endl;
    int a;
    cin>>a;
    if(a>18 && a<60){
        cout<<"Go work"<<endl;
    }else if(a<18 || a>60){
        cout<<"Enjoy yourself "<<endl;
    }else{
        cout<<"Not operator is !"<<endl;
    }
}