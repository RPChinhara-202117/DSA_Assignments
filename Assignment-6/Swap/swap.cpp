#include <iostream>
using namespace std;

// call by value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// call by reference
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    
    cout<<"By call by value method:\n";
    printf("Before swapping: x = %d , y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swapping: x = %d , y = %d\n", x, y);

    cout<<"By call by reference method:\n";
    printf("Before swapping: x = %d , y = %d\n", x, y);
    swapByReference(x, y);
    printf("After swapping: x = %d , y = %d\n", x, y);
    
    return 0;
}    