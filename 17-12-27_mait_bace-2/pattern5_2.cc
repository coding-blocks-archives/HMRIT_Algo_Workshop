// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

/*
1
01
101
0101
*/

int main() {
    int nLines;
    cin >> nLines;
    for (int curLine = 1; curLine <= nLines; ++curLine) {
        int val = curLine % 2;
        for (int curVal = 1; curVal <= curLine; ++curVal) {
            cout << val << " ";
            val = 1 - val;
        }
        cout << endl;
    }
}