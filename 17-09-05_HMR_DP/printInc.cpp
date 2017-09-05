//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

void printInc(int N){
	if (N == 0) return;
	printInc(N - 1);
	cout << N << " ";
}

int main(){
	int N;
	cin >> N;
	printInc(N);	
}