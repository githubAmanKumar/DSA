#include<iostream>
#include<vector>
using namespace std;

// Two Sum | Find Duplicate | Hashing Problems


vector<int> twoSum(vector<int>& arr, int target){ // Brute force O(n*n)

    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                return {i,j};
            }
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