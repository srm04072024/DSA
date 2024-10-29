#include <iostream>
#include <vector>
using namespace std;
// bool isPrime(int n){
//     if(n == 1) return true;
//     for(int i = 2 ; i*i<= n ; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }
// void printPrimes(int n){
//     for(int i =2; i<=n ; i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }
//     }
// }

// void PrimeCheck(int n){
//    vector<bool>isPrime(n+1 , true);
//    for(int i = 2 ; i*i <= n ; i++){
//         if(isPrime[i]){
//             for(int j = 2*i ; j<=n ; j += i){
//                 isPrime[j] = false;
//             }
//         }
//    }
//    for(int i = 2 ; i<= n+1 ; i++){
//         if(isPrime[i]){
//             cout<<i<<" ";
//         }
//    }
    
// }

void PrimeCheck(int n){
   vector<bool>isPrime(n+1 , true);
   for(int i = 2 ; i <= n ; i++){
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j = i*i ; j<=n ; j += i){
                isPrime[j] = false;
            }
        }
   }  
}

int main(){
    PrimeCheck(11);
}