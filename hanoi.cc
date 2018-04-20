// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void hanoi(int nDisc, char src, char dest, char helper){
    if (nDisc == 0) return;
    hanoi(nDisc - 1, src, helper, dest);
    cout << "Disc " << nDisc << " : " << src << "-->" << dest << endl;
    hanoi(nDisc - 1, helper, dest, src);
}

int main(){
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');   
}