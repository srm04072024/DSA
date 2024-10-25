#include <iostream>
using namespace std;

bool checker(long num){
    long reverseNum = 0 ;
    long n = num;
    while(n>0) {
        int rem = n % 10;
        reverseNum = reverseNum*10 + rem;
        n /= 10;
    }   
    if(num == reverseNum){
        return true;
    }
    return false;
    // cout<<reverseNum;
}

int main(){
    long n;
    cin >> n;
    // checker(n);
    cout<<"The entered number is ";
    if(checker(n)){
        cout<<"a Palindrom Number";
    }else{
        cout<<"not a Palindrom Number";
    }
    
}