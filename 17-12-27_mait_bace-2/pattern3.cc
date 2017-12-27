// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
/*
5
4 4
3 3 3
*/


int main(){
    int nLines;
    cin >> nLines;
    int val = nLines;

    for(int curLine = 1; curLine <= nLines; ++curLine){
        for(int ithVal = 1; ithVal <= curLine; ++ithVal){
            cout << val;
        }
        --val;
        cout << endl;
    }
}