#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// containers
// iterators begin()-end();
// algorithms
// functors

// Non-sequential containers
    // 1. vectors-
    vector<int> vec = {1,2,3};
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    cout << "size - " << vec.size() << endl;
    cout << "capacity - " << vec.capacity() << endl;
    for(int val : vec){
        cout << val << " ";
    }

    cout << *(vec.begin()+1) << endl; // Iterators
    cout << *(vec.end()-1) << endl;

    for(auto iter = vec.begin();iter!=vec.end();iter++){
        cout << *iter << " ";
    }
    cout << endl;
    for(auto iter = vec.rbegin();iter!=vec.rend();iter++){
        cout << *iter << " ";
    }

    return 0;
}