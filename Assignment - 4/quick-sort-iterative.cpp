// Quick Sort 
// Iterative

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

void quickSortIterative(int arr[], int n)
{ 
    int stack[n];  
    int top = -1;  
    int low = 0, high = n - 1;

    stack[++top] = low;
    stack[++top] = high;    

    while(top >= 0)
    {
        high = stack[top--];
        low = stack[top--];
 
        int p = partition(arr, low, high);

        if(p - 1 > low)
        {
            stack[++top] = low;
            stack[++top] = p - 1;
        }

        if(p + 1 < high)
        {
            stack[++top] = p + 1;
            stack[++top] = high;
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}

int main()
{
    int arr[SIZE] = {4, 5, 3, 2, 3, 8, 2, 7, 7, 9};
    quickSortIterative(arr, SIZE);
    printArr(arr, SIZE);
    return 0;
}