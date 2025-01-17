#include<iostream>
using namespace std;
// Maths for DSA - One Shot | Euclid's Algorithm | Sieve of Eratosthenes | Modular Arithmetics

bool isArmstrong(int n){
    int copyN = n;
    int sumOfCubes = 0;
    while(n!=0){
        int digit = n%10;

        n=n/10;
        sumOfCubes+=digit*digit*digit;
    }
    return sumOfCubes==copyN;
}

int main(){
    int n = 1;
    if(isArmstrong(n)){
        cout << "Armstrong number!" << endl;
    }else{
        cout << "Not an armstrong number!" << endl;
    }
    return 0;
}