#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Sequential containers

    // Queue - FIFO

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    priority_queue<int,vector<int>,greater<int>> pq;

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}