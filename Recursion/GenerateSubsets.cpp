#include <iostream>

using namespace std;

void getSubsets(string &str, string curr, int i)
{
    if (i == str.size())
    {
        cout << curr << "\t";
        return;
    }

    getSubsets(str, curr, i + 1);
    getSubsets(str, curr + str.at(i), i + 1);
}

int main()
{
    string str = "ABC";
    string curr = "";
    getSubsets(str, curr, 0);
}