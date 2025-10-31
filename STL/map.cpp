#include <bits/stdc++.h>
using namespace std;

void explainMap(){
    // like dictionary in python - stores key, value pairs
    // keys must be unique. values can be anything.
    // sorted acc to keys

    map<int,int> mpp;

    map<int,pair<int,int>> mpp;

    map<pair<int,int>,int> mpp;

    mpp[1]=2;
    mpp.emplace({3,1});

    mpp[{2,3}]=10;

    for (auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];

    auto it=mpp.find(3) // returns iterator pointing to the key value pair where key=3
    cout<<*(it).second; // prints value of that pair

    auto it=mpp.find(5);// points to mpp.end() ie after the last element
    
    // refer YT to know how lower and upper bound work
    auto it=mpp.lower_bound(2);

    auto it=mpp.upper_bound(3);

    // erase, swap, size, empty are same as above.
    
}

void explainMultiMap(){
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap(){
    // same as set and unordered_set difference.

    // MAIN DIFFERENCE IS THAT
    // MAP USES      : O(logn)
    // unordered map : O(1) in almost all cases only the worst case (very rare) it is O(n)
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}