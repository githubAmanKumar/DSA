#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void optimizedSort(vector<int> &arr, int n){ // Time-O(n)

    int count0s = 0, count1s = 0, count2s = 0 ; 
    for(int i=0;i<n;i++){
        if(arr[i]==0) count0s++;
        else if(arr[i]==1) count1s++;
        else count2s++;
    }
    int index = 0;
    for(int i=0;i<count0s;i++){
        arr[index++] = 0;
    }
    for(int i=0;i<count1s;i++){
        arr[index++] = 1;
    }
    for(int i=0;i<count2s;i++){
        arr[index++] = 2;
    }
}


int main(){

    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();

    optimizedSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}