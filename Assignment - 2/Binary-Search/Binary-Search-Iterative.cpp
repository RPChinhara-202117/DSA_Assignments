// Finding an element in the array using binary search
// Iterative Solution
// OOP not used

#include <iostream>
#define SIZE 10
using namespace std;

void BinarySearch(int arr[], int size, int element)
{
    int first = 0, last = size - 1;
    int mid = (first + last)/2;

    while(first <= last)
    {
        if(arr[mid] < element)
            first = mid + 1;
        else if(arr[mid] == element)
        {
            cout<<element<<" found at index "<<mid<<endl;
            break;
        }
        else
            last = mid - 1;

        mid = (first + last) / 2;
    }

    if(first > last)
        cout<<"Element not found"<<endl;
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

int main()
{
    int Array[SIZE] = {2, 6, 8, 13, 18, 19, 24, 28, 29, 33};
    int num;
    cout<<"Enter the element you want to find: ";
    cin>>num;

    printArray(Array, SIZE);

    BinarySearch(Array, SIZE, num);

    return 0;
}
