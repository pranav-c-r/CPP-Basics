#include <bits/stdc++.h>
using namespace std;

/*
    main usage of vectors:
    in array when u define it u declare its size. you need to know the size
    required. and this cannot be changed after declaration.
    but in vector the size allocation is dynamic
    initially it will be empty, then you can fill in as many elements as
    needed. no restraints. 
*/

void explainVector(){
    vector<int> v;
    
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> x(5,100); // vector with 5 instances of 100 is initialized
                          // {100,100,100,100,100}
    vector<int> y(5);     // vector with 5 instances of 0 or garbage value is initialized 
                          // {0,0,0,0,0}

    vector<int>v1(5,20);  // {20,20,20,20,20}
    vector<int>v2(v1);    // {20,20,20,20,20} but copy of v1 (not same)
    // In above examples even if we declare size of vector as 5, it is
    // still dynamic. You can add more. No limits.

    /*
    accessing elements in a vector : 3 ways
    1. direct indexing : v[0]
    2. at method       : v.at(0)
    3. using iterators. 
    */

    cout << v[0] << endl;     // MOST COMMONLY USED.
    cout << v.at(0) << endl;  // NOT USED.
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}