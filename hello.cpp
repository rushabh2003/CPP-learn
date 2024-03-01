#include <iostream>
#include <cmath>
using namespace std;
void bSort(int arr[],int size);
int main()
{
    // bubble sort
    int arr[] = {3, 2, 6, 7, 0, 1};
    int size = sizeof(arr)/sizeof(int);

    bSort(arr,size);
    for (int a : arr)
    {
        cout << a << " ";
    }
}
void bSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
