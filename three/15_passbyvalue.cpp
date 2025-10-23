#include <bits/stdc++.h>
using namespace std;

// in pass by value, function can't make changes to the original string
// it makes changes only to the copy.

void doSomething(string s){
    s[0]='t';
    cout << s << endl;
}

int main(){
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}