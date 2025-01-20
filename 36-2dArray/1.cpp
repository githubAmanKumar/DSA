#include<iostream>
#include<utility>
#include<vector>
using namespace std;


int spiralOrder(vector<vector<int>>& matrix){
    int m = matrix.size(), n = matrix[0].size();
    int srow = 0, scol = 0, erow = m-1, ecol = n-1;
    while(srow<=erow && ecol<=erow){
        // top
        for(int j=scol;j<=ecol;j++){
            cout << matrix[srow][j];
        }

        // right
        for(int j=srow+1;j<=erow;j++){
            cout << matrix[j][ecol];
        }

        // bottom
        for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){
                break;
            }
            cout << matrix[erow][j];
        }

        // left
        for(int j=erow-1;j>=srow+1;j--){
            if(scol==ecol){
                break;
            }
            cout << matrix[j][scol];
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }

    return -1;
}


int main(){
    vector<vector<int>> matrix = {
        // {1,2,3},
        // {8,9,4},
        // {7,6,5}

        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
        };


    cout << spiralOrder(matrix) <<endl;

    return 0;
}