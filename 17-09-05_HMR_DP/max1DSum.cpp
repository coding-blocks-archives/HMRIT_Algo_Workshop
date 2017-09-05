//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

int arr[100];
 
int kadene(int N){
	int * memo = new int[N];

	fill(memo, memo + N, 0);

	int best = -1;
	memo[0] = arr[0];	//base case
	
	for(int i = 1; i < N; ++i){
		memo[i] = max(memo[i-1], 0) + arr[i];
		best = max(best, memo[i]);
	}

	// int ans = memo[N-1];
	delete memo;
	return best;
}

int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; ++i){
		cin >> arr[i];
	}	

	int ans = kadene(N);
	cout << ans << endl;
}