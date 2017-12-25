// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin >> n;

    // for(int curNum = 1; curNum <= n; curNum = curNum + 2){
    //     cout << curNum << " ";
    // }


    for(int curNum = 1; curNum <= n; ++curNum){
        if (curNum % 2 == 1){    // curNum is odd??...NOT = BUT ==
            cout << curNum << " ";
        }
    }

}