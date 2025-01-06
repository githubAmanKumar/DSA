#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Non-sequential containers
    
    // 4. Pair
    pair<char,pair<string,int>> p = {'a',{"Aman",5}};
    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;

    vector<pair<int,int>> pairVec = {{1,2},{2,3},{3,4}};

    pairVec.push_back({4,5}); // insert
    pairVec.emplace_back(5,6); // in-place objects create

    for(auto val:pairVec){
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;    

    return 0;
}