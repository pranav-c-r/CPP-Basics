#include <bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    q.push(1);      // {1}
    q.push(2);      // {1,2}
    q.emplace(4);   // {1,2,4}

    q.back()+=5;    // {1,2,9}

    cout<<q.back();     // prints 9

    cout<<q.front();    // prints 1

    q.pop();    // {2,9} FIFO means first one is removed.

    cout<<q.front();    // prints 2

    // size, swap, empty functions same as stack.
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}