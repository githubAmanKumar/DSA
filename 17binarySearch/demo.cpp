#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int n = arr.size();
    int st = 0,end = n-1;
    while(st <= end){
        int mid=st+(end-st)/2;
        if(target > arr[mid]){
            st = mid + 1;
        }else if(target < arr[mid]){
            end = mid - 1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {1,2,3,4,5}; // Array should be sorted for binary search
    int target = 5;
    cout << binarySearch(arr,target) << endl;

    return 0;
}