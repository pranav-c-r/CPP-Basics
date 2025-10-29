#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v = {10,20,30,40};
    cout<<v.back(); // prints last element
    
    // printing entire vector using iterator
    for (vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    // using auto -> automatically assigns data type according to the data
    // eg : auto a = 5  => a will be int automatically.
    for (auto it=v.begin(),it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    // using simple for-each loop
    for (int x:v){   // you can also use auto x
        cout << x << " ";
    }
    return 0;
}