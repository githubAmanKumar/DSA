#include <iostream>
#include <vector>
using namespace std;

int main(){

// Buy and Sell Stock Problem and Pow(X,N) Power exponential Problem - Leetcode | DSA Series

// Q1
    int n=5, x=3;
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2==0) return 1.0;
    if(x==-1 && n%2!=0) return -1.0;

    long binform = n;
    if(n<0){
        x = 1/x;
        binform = -binform;
    }
    double ans =1;
    while(binform>0){
        if(binform % 2 ==1){
            ans*=x;
        }
        x*=x;
        binform/=2;

    }
    cout << ans ;

// Q2 Stock buy and sell
    vector<int> prices = {7,1,5,3,6,4};
    int maxProfit = 0;
    int bestBuy = prices[0];
    int m = prices.size();
    for(int i=0; i<m; i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }
    cout << "Best Buy = "<<bestBuy << endl;
    cout << "Max Profit = "<<maxProfit;
    return 0;
}