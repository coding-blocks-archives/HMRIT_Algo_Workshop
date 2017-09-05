//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com
#include <iostream>
using namespace std;
int price[100];
int memo[110][110];

int maxProfit(int be, int en, int yr){
	if (be > en) return 0;

	if (be == en){
		int curProfit = price[be] * yr;
		return curProfit;
	}

	if (memo[be][en] != -1) return memo[be][en];

	//lets sell be bottle
	int left = price[be] * yr + maxProfit(be + 1, en, yr + 1);
	int right = price[en] * yr + maxProfit(be, en - 1, yr + 1);
	return memo[be][en] = max(left, right);
	// return  max(left, right);
}	


int main(){
	int N;	//no of bottles
	cin >> N;

	for(int i = 0; i < N; ++i) cin >> price[i];

	//setting the memopad
	for(int i = 0; i <= N; ++i){
		for(int j = 0; j <= N; ++j){
			memo[i][j] = -1;
		}
	}

	int ans = maxProfit(0, N - 1, 1);
	cout << ans;	
}