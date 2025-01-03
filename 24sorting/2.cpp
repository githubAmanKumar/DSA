#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Selection Sort
void selectionSort(vector<int> &arr, int n){ // O(n^2)
    for(int i=0;i<n-1;i++){ // unsorted part starting
        int smallest = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
}

int main(){

    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();

    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }

    return 0;
}