#include<iostream>
using namespace std;

int countSetBit1(int n){
    if(n == 0){
        return 0;
    }
    if(n & 1){
        return 1 + countSetBit1(n >> 1); 
    }else{
        return countSetBit1(n>>1);                          
    } 
    
}
    
int countSetBit2(int n){
    int count = 0;
    while(n>0){
        if(n & 1){
            count++;
        }
        n = n>>1;
    }
    return count;
}//Time complexity is thetaof total bits of n
   
// brian kernigam's ALgorithm
int countSetBit3(int n){
    int res = 0 ;
    while(n > 0){
        n = n & (n-1);
        n >> 1;
        res++ ;
    }
    return res;
}
void initialise(){
    

}
int count(int table[],int n){
    int res = table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    return res;
}

int main(){
    int table[256]; 
    table[0] = 0;
    for(int i =0 ; i<256 ; i++){
        table[i] = (i & 1) + table[i/2];
    };
    for(int i : table){
        cout<<i << "  ";
    }
    int n ;
    cin >> n; 
    cout << count(table,n);
}