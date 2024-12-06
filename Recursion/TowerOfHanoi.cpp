#include <iostream>
using namespace std;
// from aux to
void TOH(int n, int from, int to, int aux)
{
    if (n == 1)
    {
        cout << "Move disc-" << n << " rod- " << from << " to rod-" << to << endl;
        return;
    }
    TOH(n - 1, from, aux, to);
    cout << "Move disc-" << n << " rod- " << from << " to rod-" << to << endl;
    TOH(n - 1, aux, to, from);
}

int main()
{
    int from, to, aux, n;
    n = 3;
    from = 1;
    to = 3;
    aux = 2;
    TOH(n, from, to, aux);

    return 0;
}