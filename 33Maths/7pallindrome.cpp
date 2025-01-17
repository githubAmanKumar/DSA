#include<iostream>
#include<limits.h>
using namespace std;

int pallindrome(int x) {
    if(x<0)return 0;
    int digit = 0,ans=0,y=x;
        while(x!=0){
            digit = x%10;
            x /= 10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            ans= (ans*10) +digit;
        }
    return ans==y;
}

int main(){
    cout << pallindrome(1221) << endl;
    
    return 0;
}