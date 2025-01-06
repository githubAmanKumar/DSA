#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Algorithms
    // Reverse
        vector<int> vec3 = {1,2,3,4,5};
        reverse(vec3.begin(),vec3.end());
        for(auto p: vec3){
            cout << p << " ";
        }

    return 0;
}