#include <iostream>

using namespace std;

int N;
long long sum;
long long arr[40];

long long solve(int n)
{
	long long sum = 0;
	if (arr[n])
		return (arr[n]);
	for (int i = 0; i < n; i++)
		sum += solve(i) * solve(n - i - 1);
	return (arr[n] = sum);
}

int main(){
	cin>>N;
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	cout << solve(N);
}