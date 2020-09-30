//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <algorithm>
using namespace std;

int memo[1000];			///array decleration

int fib(int n){
	if (n == 0) return 1;	/// 0! is 1
	if (n == 1) return 1;
	if (memo[n] != -1){
		//already computed
		//no NEED to recompute
		return memo[n];
	}

	int nthFib = fib(n - 1) + fib(n-2);	//recurrence
	memo[n] = nthFib;
	return nthFib;
}




int main(){
	int N;
	//read N
	cin >> N;
	fill(memo, memo + N + 1, -1);
	int nthFib = fib(N);

	//print Nth Fib
	cout << nthFib;	
}
