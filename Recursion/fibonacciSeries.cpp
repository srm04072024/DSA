#include <iostream>
using namespace std;
int nthFibonacciNumber(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return nthFibonacciNumber(n - 2) + nthFibonacciNumber(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << nthFibonacciNumber(n);
    return 0;
}