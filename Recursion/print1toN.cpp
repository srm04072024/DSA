#include <iostream>
using namespace std;

// void print1toN(int n, int k)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << (k - (n - 1)) << " ";
//     return print1toN(n - 1, k);
// }
void print1toN(int k)
{
    if (k == 0)
        return;
    print1toN(k - 1);
    cout << k << " ";
}
int main()
{
    // int i = 1;
    int n, k;
    cin >> k;
    // n = k;
    print1toN(k);
    return 0;
}
