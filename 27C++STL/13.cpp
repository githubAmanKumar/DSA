#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Algorithms
    
    int n = 15;
    long int n2 = 15;
    long long int n3 = 15;

    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(n2) << endl;
    cout << __builtin_popcountll(n3) << endl;

    return 0;
}