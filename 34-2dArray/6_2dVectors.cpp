#include<iostream>
#include<vector>
using namespace std;

// int maxDiagSum(int matrix[][4],int n){
//     int Sum = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){ // Primary diagonal
//              Sum += matrix[j][i];
//             } else if(j == n-1-i){ // Secondary diagonal
//              Sum += matrix[j][i];
//             }
//         }
//     }
//     return Sum;
// }


int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // rows = matrix.size()
    // rows = matrix[i].size()

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}