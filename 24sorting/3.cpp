#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Inserion Sort
void insertionSort(vector<int> &arr, int n){ // O(n^2)
    for(int i=1;i<n;i++){ // unsorted part starting
    int curr = i;
    int prev = i-1;
    while(prev>=0 && arr[prev]>curr){
        arr[prev+1] = arr[prev];
        prev--;
    }
    arr[prev+1]=curr;
    }
}

int main(){

    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();

    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }

    return 0;
}