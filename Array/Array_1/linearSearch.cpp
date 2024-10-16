#include <iostream>
using namespace std;

int find_keyelement(int *arr,int  n ,int k){
    for(int i = 0;i < n; i++){
        if(*(arr+i)==k){
            return i;
        }
    }
    return -1;
    
}
int main(){
    int arr[] = {2,4,8,16,32,64,128,256,512};
    int n = sizeof(arr)/sizeof(int);
    int key = 128;
    int index = find_keyelement(arr,n,key);
    cout<<key<<" index number is "<<index<<endl;
    return 0;

}