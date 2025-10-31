#include <bits/stdc++.h>
using namespace std;

void explainExtra(){
    sort(a,a+n);
    sort(v.begin(),v.end());
    // end value is not included.

    sort(a+2,a+4);
    
    sort(a,a+n,greater<int>);
    // greater<int> is a in built comparator.

    // what if i want to sort in my way ???
    // ie any other way not just simply asc or desc then what ??
    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    // sort it according to second element
    // if second elt is same then sort acc to first elt descending order

    sort(a,a+n,comp);
    // {{4,1},{2,1},{1,2}};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}