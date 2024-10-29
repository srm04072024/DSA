#include <iostream>
using namespace std;
// void printAllDivisor(int n){
//     for(int i=1 ; i<=n ; i++){
//         if(n % i == 0){
//             cout<<i<<" ";
//         }
//     }
// }

void printAllDivisior_2(int n){
    int i ;
    for(i = 1 ; i*i < n ; i++){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }
    for(i ; i >= 1 ; i--){
        if(n % i == 0){
            cout<<(n/i)<<" ";
        }
    }
}
int main(){
    int n ;
    cin >> n;
    printAllDivisior_2(n);

    return 0;

}