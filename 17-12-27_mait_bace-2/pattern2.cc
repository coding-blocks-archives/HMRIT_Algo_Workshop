// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
/*
5
5 4
5 4 3 
5 4 3 2 
5 4 3 2 1
*/



int main(){
    int nLines;
    cin >> nLines;

    for(int curLine = 1; curLine <= nLines; curLine = curLine + 1) {
        // think about one line
        int val = nLines;
        for(int ithVal = 1; ithVal <= curLine; ++ithVal){
            cout << val << " ";
            --val;
        }
        cout << endl;
    }
    
}