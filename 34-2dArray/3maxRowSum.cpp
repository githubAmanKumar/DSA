#include<iostream>
#include<utility>
#include<climits>
using namespace std;
// 2D Arrays in C++ | Part 1 | DSA Series by Shradha Ma'am
int maxRowSum(int matrix[][3],int rows, int cols){
    int ans = INT_MIN;
    for(int i=0;i<rows;i++){
        int currRowSum = 0;
        for(int j=0;j<cols;j++){
             currRowSum += matrix[i][j];
        }
        ans = max(currRowSum,ans);
    }
    return ans;
}
int main(){
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows = 4;
    int cols = 3;
    int sum = maxRowSum(matrix,rows,cols);
    cout << sum <<endl;

    return 0;
}