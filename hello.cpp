#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* String methods (length(),empty(),clear(),append(),at(index),insert(index,string),find(),erase(index,index))*/
    string a;
    cout<<"Enter your name "<<endl;
    getline(cin,a);
    
    cout<<a.erase(3,3);
    }