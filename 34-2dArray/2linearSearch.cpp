#include<iostream>
#include<utility>
using namespace std;
// 2D Arrays in C++ | Part 1 | DSA Series by Shradha Ma'am
std::pair<int, int> linearSearch(int matrix[][3],int rows, int cols, int key){

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==key){
                return std::make_pair(i,j);
            } 
        }
        cout << endl;
    }
    return std::make_pair(-1,-1);
}
int main(){
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows = 4;
    int cols = 3;
    std::pair<int, int> p = linearSearch(matrix,rows,cols,12);
    std::cout << p.first << ",";
    std::cout << p.second << endl;

    return 0;
}