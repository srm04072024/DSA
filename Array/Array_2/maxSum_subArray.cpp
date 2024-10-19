#include <iostream>
#include <limits.h>
using namespace std;

// //BRUTE FORCE(BF)
// void maxSumSubArray_m1 (int *arr,int n){
//     int end,start = 0;
//     int maxSum = INT_MIN;
//     for(start ; start<n ; start++){
//         for(end = start ; end<n ; end++){
//             int currentSum = 0;
//             for(int i = start ; i<=end ; i++){
//                 currentSum += arr[i];
//             }
//             cout<<currentSum<<"  ";
//             maxSum = max(maxSum,currentSum);
//         }
//         cout<<endl;
//     }
//     cout<<"MaxSum is "<<maxSum;
// }

// //OPTIMIZED VERSION OF BF Method

void maxSumSubArray_m2 (int *arr,int n){
    int end,start = 0;
    int maxSum = INT_MIN;
    for(start ; start<n ; start++){
        int currentSum = 0;
        for(end = start ; end<n ; end++){
            currentSum += arr[end];
            cout<<currentSum<<"\t";
            maxSum = max(maxSum,currentSum);
        }
        cout<<endl;
    }
    cout<<"MaxSum is "<<maxSum;
}

// // By using KADANE'S ALGORITHM (Dynamic Programing)

void maxSumSubArray_m3(int *arr , int n){
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum,maxSum);
        if(currentSum <0){
            currentSum = 0;
        }
    } 
    cout<<"\n\nMaxSum is "<<maxSum;    

}

int main(){
    int arr[6] = {-8,-3,-6,-5,-4,-2};
    maxSumSubArray_m2(arr,6);
    maxSumSubArray_m3(arr,6);
    return 0;
}