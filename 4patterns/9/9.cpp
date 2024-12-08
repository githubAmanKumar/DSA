#include <iostream>
using namespace std;

void pattern(){
    int n=6;
    for(int i=1;i<n;i++){
        for(int j=n-i;j>1;j--){
            cout << " ";
        }
        if(i!=1){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout << "&";
        }
        for(int j=i-2;j>0;j--){
            cout << "#";
        }
        if(i!=1){
            cout<<"*";
        }
        cout  << endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=n-i+1;j>1;j--){
            cout << " ";
        }
        if(i!=1){
            cout<<"*";
        }
        for(int j=2;j<=i-2;j++){
            cout << "#";
        }
        for(int j=i-2;j>0;j--){
            cout << "&";
        }
        if(i!=1){
            cout<<"*";
        }
        cout  << endl;
    }
}

int main(){
    pattern();
return 0;
};