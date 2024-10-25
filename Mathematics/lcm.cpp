#include<iostream>
using namespace std;
//Brute Froce Method
int lcmValue(int a , int b){
    int res = max(a , b);
    while(1){
        if(res % a == 0 && res % b == 0){
            break ;
        }
        res++; 
    }
    return res;
}

int main()
{
    cout << lcmValue(500,555) << endl;
}