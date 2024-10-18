#include<iostream>
using namespace std;

int main(){
    int num = 100;
    int *ptr1 = &num;
    int *ptr2 = ptr1+1;
    int *ptr3 = ptr2+1;
    cout<<ptr1<<"\t"<<ptr2<<"\n"<<ptr3<<endl;
    cout<<ptr2-ptr1<<endl;
    cout<<ptr3-ptr1<<endl;
    return 0;
}