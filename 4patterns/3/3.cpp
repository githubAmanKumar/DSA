#include <iostream>
using namespace std;

// *
// **
// ***
// ****
void fourth(){
    int n=5;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout  << endl;
    }
}

int main(){
    fourth();
return 0;
};