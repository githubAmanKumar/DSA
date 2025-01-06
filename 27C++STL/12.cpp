#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Algorithms
    // min, max, swap

    cout << max(4,5) << " " << min(5,6);

    int a=5,b=10;
    swap(a,b);
    cout << "a" << " = " << a;

    vector<int> vec4 = {1,2,7,3,4,5};
    cout << *max_element(vec4.begin(),vec4.end()) << endl;
    cout << *min_element(vec4.begin(),vec4.end()) << endl;

    cout << binary_search(vec4.begin(),vec4.end(),4) << endl;


    return 0;
}