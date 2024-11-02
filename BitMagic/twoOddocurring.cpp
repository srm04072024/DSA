#include <iostream>
using namespace std;
// Using Timecomplexity of O(n2) BIg-O of n square.
void twoOddOccuring1(int arr[],int n){
    int count = 0;
    for(int i =0 ; i<n;i++){
        int count = 0;
        for(int j =0 ; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }  
        }
        if(count % 2 == 1){
            cout<<arr[i]<<" ";
        }
    }
}
//Using Time Complextiy of O(n)
void twoOddOccuring2(int arr[],int n){
    int XOR = 0 ; int res1= 0 ; int res2 = 0;
    for(int i =0 ; i<n ; i++){XOR = XOR ^ arr[i];};
    int LastSetBit = XOR & ~(XOR-1);
    // cout<<LastSetBit;
    for(int i =0 ; i<n ; i++){
        if((arr[i] & LastSetBit)!= 0){
            res1 = res1 ^ arr[i];
        }else{
            res2 = res2 ^ arr[i];
        }
    }
    cout<<res1<<" "<<res2;
}
int main(){
    int arr[]= {3,4,3,4,8,4,4,32,7,7};
    int n = sizeof(arr)/sizeof(int);
    twoOddOccuring2(arr,n);
}