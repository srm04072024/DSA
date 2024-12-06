#include <iostream>
using namespace std;

int sumOfDigits(int n)
{

    int result = 0;
    while (n > 0)
    {
        int rem = n % 10;
        result += rem;
        n /= 10;
    }
    if (result < 10)
    {
        return result;
    }
    return sumOfDigits(result);
}

int main()
{
    int number;
    cin >> number;
    cout << sumOfDigits(number);
    return 0;
}