#include <iostream>
using namespace std;

void pattern(){
    int n=10;
    for(int i=1;i<n;i++){
        for(int j=n-i;j>1;j--){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=i-1;j>0;j--){
            cout << j;
        }
        for(int j=1;j<=n-i-1;j++){
            cout << " ";
        }
        cout  << endl;
    }
}

int main(){
    pattern();
return 0;
};