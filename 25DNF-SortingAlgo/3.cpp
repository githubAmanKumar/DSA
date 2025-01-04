#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Dutch National Flag algorithm ( DNF )
void optimalSort(vector<int> &arr, int n){ // Time-O(n) with single loop, Space-O(1)
    int mid = 0, high = n-1, low=0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;low++;
        }else if(arr[mid]==1) mid++;
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}

int main(){

    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();

    optimalSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}