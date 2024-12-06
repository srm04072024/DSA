#include <iostream>
// #include <algorithm>
using namespace std;

int max(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int maxPieces(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }

    if (n < 0)
    {
        return -1;
    }

    int res = max(maxPieces(n - a, a, b, c), maxPieces(n - b, a, b, c), maxPieces(n - c, a, b, c));

    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}

int main()
{
    int n, a, b, c;
    n = 23;
    a = 11;
    b = 9;
    c = 12;
    cout << maxPieces(n, a, b, c);
    return 0;
}