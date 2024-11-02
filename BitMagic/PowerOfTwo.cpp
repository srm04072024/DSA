#include <iostream>
using namespace std;
bool powerof2(int n){
    if(n ==0) return false;
    if(!(n & n-1)){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    // ONE LINER APPROCH
    bool status = (n != 0) && (!(n & n-1));
    string str = status?"Yes":"No";
    cout<<str;
    
}