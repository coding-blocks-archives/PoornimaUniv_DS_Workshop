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
    int nLines; cin >> nLines;
    for(int lineNo = 1; lineNo <= nLines; ++lineNo){
        // print spaces
        int nSpace = nLines - lineNo;
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
    
}