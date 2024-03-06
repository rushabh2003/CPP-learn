#include <iostream>
using namespace std;

int main()
{
    //dynamic memory for arrays

    int *arr = new int[10];//allocating dynamic memory for arrays
    for(int i = 0; i < 10; ++i){ //initialize the array
        arr[i] = i*i;
    }
    for(int i = 0; i < 10; ++i){ //using the array
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete[] arr;//free the allocated memory 
    arr = nullptr; //Best practice to avoid undefined behaviour
    return 0;
}
