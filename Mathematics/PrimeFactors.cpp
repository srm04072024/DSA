#include <iostream>
using namespace std;
//Naive Method
bool isPrime(int n){
    for(int i = 2 ; (i*i)<=n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
// Most Efficient Method
void PrimeFactors(int n){
    if(n<= 1) cout<<"Invalid Input.";
    while(n % 2 == 0){
        cout<<"2"<<" ";
        n /= 2;
    }
    while(n % 3 == 0){
        cout<<"3"<<" ";
        n /= 3;
    }
    for(int i = 5 ; i*i <= n ; i = i+6){
        while(n % i == 0){
            cout<<i<<" ";
            n /= i;
        }
        while(n % (i+2) == 0){
            cout<<i+2<<" ";
            n /= (i+2);
        }
    }
    if(n>3){
        cout<<n;
    }
}


int main(){
    int n ;
    cin>>n;
    // if(isPrime(n)) cout<<"This is Prime Number."<<endl;
    // for(int i =2 ; i<n ; i++){
    //     if(isPrime(i)){
    //         int num  = n;
    //          while(num % i == 0){
    //             cout<<i <<" ";
    //             num /= i;
    //          }
    //     }
    // }
    PrimeFactors(n);
    // cout<< isPrime(4);
    
}