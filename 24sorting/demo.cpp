#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Buuble Sort
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

    // bubbleSort(arr,n);
    // selectionSort(arr,n);
    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }

    return 0;
}