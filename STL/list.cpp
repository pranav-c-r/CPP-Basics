#include <bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5);   // {5,2,4}
    ls.emplace_front(); // {0,5,2,4}

    /* push and emplace might be used interchangeably
    they both do the same thing but difference in how they do
    push creates a temporary object in memory then pushes
    emplace doesnt create temporary memory so it is faster
    EMPLACE IS FASTER THAN PUSH.
    */

    // rest functions same as vector
    // begin, end, rend, rbegin, clear, insert, size, swap
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}