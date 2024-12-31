#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> arr, int n,int m,int maxAllowedPages){ // O(n)
    int students=1, pages=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPages){
            return false;
        }
        if(pages+arr[i]<=maxAllowedPages){
            pages+=arr[i];
        }else{
            students++;
            pages=arr[i];
        }
    }
    return students > m ? false : true;
}
int allocateBooks(vector<int> arr, int n,int m){ // O(logN * n)
    if(m>n) return -1;

    int sum = 0;
    for(int i=0;i<n;i++){ // O(n)
        sum+=arr[i];
    }

    int ans = -1;
    int st=0, end=sum; // Range of possible ans

    while(st <= end){ // O(logN * n)
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){ // left
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

    vector<int> arr = {15,17,20}; // Array should be sorted for binary search
    int n = 4,m=2;
    cout << allocateBooks(arr,n,m) << endl;

    return 0;
}