#include <iostream>
using namespace std;


int main(){
    int arr[] = {10,5,8,20,30,1};
    int n = sizeof(arr)/sizeof(int);
    int max ,min;
    max = min = arr[0];
    for(int i = 0; i<n ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("max = %d & min = %d",max,min);
    return 0;
} 