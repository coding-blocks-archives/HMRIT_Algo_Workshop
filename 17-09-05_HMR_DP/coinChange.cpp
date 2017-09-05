//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <algorithm>
using namespace std;

int deno[100];
int N;	//no of denominations
int memo[1000];

int change(int amt){
	if (amt < 0) return 100000000;

	if (amt == 0) return 0;

	if (memo[amt] != -1) return memo[amt];

	int best = 100000;
	for(int i = 0; i < N; ++i){
		int curDeno = deno[i];
		int remAmt = amt - curDeno;
		int remAns = change(remAmt);
		best = min(best, 1 + remAns);
	}
	return memo[amt] = best;

}


int main(){
	cin >> N;

	//read the denominations
	for(int i = 0; i < N; ++i) cin >> deno[i];

	int amount;
	cin >> amount;
	fill(memo, memo + amount + 1, -1);
	int ans = change(amount);
	cout << ans;	
}