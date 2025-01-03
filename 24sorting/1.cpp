#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Bubble Sort
int bubbleSort(vector<int> &arr, int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return 0;
}

int main(){

    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();

    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }

    return 0;
}