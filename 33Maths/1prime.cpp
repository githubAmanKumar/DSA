#include<iostream>
using namespace std;
// Maths for DSA - One Shot | Euclid's Algorithm | Sieve of Eratosthenes | Modular Arithmetics

string prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "non prime";
        }
    }
    return "prime";
}

int main(){
    int n = 6;
    cout << prime(n) << endl;
    return 0;
}