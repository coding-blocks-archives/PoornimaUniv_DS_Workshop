// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
/*
  *
 ***
*****
*/
int main(){
    int totalLines; cin >> totalLines;

    // incPattern
    int incLines = totalLines / 2 + 1;
    int decLines = totalLines - incLines;

    for(int lineNo = 1; lineNo <= incLines; ++lineNo){
        // print spaces
        int nSpace = incLines - lineNo;
        for(int curSpace = 1; curSpace <= nSpace; ++curSpace){
            cout << " ";
        }
        // print stars
        int nStars = 2 * lineNo - 1;
        for(int curStar = 1; curStar <= nStars; ++curStar){
            cout << "*";
        }
        cout << endl;
    }

    // Dec Pattern
    int nSpace = 1;
    for(int lineNo = decLines; lineNo >= 1; --lineNo){
        for(int curSpace = 1; curSpace <= nSpace; ++curSpace){
            cout << " ";
        }
        ++nSpace;

        int nStars = 2 * lineNo - 1;
        for(int curStar = 1; curStar <= nStars; ++curStar){
            cout << "*";
        }
        cout << endl;
    }
    
}