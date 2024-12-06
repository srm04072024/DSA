#include <iostream>
using namespace std;

bool isPalindrome(string &str, int start, int end)
{
    if ((str[start] == str[end]) && (start <= end))
    {
        ++start;
        --end;
        isPalindrome(str, start, end);
        return true;
    }

    return false;

    //     if (start >= end)
    //     {
    //         return true;
    //     }
    // return (str[start] == str[end]) && isPalindrome(str, ++start, --end);
}

int main()
{
    string str = "ab";
    int n = str.size();
    // cout << n << endl;
    int start = 0;
    int end = n - 1;
    if (isPalindrome(str, start, end))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}