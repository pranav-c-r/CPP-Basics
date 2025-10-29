#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v = {20,10,22};
    vector<int>::iterator it=v.begin();
    /* it points to the first element memory location
     note that v.begin() is the memory address, not element
     *(v.begin()) gives element inside that location

     TO PRINT ALL OF THEM :
    */
    cout << *(it) << " ";
    it++;
    cout << *(it) << " ";
    it=it+2;
    // use for/while loop

    vector<int>::iterator it2=v.end();  
    // note that end doesnt point to last element
    // it points to the address just after last element
    // you have to do it-- to point to last element


    // these next two are never ever used (rend and rbegin)
    // rend -> reverse end -> address just before the actual first element
    // rbegin -> reverse begin -> points to actual last element
    // also the iterator will move in backward direction (opposite)
    vector<int>::iterator it3=v.rend();
    vector<int>::iterator it4=v.rbegin();
    
    return 0;
}