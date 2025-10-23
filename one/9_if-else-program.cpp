#include <iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks;
    if (marks<25){
        cout << "F";
    }
    else if (marks<=44){
        cout << "D";
    }
    else if (marks<=64){
        cout << "C";
    }
    else if (marks<=84){
        cout << "B";
    }
    else {
        cout << "A";
    }

    return 0;
}