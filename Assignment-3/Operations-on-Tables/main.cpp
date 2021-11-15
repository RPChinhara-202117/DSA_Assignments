// Program-3: Write a program to perform following operations on tables using functions only
// a) Addition
// b) Subtraction
// c) Multiplication
// d) Transpose

#include<iostream>
#define ROWS 3
#define COLUMNS 3
using namespace std;

void printTable(int table[ROWS][COLUMNS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
            cout << table[i][j] << "  ";
        cout << endl;
    }
}

void inputTable(int table[ROWS][COLUMNS])
{
    cout<<"Enter table:";
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++)
            cin >> table[i][j];
}

void sumTable(int table1[ROWS][COLUMNS], int table2[ROWS][COLUMNS])
{
    int table3[ROWS][COLUMNS];

    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++)
            table3[i][j] = table1[i][j] + table2[i][j];

    printTable(table3);
}

void minusTable(int table1[ROWS][COLUMNS], int table2[ROWS][COLUMNS])
{
    int table3[ROWS][COLUMNS];

    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++)
            table3[i][j] = table1[i][j] - table2[i][j];

    printTable(table3);
}

void multiplyTable(int table1[ROWS][COLUMNS], int table2[ROWS][COLUMNS])
{
    int table3[ROWS][COLUMNS];
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++)
            table3[i][j] = 0;

    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++)
            for(int k = 0; k < COLUMNS; k++)
                table3[i][j] += table1[i][k] * table2[k][j];

    printTable(table3);
}

void transposeTable(int table[ROWS][COLUMNS])
{
    int table2[ROWS][COLUMNS];

    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMNS; j++)
            table2[i][j] = table[j][i];

    printTable(table2);
}

int main()
{
    int table1[ROWS][COLUMNS], table2[ROWS][COLUMNS];

    inputTable(table1);
    cout<<"Table 1:"<<endl;
    printTable(table1);
    inputTable(table2);
    cout<<"Table 2:"<<endl;
    printTable(table2);

    cout<<"Addition of two tables:"<<endl;
    sumTable(table1, table2);

    cout<<"Subtraction of two tables:"<<endl;
    minusTable(table1, table2);

    cout<<"Multiplication of two tables:"<<endl;
    multiplyTable(table1, table2);

    cout<<"Transpose of a table:"<<endl;
    transposeTable(table1);

    return 0;
}
