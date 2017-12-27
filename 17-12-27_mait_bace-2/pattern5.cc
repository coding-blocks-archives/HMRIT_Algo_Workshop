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
        int val;    // ????
        if (curLine % 2 == 0) {
            val = 0;
        } else {
            val = 1;
        }

        // print nValues
        int nVal = curLine;
        for (int curVal = 1; curVal <= nVal; ++curVal) {
            cout << val << " ";

            if (val == 0) {
                val = 1;
            } else {
                val = 0;
            }
        }

        cout << endl;
    }


}