#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int> &A,vector<int> &B,int m, int n){
    int idx=m+n-1, i=m-1, j=n-1;
    while(i>=0 && j>=0){
        if(A[i]>=B[j]){
            A[idx] = A[i];idx--;i--;
        }else{
            A[idx] = B[j];idx--;j--;
        }
    }
    while(j>=0){
            A[idx] = B[j];idx--;j--;
    }
}
void nextPermutation(vector<int> &nums){ // O(n)
    // 1st step: find the pivot
    int n=nums.size(),piv=-1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            piv=i;
            break;
        }
    }
    if(piv==-1){
        reverse(nums.begin(),nums.end());
    }
    // 2nd step: next larger element
    for(int i=n-1;i>=0;i--){
        if(nums[i]>nums[piv]){
            swap(nums[i],nums[piv]);
            break;
        }
    }
    
    // 3rd step : piv+1 to n-1
    int i=piv+1,j=n-1;
    while(i<=j){
        swap(nums[i],nums[j]);
        i++;j--;
    }

}
int main(){

//  88 Merge Sorted Arrays Problem and Next Permutation Problem | DSA Series

    vector<int> A = {1,2,3,0,0,0} , B = {2,5,6};
    int m=3 , n=3;

    // merge(A,B,m,n);
    // for(int i=0;i<m+n;i++){
    //     cout<<A[i]<<" ";
    // }
// 31 Next Permutation

    vector<int> nums = {1,2,3,5,4};
    nextPermutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}