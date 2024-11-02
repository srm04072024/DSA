#include<iostream>
using namespace std;

int missingNumber(int arr[],int n){
    int res = 0;
    for(int i = 0; i<n;i++){
        res = res ^ (i+1);
        res = res ^ arr[i];
    }
    return res ^ (n+1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,8};
    int n = sizeof(arr)/sizeof(n);
    cout << missingNumber(arr,n);
}