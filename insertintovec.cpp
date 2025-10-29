#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v={50,20,30,40};

    v.insert(v.begin(),300);  // {300,50,20,30,40}

    v.insert(v.begin()+1,2,10); // {300,10,10,50,20,30,40}
    // second argument is number of occurences. 
    // third argument is the value to be added that many times.

    vector<int> copy(2,50); // {50,50}
    // note that copy is the name of the vector. not a function

    // inserting a vector into another vector
    // insert copy into v
    v.insert(v.begin(), copy.begin(), copy.end())
    // v becomes {50,50,300,10,10,50,20,30,40}

    v.size(); // gives no of elements currently in the vector

    v.pop_back(); // removes last element

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2);
    // v1 -> {30,40}
    // v2 -> {10,20}

    v.clear(); // removes all elements. 

    v.empty() // returns true if empty, else false.

    return 0;
}