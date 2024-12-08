#include <iostream>
using namespace std;

// 123
// 456
// 789
void third(){
    int c=1,n=4;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            cout << c;
            c++;
        }
        cout  << endl;
    }
}


void tenth(){
    int n=5;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i-1;j++){
            cout << " ";
        }
        for(int j=n;j>i;j--){
            cout << i;
        }
        cout  << endl;
    }
}



int main(){
    // third();
    // fourth();
    // fifth();
    // sixth();
    // seventh();
    // eighth();
    // ninth();
    tenth();

return 0;
};