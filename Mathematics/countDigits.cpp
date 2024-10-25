#include <iostream>
using namespace std;
//logarithimc method

// int countDigit_m3(long n)[
    
// ]

// Iterative Method

int countDigit_m1(long n){
    int count = 0;
    while(n>0){
        n /= 10;
        ++count;
    }
    return count ;
}

//Recursive Method

int countDigit_m2(long n){
    
    if(n>0){
        return 1+ countDigit_m2(n/10);
    }else{
        return 0;
    }
    // return 1 + countDigit_m2(n);
}

int main(){
    long n ;
    cin >> n;
    cout<<countDigit_m2(n);
    return 0;
}