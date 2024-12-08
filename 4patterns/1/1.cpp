#include <iostream>
using namespace std;

// 1234
// 1234
// 1234
// 1234
void first(){
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            cout << j;
        }
        cout  << endl;
    }
}

// ABCD
// ABCD
// ABCD
// ABCD
void second(){
    for(int i=1;i<5;i++){
        for(char j='A';j<'E';j++){
            cout << j;
        }
        cout  << endl;
    }
}

int main(){

    first();
    second();

return 0;
};