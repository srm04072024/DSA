#include <iostream>
#include <math.h>
using namespace std;

void powerset(string str)
{
    int n = str.length();
    int powerSet = pow(2, n);
    for (int count = 0; count < powerSet; count++)
    {

        for (int i = 0; i < n; i++)
        {
            if ((count & (1 << i)) != 0)
            {
                cout << str[i];
            }
        }
        cout << ",  ";
    }
}

int main()
{
    string str = "ab";
    powerset(str);
}