#include <iostream>
using namespace std;
// index start at 0
int JOP(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    return (JOP(n - 1, k) + k) % n;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int surviver = JOP(n, k);
    cout << surviver << endl;
    return 0;
}