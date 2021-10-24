// Search an num in an array using binary method
// Recursive
// OOP is used

#include <iostream>
#define SIZE 10
using namespace std;

class Array
{
public:
    int num;
    int Arr[SIZE] = {2, 6, 8, 13, 18, 19, 24, 28, 29, 33};

    int BinarySearch(int Arr[], int num, int low, int high)
    {
        int mid = (low + high)/2;

        if(low <= high)
        {
            if(Arr[mid] == num)
                return mid;
            if(Arr[mid] > num)
                return BinarySearch(Arr, num, low, mid - 1);
            if(Arr[mid] < num)
                return BinarySearch(Arr, num, mid + 1, high);
        }
        return -1;
    }

    void printArray(int Arr[], int size)
    {
        for(int i = 0; i < size; i++)
            cout<<Arr[i]<<"\t";
        cout<<endl;
    }
};

int main()
{
    Array arr;
    int index;
    cout<<"Enter the element you want to find: ";
    cin>>arr.num;

    index = arr.BinarySearch(arr.Arr, arr.num, 0, SIZE - 1);

    arr.printArray(arr.Arr, SIZE);

    if(index == -1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Element "<<arr.num<<" found at index "<<index<<endl;

    return 0;
}
