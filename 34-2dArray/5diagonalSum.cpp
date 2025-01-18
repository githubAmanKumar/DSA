#include<iostream>
#include<utility>
#include<climits>
using namespace std;

int maxDiagSum(int matrix[][4],int n){
    int Sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){ // Primary diagonal
             Sum += matrix[j][i];
            } else if(j == n-1-i){ // Secondary diagonal
             Sum += matrix[j][i];
            }
        }
    }
    return Sum;
}

int optimiDiagSum(int matrix[][4],int n){
    int Sum = 0;
    for(int i=0;i<n;i++){
        Sum+=matrix[i][i];
        if(i != n-1-i){
            Sum+=matrix[i][n-1-i];
        }
    }
    return Sum;
}
int main(){
    int matrix[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
        };

    int n=4;

    // cout << maxDiagSum(matrix,n) <<endl;

    cout << optimiDiagSum(matrix,n) <<endl;

    return 0;
}