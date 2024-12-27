#include <iostream>
#include <vector>
using namespace std;
// Search in Rotated Sorted Array | Binary Search | Leetcode 33
int binaryRotatedSorted(vector<int> nums,int target){
    int n = nums.size();
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(target==nums[mid]){
            return mid;
        }
        if(nums[st]<=nums[mid]){ // Left

            if(nums[st]<=target && target<=nums[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }

        }else{ // Right

            if(nums[mid]<=target && target<=nums[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }

        }        
    }
    return -1;
}

int main(){

    vector<int> nums = {3,4,5,6,7,0,1,2};
    int target = 7;
    
    cout << binaryRotatedSorted(nums, target) << endl;

    return 0;
}