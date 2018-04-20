// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
/*
1
1 2
1 2 3
*/
int main() {
    int nLines;
    cin >> nLines;
    for (int lineNo = 1; lineNo <= nLines; ++lineNo) {
        // think about one line
        for (int val = 1; val <= lineNo; ++val) {
            cout << val << " ";
        }
        cout << endl;
    }
}