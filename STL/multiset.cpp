#include <bits/stdc++.h>
using namespace std;

void explainMultiSet(){
    // sorted but not unique version of set

    multiset<int> ms;
    ms.insert(1);   //{1}
    ms.insert(1);   //{1,1}
    ms.insert(1);   //{1,1,1}

    ms.erase(1); // removes all the 1's

    int cnt=ms.count(1);

    // for erasing only a single 1 :
    ms.erase(ms.find(1));

    // begin and end position specified [begin,end)
    ms.erase(ms.find(1),ms.find(1)+2);

    // rest all functions same as set
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}