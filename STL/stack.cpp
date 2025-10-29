#include <bits/stdc++.h>
using namespace std;

void explainStack(){
    stack<int> st;
    st.push(1);     // {1}
    st.push(2);     // {2,1}
    st.push(3);     // {3,2,1}
    st.push(4);     // {3,3,2,1}
    st.emplace(5);  // {5,3,3,2,1}

    st.top();    // prints 5

    st.pop();    // stack looks like {3,3,2,1}

    st.size();   // 4

    st.empty(); // true or false

    stack<int>st1,st2;
    st1.swap(st2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}