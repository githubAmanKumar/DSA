#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bruteForceSort(vector<int> &arr){ // Time-O(nlogn) Space-O(1)
    sort(arr.begin(),arr.end());
}

int main(){

    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();

    bruteForceSort(arr);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}