// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 0) {
        return 1;
    }

    int smallFact = fact(n - 1);
    int ans = n * smallFact;
    return ans;
}

void incPrint(int n) {
    if (n <= 0) {
        return;
    }

    incPrint(n - 1);
    cout << n << " ";
}

void decPrint(int n) {
    if (n <= 0) {
        return ;
    }
    cout << n << " ";       // 5 maine kar lia
    decPrint(n - 1);        // recursion ne
}

void printNum(int n) {
    if (n == 0){
        return;
    }
    printNum(n / 10);   // recursion se
    int unitDig = n % 10;

    switch (unitDig) {
        case 0 : cout << "zero "; break;
        case 1: cout << "one "; break;
        case 2: cout << "two "; break;
        case 3: cout << "three "; break;
        case 4: cout << "four "; break;
        case 5: cout << "five "; break;
        case 6: cout << "six "; break;
        case 7: cout << "seven "; break;
        case 8: cout << "eight "; break;
        case 9: cout << "nine "; break;
    }

}

int main() {
    // int n;
    // cin >> n;
    // int ans = fact(n);
    // cout << ans;

    int n;
    cin >> n;
    // incPrint(n);
    // decPrint(n);
    printNum(n);
}