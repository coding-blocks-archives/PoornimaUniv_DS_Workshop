// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i = 1; i <= n; ++i){
        ans *= i;
    }
    return ans;
}

int main(){
    int n;
    int r;
    cin >> n >> r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ans = nfact / rfact / nrfact;
    cout << ans;
     /*for(int i = 1; i <= n; ++i){
        nfact = nfact * i;
    }

    int rfact = 1;
    for(int i = 1; i <= r; ++i){
        rfact = rfact * i;
    }

    int nrfact = 1;
    for(int i = 1; i <= n - r; ++i){
        nrfact = nrfact * i;
    }*/
}