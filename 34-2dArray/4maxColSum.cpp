#include<iostream>
#include<utility>
#include<climits>
using namespace std;

int maxColSum(int matrix[][3],int rows, int cols){
    int ans = INT_MIN;
    for(int i=0;i<cols;i++){
        int currColSum = 0;
        for(int j=0;j<rows;j++){
             currColSum += matrix[j][i];
        }
        ans = max(currColSum,ans);
    }
    return ans;
}
int main(){
    int matrix[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
        };
    int rows = 4;
    int cols = 3;
    int sum = maxColSum(matrix,rows,cols);
    cout << sum <<endl;

    return 0;
}