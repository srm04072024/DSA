#include <iostream>
using namespace std;

int prod(int a , int b){
    return a*b;
}

bool isEven(int num){
    if(num % 2 == 0){
        return true;
    }
    return false;
}

int fact(int num){
    int fact  = 1;
    while(num>0){
        fact = fact * num;
        num --;
    }
    return fact;
}

bool isPrime(int num){
    
    int n = num;
    //REVERSE CHECKing
    // for(int i =n-1 ;n>1; i--){
    //     if(num % i == 0){
    //         return false;
    //     }
    // }
//OPTIMIZED CHECKING
    for(int i =2 ; i*i <= n ; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int binomialcofficent(int n , int r ){
    int value1 = fact(n);
    int value2 = fact(r);
    int value3 = fact(n-r);
    int finalvalue = value1 /(value2 * value3);
    return finalvalue;
}


int main(){
    int number;
    cin>> number;

// // FIND ALL PRIME NUMBERS RANGE FROM 2 TO n

    for(int i =2 ; i<=number ; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    };

// // FIND BINOMIAL COFFICENT 

//     cout<<binomialcofficent(4,2)<<endl;

// // CHECK A NUMBER IS PRIME OR NOT
    
    // if(number==1){
    //     cout<<"Special Number"<<endl;
    //     return 0;
    // }
    // string status = isPrime(number)? "Prime" : "Composite";
    // cout<<status<<endl;

// // FIND FACTORIAL OF A NUMBER

    // cout<<fact(number)<<endl;


// // CHECK A NUMBER IS EVEN OR ODD


    // if(isEven(number)){
    //     cout<<number<<" is Even."<<endl;
    // }else{
    //     cout<<number<<"is Odd."<<endl;
    // }

// // PRODUCT OF TWO NUMBER

    // cout<<prod(4,2);
    return 0;
}

