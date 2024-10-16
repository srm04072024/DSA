#include<iostream>
using namespace std;
//pass by refernce
void change_1(int arr[]){
    arr[0]= 100;
}
//pass by pointer
void change_2(int* arr){
    *arr = 200;
}
int main(){
    int arr[3] = {0,1,2};
    // change_1(arr);
    change_2(arr);
    cout<<arr[0]<<"\n";
    return 0;
}