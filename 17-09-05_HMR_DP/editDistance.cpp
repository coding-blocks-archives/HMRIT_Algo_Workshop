//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
using namespace std;

int editDistance(string A, string B){
	//A-->B
	if (B.size() == 0) return A.size();	//deletion
	if (A.size() == 0) return B.size();	//insertion

	// if equal
	if (A[0] == B[0]) return editDistance(A.substr(1), B.substr(1));

	//replacement
	string repA = A.substr(1);
	string repB = B.substr(1);
	int rep = editDistance(repA, repB);	

	//deletion
	string delA = A.substr(1);
	int del = editDistance(delA, B);

	//insertion
	string insB = B.substr(1);
	int ins = editDistance(A, insB);

	return 1 + min(rep, min(del, ins));


}

int main(){
	string A, B;
	cin >> A >> B;

	int ans = editDistance(A, B);
	cout << ans;

}