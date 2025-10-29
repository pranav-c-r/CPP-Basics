#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v = {10,20,30,40,50};
    
    v.erase(v.begin()+1); // removes the second element
    v.erase(v.begin()+2,v.begin()+4); // removes third and fourth element
    // note that in this case it takes in a range (a,b)
    // a is included, b is not included. 
    return 0;
}