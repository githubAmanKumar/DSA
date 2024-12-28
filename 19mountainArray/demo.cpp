#include <iostream>
#include <vector>
using namespace std;

// Peak Index in Mountain Array | Binary Search | Leetcode 852

int peakFind(vector<int> arr){
    int st = 1,end = arr.size()-2;
    while(st <= end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<arr[mid]){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {0,2,1,0};
    cout << peakFind(arr) << endl;
    return 0;
}