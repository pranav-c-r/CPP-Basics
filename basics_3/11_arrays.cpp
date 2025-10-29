#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];  // take array elements as input
    arr[3]+=10;   // you can manipulate the values manually like this
    arr[4]=16;    // you can reassign, edit etc.
    cout << arr[3];     // print 4th element
    return 0;

/*  now if you try to input a float/double like 7.7 then it will trim itself to 
    nearest int which is 7. (not rounding off, just truncate.)           */
}