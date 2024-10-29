#include<iostream>
using namespace std;

void DecimalToBinary(int n){
    long res = 0;
    long x = 1;
    while(n > 0){
        if(n % 2 != 0){
            res = res + 1 * x;
        }
        x = x * 10;
        n /= 2;
        
    }
    cout<<res;
}
// Calculate Power Using Binary conversion of power number
void PowerCalculate(int x , int n){
    long long temp = x;
    long long res = 1;
    while(n > 0){
        // if(n % 2 != 0){
        //using bitwise operator (optimised)
        if(n & 1){
            res = res * temp;
        }
        temp = temp * temp;
        // n /= 2; 
        // Using Bitwise operator
        n = n>>1;
        
    }
    cout<<res;
}
int main(){
    int n ,x;
    cin >> n;
    cin >> x;
    PowerCalculate(x,n);
}