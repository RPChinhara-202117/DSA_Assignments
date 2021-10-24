// Write a program to search an element in a 2-D array

#include <iostream>
#define ROW 3
#define COLUMN 3
using namespace std;

void linearSearch(int arr[ROW][COLUMN], int row, int column)
{
    int flag = 0, i, j, num, temprow, tempcolumn;

    cout<<"Enter the number to search: ";
    cin>>num;

    for(i =0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            if(arr[i][j] == num)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }

    if(flag == 1)
    {
        cout<<"Element "<<num<<" was found at ("<<i + 1<<","<<j + 1<<")"<<endl;
    }
    else
    {
        cout<<"Element was not found!! Try again."<<endl;
    }

}


int main()
{
    int arr[ROW][COLUMN], num, i, j;

    for(i =0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
            cout<<"Enter element: ";
            cin>>arr[i][j];
        }
    }

    for(i =0; i < ROW; i++)
    {
        for(j = 0; j < COLUMN; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    linearSearch(arr, ROW, COLUMN);

    return 0;
}
