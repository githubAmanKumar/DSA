#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Painter's Partition Problem | DSA Placement Series - Binary Search | Lecture 22

bool isPossible(vector<int> arr, int n,int m,int maxAllowedTime){ // O(n)
    int painters=1, time=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedTime){
            return false;
        }
        if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }else{
            painters++;
            time=arr[i];
        }
    }
    return painters > m ? false : true;
}
int painterPartition(vector<int> arr, int n,int m){ // O(log(sum) * n)
    
    int sum = 0, maxVal = INT_MIN;
    for(int i=0;i<n;i++){ // O(n)
        sum+=arr[i];
        maxVal = max(maxVal,arr[i]);
    }

    int ans = -1;
    int st=maxVal, end=sum; // Range of possible ans

    while(st <= end){ // O(logN * n)
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){ // left
            ans=mid;
            end=mid-1;
        }
        else{ // right
            st=mid+1;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {40,30,10,20}; // Array should be sorted for binary search
    int n = 4,m=2;
    cout << painterPartition(arr,n,m) << endl;

    return 0;
}