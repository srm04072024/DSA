#include <iostream>
using namespace std;
//recursive method
int factorial_m2(int n){
    if(n == 0){
        return 1;
    }
    int value = n * factorial_m2(n-1);
    return value;
}
// iterative method
int factorial_m1(int n){
    int value =1;
    if(n == 0 ){
        return 1 ; 
    }
    for(int i = 1 ; i <= n ; i++ ){
        value = value * i;
    }
    return value;
}

int main(){
    int n = 5;
    int value = factorial_m2(n);
    cout<<value;
}