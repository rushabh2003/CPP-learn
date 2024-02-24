#include <iostream>
using namespace std;

int main()
{
    //cin (input operator)
    int t;
    string name;
    cout<<"please enter your name \n";
    getline(cin , name );// for taking spaced inputs
    cout<<"\n Please enter your age \n";
    cin>>t; // for taking single or conjoint inputs
    cout<<"My full name is "<< name << endl;
    cout<<"\nI am "<<t << "years old";

}