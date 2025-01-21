#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Two Sum | Find Duplicate | Hashing Problems


vector<int> twoSum(vector<int>& arr, int target){ // Better approach O(nlogn)

    sort(arr.begin(),arr.end()); // O(nlogn)
    int n = arr.size();
    int st = 0, end = n-1, sum = 0;
    while(st<end){ // O(n)
        sum =arr[st]+arr[end];
        if(sum == target){
            return {st,end};
        }else if(sum > target){
            end--;
        }else{
            st++;
        }
    }      

    return {};
}


int main(){
    vector<int> arr = {5,2,11,7,15};
    int target = 9;
    vector<int> result = twoSum(arr, target);

    if (!result.empty()) {
        cout << "Indices: ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    } else {
        cout << "No two elements sum up to the target." << endl;
    }

    return 0;
}