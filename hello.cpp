#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int price;
    cout<<"Enter the price of item "<<endl;
    cin>>price;
    price>1000?cout<<"expensive":cout<<"Inexpensive";
}