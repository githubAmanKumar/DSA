#include<iostream>
using namespace std;
// Euclid's Algorithm to calculate GCD(greatest common divisor)

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0)return b;
    return a;
}
int gcdRec(int a, int b){
    if(b==0)return a;
    return gcdRec(b,a%b);
}

int lcm(int a, int b){
    return (a*b)/gcdRec(a,b);
}

int main(){
    // cout << gcd(20,28) << endl;
    // cout << gcdRec(6,12) << endl;

    cout << lcm(20,28) << endl;
    return 0;
}