#include <iostream>
using namespace std;

void printSubArray(int arr[],int n){
    int s,e;//s = start, e=end
    for(s=0 ; s<n ; s++){
        for(e=s ; e<n ; e++){
            for(int i = s ; i<=e ; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    } 
}
int main(){
    int arr[5]={1,2,3,4,5};
    printSubArray(arr,5);
    return 0;
}