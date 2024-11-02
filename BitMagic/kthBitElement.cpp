#include<iostream>
using namespace std;

bool KthBitElement(int n , int k){
    
    if(n & (1<<(k-1))){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n , k;
    cin >> n;
    cin >> k;
    if(KthBitElement(n,k)){
        cout<<"Yes";
    }else{
        cout<<"No";
    };
    return 0;
}