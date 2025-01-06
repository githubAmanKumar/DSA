#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Sequential containers

    // Stack - LIFO

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    stack<int> s2;
    s2.swap(s);

    cout << "top = " << s.top() << endl;
    cout << "top = " << s2.top() << endl;

    return 0;
}