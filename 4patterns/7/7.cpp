#include <iostream>
using namespace std;
// 1111
//  222
//   33
//    4
void ninth(){
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
    ninth();
return 0;
};