#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec = {2,7,11,15};
    int n = sizeof(vec)/sizeof(int);
    int target = 26;
    vector<int> ans;


    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            sum = vec[i]+vec[j];
            if(sum==target){
                ans.push_back(vec[i]);
                ans.push_back(vec[j]); 
            }
        }
    }

        cout << ans[0] << ", " << ans[1] << endl;

// Optimal solution

    int i=0,j=n-1;
    while(i < j){
        int ps = vec[i] + vec[j];
        if( ps > target){
            j--;
        }else if( ps < target){
            i++;
        }else{
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            cout << i<< ", " << j;

        }
    }

    cout << ans[0] << ", " << ans[1];



//================ Majority Element problem=============
// By brute force => O(n)^2
    vector<int> majArr = {2,1,1,31,1,1,31,1};
    int m = majArr.size();

    // Brute force=>
    for(int val: majArr){
        int freq = 0;
        for(int el: majArr){
            if(el==val){
                freq++;
            }
        }
        if(freq > m/2){
            cout << val;
            return val;
        }
    }

// By optimized brute force => O(nlogn)
    vector<int> majArr2 = {1,1,1,2,2};
    int k = majArr2.size();

    int freq1 = 1, ans1 = majArr2[0];

    for(int i=1;i<k;i++){
        if(majArr2[i]==majArr2[i-1]){
            freq1++;
        }else{
            freq1 = 1;
            ans1 = majArr2[i];
        }
        if(freq1 > k/2){
            cout << ans1;
        }
    }

//By Moores voting algorithm => O(n)

    vector<int> majArr3 = {1,3,3,1,3};
    int l = majArr3.size();
    int freq2 = 0 , ans2 = 0;

    for(int i = 0; i<l ;i++){
        if(freq2==0){
            ans2 = majArr[i];
        }
        if(ans2 == majArr[i]){
            freq2++;
        }else{
            freq2--;
        }
    }
    cout << ans2;

   
    return 0;
}