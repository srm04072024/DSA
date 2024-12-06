// GCD of two number

#include <iostream>
using namespace std;
// Using Euclidean Algorithm
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    // int minimum = min(a,b);
    // while(minimum > 0) {
    //     if((a % minimum == 0) && (b % minimum == 0)){
    //         cout<< minimum;
    //         break;
    //     }
    //     minimum--;
    // }
    int gcdValue = gcd(a, b);
    cout << gcdValue << endl;
    int lcm = (a * b) / gcdValue;
    cout << lcm;
    return 0;
}