#include <iostream>
#include <limits.h>
using namespace std;

int stockWater(int *barHeights,int n){
    int leftmostHeights[10000],rightmostHeights[10000];
    leftmostHeights[0] = barHeights[0];
    rightmostHeights[n-1] = barHeights[n-1];
    // cout<<leftmostHeights[0]<<" ";
    for(int i=1 ; i<n ; i++ ){
        leftmostHeights[i] = max(barHeights[i-1],leftmostHeights[i-1]);
        // cout<<leftmostHeights[i]<<" ";
    }
    // cout<<endl;
    // cout<<rightmostHeights[n-1]<<" ";
    for(int i=n-2 ; i>=0 ; i--){
        rightmostHeights[i] = max(barHeights[i+1],rightmostHeights[i+1]);
        // cout<<rightmostHeights[i]<<" ";
    }
    int totalWaterTrapped = 0;
    for(int i = 0;i<n;i++){
        int currentTrappedWater = min(rightmostHeights[i],leftmostHeights[i]) - barHeights[i];
        if(currentTrappedWater>0){
            totalWaterTrapped += currentTrappedWater;
        }
    }
    return totalWaterTrapped;

}

int main(){
    int barHeights[] = {4,2,0,6,3,2,5};
    int n = sizeof(barHeights)/sizeof(int);
    int StockWater = stockWater(barHeights,n);
    cout<<"TotalStockWater - "<<StockWater<<" Unit"<<endl; 
}