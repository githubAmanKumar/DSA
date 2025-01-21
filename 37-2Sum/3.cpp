#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Two Sum | Find Duplicate | Hashing Problems


vector<int> twoSum(vector<int>& arr, int target){ // Optimised approach O(n)

    unordered_map<int, int>m;
    vector<int> ans;    

    for(int i = 0 ;i<arr.size(); i++){
        int first = arr[i];
        int sec = target - first;

        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }

    return ans;
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