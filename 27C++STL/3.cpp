#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Non-sequential containers
    
    // 3. Deque (double ended queue)
    deque<int> d = {1,2,3,4,5};

    for(int val : d){
        cout << val << " ";
    }
    cout << d[2] << endl; // random access possible in deque


    return 0;
}