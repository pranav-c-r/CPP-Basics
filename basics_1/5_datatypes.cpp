#include <bits/stdc++.h>   
using namespace std;  

int main(){
    // int
    int x=10;
    // long
    long x=15;
    // long long
    long long x=15000000;

    //float
    float x = 8.767;
    float y = 5;

    //double
    double z=6;

    // IMPORTANT NOTE :
    // if you say float x = 5 and then print x, it will simply print 5 (not 5.0)

    cout << x << " " << y << " " << z;

/*  when to use int, long, long long etc:
    generally use int -> -10^9 to 10^9
    long -> -10^12 to 10^12
    long long -> -10^18 to 10^18 */
    return 0;
}