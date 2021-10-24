// Quick Sort 
// Recursive

#include <iostream>
#define SIZE 10
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int j = low - 1;

    for (int i = low; i < high; i++) 
    {
        if(arr[i] <= pivot)
        {
            j++; 
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[j + 1], arr[high]);
    return j + 1;
}

void quickSortRecursive(int arr[], int low, int high)
{
    if(low < high)
    {
        int p = partition(arr, low, high);
        quickSortRecursive(arr, low, p - 1);
        quickSortRecursive(arr, p + 1, high);
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}

int main()
{
    int Array[SIZE] = {4, 5, 3, 2, 3, 8, 2, 7, 7, 9};
    quickSortRecursive(Array, 0, SIZE - 1);
    printArr(Array, SIZE);
    return 0;
}