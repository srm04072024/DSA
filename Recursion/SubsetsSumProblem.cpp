#include <iostream>
using namespace std;

int countSubsets(int arr[], int n, int sum)
{
    if (n == 0)
    {
        return (sum == 0) ? 1 : 0; // here su
    }
    return countSubsets(arr, n - 1, sum) + countSubsets(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[] = {10, 20, 15};
    int sum = 25;
    int n = sizeof(arr) / sizeof(int);
    cout << countSubsets(arr, n, sum);
    return 0;
}