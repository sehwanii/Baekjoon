#include <iostream>
#include <algorithm>

using namespace std;

int N;
int dp[100001];


int solve(int n){
	if(n == 0 ||dp[n] != 0)
		return (dp[n]);
	else
		return (dp[n] = min(solve(n-7),min(solve(n-5),min(solve(n-1),solve(n-2))))+1);
}

int main(){
	cin >> N;

	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 2;
	dp[5] = 1;
	dp[6] = 2;
	dp[7] = 1;
	cout << solve(N);

	return 0;
}