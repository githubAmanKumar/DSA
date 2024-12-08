#include <iostream>
using namespace std;

// 1
// 22
// 333
// 4444
void fifth(){
    int n=5;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout  << endl;
    }
}

// 1
// 12
// 123
// 1234
void sixth(){
    int n=5;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout  << endl;
    }
}

int main(){

    fifth();
    sixth();
return 0;
};