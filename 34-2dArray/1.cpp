#include<iostream>
using namespace std;
// 2D Arrays in C++ | Part 1 | DSA Series by Shradha Ma'am

int main(){

    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // int matrix[4][3];
    int rows = 4;
    int cols = 3;

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cin>>matrix[i][j]; 
    //     }
    // }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j] << " "; 
        }
        cout << endl;
    }


    return 0;
}