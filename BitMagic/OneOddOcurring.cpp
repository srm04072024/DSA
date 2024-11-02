#include <iostream>
using namespace std;
// using xor operator
int check(int arr[],int n){
    int res = 0;
    for(int i =0 ; i< n ; i++){
        res = res ^ arr[i];
    }
    return res;
}
void CheckOneOdd(int arr[],int n){
    
    for(int i=0; i<n ; i++){
        int count = 0 ;
        for(int j = 0 ;j<n ; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count & 1){
            cout<<arr[i];
        }
    }
}
int main(){
    int arr[] = {1,2,1,1,1,3,2,3,4,4,4,4,2};
    int n = sizeof(arr)/sizeof(int);
    // CheckOneOdd(arr,n);
    cout<<check(arr,n);
    return 0;
}