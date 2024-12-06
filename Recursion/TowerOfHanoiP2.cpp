#include <iostream>
using namespace std;

int TOH(int n, int from, int to, int aux)
{
    int moves = 0;
    if (n == 0)
    {
        return 0;
    }
    moves += TOH(n - 1, from, aux, to);
    moves += 1;
    moves += TOH(n - 1, aux, to, from);
    return moves;
}

int main()
{
    int n;
    cin >> n;
    int totalOperation = TOH(n, 1, 2, 3);
    cout << totalOperation << endl;
    return 0;
}