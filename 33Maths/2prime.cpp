#include<iostream>
#include<vector>
using namespace std;
// Sieve of Eratosthenes

int countRangePrime(int n){
    vector<bool> isPrime(n+1,true);
    int count = 0;

    for(int i=2;i<n;i++){
        if(isPrime[i]){
            count++;

            for(int j=i*2;j<n;j=j+i){
                isPrime[j]=false;
            }
        }
        
    }
    return count;
}

int main(){
    int n = 50;
    cout << countRangePrime(n) << endl;
    return 0;
}