#include <iostream>
using namespace std;
// 1
// 21
// 321
// 4321
void seventh(){
    int n=5;
    for(int i=1;i<n;i++){
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout  << endl;
    }
}

int main(){
    seventh();
return 0;
};