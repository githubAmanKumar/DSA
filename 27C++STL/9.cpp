#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Algorithms
    // Sorting
        vector<int> vec = {3,5,1,8,2};
        sort(vec.begin(),vec.end(),greater<int>());
        for(auto val: vec){
            cout << val << " ";
        }
        vector<pair<int,int>> vec2 = {{3,1},{2,1},{7,1},{5,2}};
        sort(vec2.begin(),vec2.end(),comparator);
        for(auto p: vec2){
            cout << p.first << " " << p.second << endl;
        }

    return 0;
}