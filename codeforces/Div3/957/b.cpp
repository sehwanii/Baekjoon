#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int> v;
priority_queue<int> q;
int main(){
	int test,n,k,t;
	cin >>test;

	while(test--){
		int cnt = 0;
		cin>>n>>k;
		for(int i = 0;i < k ;i ++){
			cin >>t;
			q.push(t);
		}
		int Max = q.top();
		q.pop();
		while (!q.empty()){
			int z = q.top();
			q.pop();
			if (z == 1)
				cnt ++;
			else
				cnt += z *2 -1;
		}
		cout << cnt << "\n";
	}

}