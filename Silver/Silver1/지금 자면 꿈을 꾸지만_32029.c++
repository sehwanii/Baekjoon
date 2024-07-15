#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

priority_queue<int, vector<int>, greater<int> > q;

int main(){
	int N, A, B, t, sleep;
	int cnt = 0;
	int i =1;
	cin >> N >> A >> B;

	for (int j = 0; j< N;j++)
	{
		cin >> t;
		q.push(t);
	}
	if (B > N)
		sleep = 0;
	else
		sleep = (q.top() - A)/ (B - 1);
	cout << sleep<<endl;
	while (!q.empty()){
		if (q.top() - (A-sleep) * i >= 0){
			cnt++;
			i++;
			q.pop();
		}
		else
			q.pop();
	}
	cout <<cnt;
}

// A - sleep + sleep * b < t1
// A + SLEEP(B-1) = T1