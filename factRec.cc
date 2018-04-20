// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int fact(int n){
    if (n <= 0){
        return 1;
    }

    int smallFact = fact(n - 1);
    int ans = n * smallFact;
    return ans; 
}

void incPrint(int n){
    // if (n <= 0){
    //     return;
    // }

    incPrint(n - 1);
    cout << n << " ";
}


int main(){
    // int n;
    // cin >> n;
    // int ans = fact(n);
    // cout << ans;   

    int n;
    cin >> n;
    incPrint(n);
}