#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[i] == arr[j]){
                cout<<"TRUE";
                return 0;
            }
        }
    }
    cout<<"FALSE";
    return 0;  
}