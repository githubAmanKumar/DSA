#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,3};

    for(int val : vec){
    cout << val << " ";
    }
    cout << "\n";

    cout << "size = " << vec.size()<<"\n";

    vec.push_back(4);

    for(int val : vec){
    cout << val << " ";
    }
    cout << "\n";
    cout << "size = " << vec.size()<<"\n";

    vec.pop_back();

    for(int val : vec){
    cout << val << " ";
    }
    cout << "\n";
    cout << "size = " << vec.size()<<"\n";
    cout << "front = " << vec.front()<<"\n";
    cout << "back = " << vec.back()<<"\n";
    cout << "at 0 index = " << vec.at(0)<<"\n";

// Unique number
    vector<int> vect = {4,1,2,2,4,6,1};
    int a = sizeof(vect)/sizeof(int);
    int ans = 0;
    for(int val : vect){
        ans^=val;
    }
    cout << "unique number = " << ans <<"\n";

    return 0;
}