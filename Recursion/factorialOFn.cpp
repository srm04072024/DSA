#include <iostream>
using namespace std;

long long factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    long long res = factorial(n);
    cout << "Factorial of " << n << " is " << res;
    return 0;
}