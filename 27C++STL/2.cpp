#include<iostream>
#include<vector>
#include<algorithm>
#include<list>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Non-sequential containers
    
    // 2. List (doubly linkedlist) - random access possible
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);
    // l.pop_back();
    // l.pop_front();
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}