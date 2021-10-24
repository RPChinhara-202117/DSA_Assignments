#include <iostream>
using namespace std;

// Function to find length of a string
int stringLen(string str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// Function to concatenate two strings
void stringCat(string str1, string str2)
{
    string str3 = str1 + str2;
    cout << str3 << endl;
}

// Function to reverse a string
void stringRev(string str)
{
    int len = 0, n;
    char temp;
    len = stringLen(str);
    n = len - 1;

    for(int i = 0; i <= len/2; i++)
    {
        temp = str[i];
        str[i] = str[n];
        str[n] = temp;
        n--;
    }

    cout<<"Reverse of string: "<<str<<endl;
}

// Function to copy second string into the first
void stringCopy(string &str1, string str2)
{
    str1 = str2;   
}

int main()
{
    string str1 = "Hello", str2 = "World";
    string str;
        
    stringCopy(str, str1);

    int len = stringLen(str);
    cout<<"Length of "<<str<<" is: "<<len<<endl;
    
    stringRev(str);

    cout<<"Concatenation of string1 and string2 is: ";
    stringCat(str1, str2);

    return 0;
}