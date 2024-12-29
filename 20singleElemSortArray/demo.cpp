#include <iostream>
#include <vector>
using namespace std;

// Single Element in Sorted Array | Binary Search | DSA Series Lecture 20

int unique(vector<int> nums){
    int  n =  nums.size();
    int st = 0,end = n-1;
    while(st <= end){
        int mid=st+(end-st)/2;

        if(mid==0 && nums[0]!=nums[1])return nums[mid];
        if(mid==n-1 && nums[n-1]!=nums[n-2])return nums[mid];

        if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1])return nums[mid];
        
        if(mid%2==0){ // even number of elements around mid
            if(nums[mid-1]==nums[mid]){   // left
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{ // odd number of elements around mid
            if(nums[mid-1]==nums[mid]){   // odd
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main(){
    // vector<int> vec = {1,1,2,3,3,4,4,8,8};  // mid-even
    vector<int> vec = {3,3,7,7,10,11,11};   // mid-odd
    cout << unique(vec) << endl;
    return 0;
}