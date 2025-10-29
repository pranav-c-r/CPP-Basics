/*
STL is a compilation of algorithms, containers, iterators, functions etc
in a minimized version so that you dont have to spend time writing code
for any of these.

Pair is present in utility library
*/
#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>> r={1,{3,4}};
    cout<<r.first<<" "<<r.second.second<<" "<<r.second.first;
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}


