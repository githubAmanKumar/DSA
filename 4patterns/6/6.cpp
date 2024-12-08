#include <iostream>
using namespace std;
// 1
// 23
// 456
// 78910
void eighth(){
    int n=5,c=1;
    for(int i=1;i<n;i++){
        for(int j=i;j>=1;j--){
            cout << c;
            c++;
        }
        cout  << endl;
    }
}

int main(){
    eighth();
return 0;
};