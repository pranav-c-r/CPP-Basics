#include <bits/stdc++.h>
using namespace std;

void explainPQ(){
    priority_queue<int>pq; // default max heap

    // for every push element is correctly stored in sorted order.
    // with maximum element at first position
    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    pq.top();       // 10

    pq.pop();       // {8,5,2} becoz FIFO (largest elt removed cuz its first elt)

    // size, swap, empty functions same as others
    
    // DEFAULT ONE IS MAX HEAP
    // MINIMUM HEAP
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}