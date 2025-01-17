#include<iostream>
#include<cmath>
using namespace std;
// Maths for DSA - One Shot | Euclid's Algorithm | Sieve of Eratosthenes | Modular Arithmetics

void printDigits(int n){
    int count = 0;
    int sum=0;
    while(n!=0){
        int digit = n%10;
        cout << digit << endl;

        n=n/10;
        count++;
        sum+=digit;
    }
    cout << "count of digits = " << count << endl;
    cout << "sum of digits = " << sum << endl;
}

int main(){
    int n = 3586;
    printDigits(n);

    // cout << "count of digits = " << (int)(log10(n)+1) << endl; // shortcut to find count (rarely useful)
    return 0;
}