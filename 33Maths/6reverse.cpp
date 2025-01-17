#include<iostream>
#include<limits.h>
using namespace std;

int reverseNum(int x) {
    int digit = 0,ans=0;
        while(x!=0){
            digit = x%10;
            x /= 10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            ans= (ans*10) +digit;
        }
    return ans;
}

int main(){
    cout << reverseNum(123) << endl;
    
    return 0;
}