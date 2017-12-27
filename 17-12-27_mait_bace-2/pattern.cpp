/*
1
1 2
1 2 3
1 2 3 4
*/

// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main() {
    int nLines;
    cin >> nLines;

    for(int curRow = 1; curRow <= nLines; ++curRow){
        // one line
        for(int val = 1; val <= curRow; ++val){
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}