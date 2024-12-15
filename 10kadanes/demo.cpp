#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

// Sub arrays
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

    for(int st=0; st < n; st++){ // Print sub arrays
        for(int end=st; end < n; end++){
            for(int i=st; i <= end ; i++){
                cout << arr[i];
            }
            cout<<" ";
        }
        cout << endl;;
        
    }

// Sum of max sub array

    vector<int> arr2 = {1,2,3,4,5};
    int m = arr2.size();

    int maxSum = 0;
    for(int st=0; st < m; st++){
        int currSum = 0;
        for(int end=st; end < m; end++){
            currSum+=arr2[end];
            maxSum = max(maxSum,currSum);
        }        
    }
    cout << "maximum sub array sum = " << maxSum << endl;
    
// Kadane's algorithm

    vector<int> nums = {3,-4,5,4,-1,7,-8};
    int k = nums.size();

    int max_Sum = INT_MIN;
    int currSum = 0;
    for(int i=0; i < k; i++){
            currSum+=nums[i];
            max_Sum = max(max_Sum,currSum);
            if(currSum<0){
                currSum = 0;
            }       
    }
    cout << "maximum sub array sum = " << max_Sum << endl;
    

    return 0;
}