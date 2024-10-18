#include<iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//using Time Complexity O(n) & Space Complexity O(n)
void reverseArray_m1(int arr[],int n){
    int coppyArr[n];
    int i =0;
    while(i<n){
        coppyArr[n-i-1]=arr[i];
        i++;
    }
    arr = coppyArr;
    printArray(arr,n);
} 

void reverseArray_m2(int arr[],int n){
    int start,end;
    start =0;
    end = n-1;
    while(start<end){
        
    //  //using swap method
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;


    //  //  By using Inbuilt Swap function
        swap(arr[start],arr[end]);


        start++;
        end--;
    }
    printArray(arr,n);
}
int main(){
    int arr[] = {2,4,8,16,32,64,128,256,512};
    int n = sizeof(arr)/sizeof(int);
    reverseArray_m2(arr,n);
    return 0;

}