#include <bits/stdc++.h>
using namespace std;

void explainSet(){
    // set is sorted and store only unique values
    set<int> st;
    st.insert(1);   // {1}
    st.emplace(2);  // {1,2}
    st.insert(2);   // {1,2}
    st.insert(4);   // {1,2,4}
    st.insert(3);   // {1,2,3,4}

    // begin, end, rbegin, rend, size, empty, and swap are same as others.

    //{1,2,3,4,5}
    auto it=st.find(3); // returns an iterator that points to 3

    auto it=st.find(6); // if element not in set it returns s.end()
                        // ie an iterator that points to right after the last elt

    st.erase(5);    // erases 5, takes logarithmic time O(logn)

    int cnt=st.count(1); // always 0 or 1, since allows only unique elements max is 1

    auto it=st.find(3);
    st.erase(it);   // takes constant time O(1)

    // {1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);  // {1,4,5}  [first,last)

    // lower_bound() and upper_bound() function works in the same way as in vectors
    // This is the syntax :
    auto it=st.lower_bound(2);
    auto it=st.upper_bound(3);

    // all other functions like size, empty, swap, begin etc are all similar to vector

    // In set all operations like insert and erase occur in O(logn) time complexity
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}