#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// Aggressive Cows Problem | DSA Placement Series - Binary Search | Lecture 23

bool isPossible(vector<int> &arr, int N,int C,int minAllowedDistance){ // O(n)
    int Cows=1, lastStallPos=arr[0];

    for(int i=0;i<N;i++){
        if(arr[i] - lastStallPos >= minAllowedDistance){
            Cows++;
            lastStallPos=arr[i];
        }
        if(Cows==C){
            return true;
        }
    }
    return false;
}
int getDistance(vector<int> &arr, int N,int C){ // O(log(sum) * n)
    sort(arr.begin(),arr.end()); // NlogN

    int st = 1 , end = arr[N-1] - arr[0], ans = -1;

    while(st<=end){ // O(log(Range)*N)
        int mid = st + (end-st)/2;

        if(isPossible(arr,N,C,mid)){ // right
            ans = mid;
            st = mid + 1;
        }else{ // left
            end = mid - 1; 
        }
    }

    return ans;
}

int main(){

    int N = 5,C=3;
    vector<int> arr = {1,2,8,4,9}; // Array should be sorted for binary search
    cout << getDistance(arr,N,C) << endl;

    return 0;
}