#include<iostream>
#include<algorithm>
#include<set>
#include<unordered_set>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Sequential containers

    // Set
    set<int> s; // set ignores duplicate values

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for(auto val: s){
        cout << val << " ";
    }
    cout << endl;

    cout << "lower_bound = " << *(s.lower_bound(4)) << endl;
    cout << "upper_bound = " << *(s.upper_bound(4)) << endl;


    // Other Set -> Multi Set and Unorder Set
        
        // Multi Set
        multiset<int> ms; // set ignores duplicate values
        ms.insert(1);
        ms.insert(2);
        ms.insert(3);
        ms.insert(4);
        ms.insert(5);

        ms.insert(1);
        ms.insert(2);
        ms.insert(3);
        for(auto val: ms){
            cout << val << " ";
        }
        cout << endl;


        // Unordered Set
        unordered_set<int> us; // set ignores duplicate values
        us.insert(1);
        us.insert(2);
        us.insert(3);
        us.insert(4);
        us.insert(5);

        us.insert(1);
        us.insert(2);
        us.insert(3);
        for(auto val: us){
            cout << val << " ";
        }
        cout << endl;

    return 0;
}