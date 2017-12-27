// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

/*
   1
  232
 34543
*/

int main(){
    int nLines;
    cin >> nLines;

    for(int curRow = 1; curRow <= nLines; ++curRow){

        // spaces 
        int nSpace = nLines - curRow;
        for(int curSpace = 1; curSpace <= nSpace; ++curSpace){
            cout << " ";
        }

        //[3...4..5]
        int maxVal = 2 * curRow - 1;
        for(int val = curRow; val <= maxVal; ++val){
            cout << val;
        }

        //[4...3]
        for(int val = 2 * curRow - 2; val >= curRow; --val){
            cout << val;
        }

        // enter
        cout << endl;
    }
    
}