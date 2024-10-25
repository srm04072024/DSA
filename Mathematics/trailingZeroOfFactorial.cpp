#include <iostream>
using namespace std;

int countZeros_2(int n){
    int count = 0;
        for(int i =5 ; i<=n ; i = i *5){
           count = count + n/i;    
        }
    return count;

}

//the below alogrithms overflows the memory for larger value of n
// int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     int value = n * fact(n-1);
//     return value;
// }

// int countZeros_1(int n){
//     int factorial = fact(n);
//     int count = 0;
//     while(factorial % 10 == 0){
//         ++count;
//         factorial /= 10;
//     }
//     return count;
// }
int main(){
    int n;
    cin >> n;
    cout << countZeros_2(n);
    
}