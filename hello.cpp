#include <iostream>
using namespace std;
void collatzSequence(unsigned long n) {
    while (n != 1) {
        cout<<n<<endl;
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout<<n<<"\n"<<endl; // Print the last number in the sequence, which is 1
}

int main() {
    unsigned long n;
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;;
    cout<<"The 3n + 1 sequence starting at "<<n<<" is"<<endl;
    collatzSequence(n);
    return 0;
}
