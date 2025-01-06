#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Algorithms
    // Next Permutation
        string s = "abc";
        next_permutation(s.begin(),s.end());
        cout << s << endl ;

    return 0;
}