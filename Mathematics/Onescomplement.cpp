#include<iostream>
using namespace std;

int main(){
   int n ;
   cin>> n;

   int comp = ~n;
   cout<<comp;
   int answer = 0;
   int i = 1 ;
   while(comp > 0){
    int bit = comp & 1;
    answer =  answer + (bit *  i);
    i *= 10;
    comp = comp >> 1;
   } 

   cout<<answer;
}

