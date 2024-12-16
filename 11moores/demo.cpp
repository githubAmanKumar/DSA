#include <iostream>
#include <vector>
using namespace std;

int main(){

    // vector<int> vec = {2,7,11,15};
    // int n = sizeof(vec)/sizeof(int);
    // int target = 26;
    // vector<int> ans;


    // int sum = 0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<=n;j++){
    //         sum = vec[i]+vec[j];
    //         if(sum==target){
    //             ans.push_back(vec[i]);
    //             ans.push_back(vec[j]); 
    //         }
    //     }
    // }

    //     cout << ans[0] << ", " << ans[1];

// Optimal solution

    // int i=0,j=n-1;
    // while(i < j){
    //     int ps = vec[i] + vec[j];
    //     if( ps > target){
    //         j--;
    //     }else if( ps < target){
    //         i++;
    //     }else{
    //         ans.push_back(vec[i]);
    //         ans.push_back(vec[j]);
    //         cout << i<< ", " << j;

    //     }
    // }

    // cout << ans[0] << ", " << ans[1];



//================ Majority Element problem=============
// By brute force => O(n)^2
    // vector<int> majArr = {2,1,1,31,1,1,31,1};
    // int n = majArr.size();

    // Brute force=>
    // for(int val: majArr){
    //     int freq = 0;
    //     for(int el: majArr){
    //         if(el==val){
    //             freq++;
    //         }
    //     }
    //     if(freq > n/2){
    //         cout << val;
    //         return val;
    //     }
    // }

// By optimized brute force => O(nlogn)
    // vector<int> majArr = {1,1,1,2,2};
    // int n = majArr.size();

    // int freq = 1, ans = majArr[0];

    // for(int i=1;i<n;i++){
    //     if(majArr[i]==majArr[i-1]){
    //         freq++;
    //     }else{
    //         freq = 1;
    //         ans = majArr[i];
    //     }
    //     if(freq > n/2){
    //         cout << ans;
    //     }
    // }

//By Moores voting algorithm => O(n)

    vector<int> majArr = {1,3,3,1,3};
    int n = majArr.size();
    int freq = 0 , ans = 0;

    for(int i = 0; i<n ;i++){
        if(freq==0){
            ans = majArr[i];
        }
        if(ans == majArr[i]){
            freq++;
        }else{
            freq--;
        }
    }
    cout << ans;

   
    return 0;
}