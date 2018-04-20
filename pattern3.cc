// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
/*
ABCDDCBA
ABCCBA
ABBA
AA
*/

int main(){
    int nLines; cin >> nLines;
    for(int lineNo = nLines; lineNo >= 1; --lineNo){
        char val = 'A';
        // incOrder
        for(int i = 1; i <= lineNo; ++i){
            cout << val;
            ++val;
        }
        for(int i = 1; i <= lineNo; ++i){
            --val;
            cout << val;
        }
        cout << endl;
    }
    
}