#include <iostream>
using namespace std;

int getSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n + getSum(n - 1));
}
// here (n+1) function calls occurs.
// time complexity : O(n)
// space complexity : O(n)
int main()
{
    int n;
    cin >> n;
    cout << getSum(n);
    return 0;
}