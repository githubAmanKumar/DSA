#include <iostream>
#include <vector>
using namespace std;

int main(){

// Product of Array problem except self element - O(n^2)

    int nums[] = {1,2,3,4};
    int n = 4;
    
    int ans[n];
    for(int i=0;i<n;i++){
        int product = 1;
        for(int j=0;j<n;j++){
            if(j!=i){
                product*=nums[j];
            }
        }
        ans[i]=product;
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " "; 
    }

// Optimised solution - O(n)

    vector<int> nums2 = {1,2,3,4};
    int m = nums2.size();
        vector<int> ans2(m,1);
        
        for(int i=1;i<m;i++){
            ans2[i]=ans2[i-1]*nums2[i-1];
        }
        int suff = 1;
        for(int i=m-2;i>=0;i--){
            suff*=nums2[i+1];
            ans2[i]*=suff;
        }

    for(int i=0;i<m;i++){
        cout << ans2[i] << " ";
    }

    return 0;
}