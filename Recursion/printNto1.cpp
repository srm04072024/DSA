#include <iostream>
using namespace std;

void reversePrint(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    return reversePrint(n - 1);
}
// Time Complexity T(n) = T(n-1)+O(1)
// Auxillary Space = O(n) =>there are n+1 function calls
int main()
{
    reversePrint(5);
    return 0;
}
