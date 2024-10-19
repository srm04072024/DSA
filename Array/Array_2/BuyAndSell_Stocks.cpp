#include <iostream>
#include <limits.h>
using namespace std;

void maxProfit_m2(int *arr,int n){
    int buyPrices[10000]; //storing each day possible buy value of stocks
    buyPrices[0] = INT_MAX; //first stock's buying value must be largest +ve value for this problem 

    //now caluculate each day's buy prices
    for(int i=1 ; i<n ; i++){
        buyPrices[i] = min(buyPrices[i-1],arr[i-1]);
    }

    //now calculate eachday's day profit and max profit
    int maxProfit = 0; //profit must be 0
    for(int i=0 ; i<n ; i++){
        int dayProfit = arr[i] - buyPrices[i];
        maxProfit = max(maxProfit,dayProfit);
    }

    cout<<"You can make max profit of "<< maxProfit;
}


// void maxProfit_m1(int *arr ,int n){
//     int maxPrice = INT_MIN;
//     int minPrice = INT_MAX;
//     for(int i =0 ; i<n ; i++ ){
//         minPrice = min(minPrice,arr[i]);
//     }
//     // cout<<minPrice<<endl;
//     for(int j =0 ; j<n ; j++ ){
//         if(minPrice == arr[j]){
//             for(int k = j ; k<n;k++){
//                maxPrice = max(maxPrice,arr[k]); 
//             }
//             break;
//         }
//     }
//     int profit = maxPrice - minPrice;
//     cout<<"You can make max profit of "<< profit;
// }

int main(){
    int stockPrices[6] = {7,6,5,4,3,2};
    maxProfit_m2(stockPrices,6);
    return 0;
}