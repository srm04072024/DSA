#include<iostream>
using namespace std;
//Pass by Value
    void change_1(int num){
        num = 20;
        cout<<"value of num inside num is "<<num<<endl;
    }


//Pass by pointer
    int change_2(int* n){
        *n =20;
    }

//Pass by reference
    int change_3(int &n){//n is alies of num variable in main()
        n =20;
    }
    
int main(){
    int num = 10;
    // change_1(num);
    //change_2(&num);
    change_3(num);
    cout<<"final value of num after function call is "<< num<<endl;
    return 0;
}