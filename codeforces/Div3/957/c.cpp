#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(){
	int test,n,m,k;
	cin >>test;

	while(test--){
		cin >>n>>m>>k;
		if (k>=m){
			for(int i = n; i> 0 ;i--)
				cout << i << " ";
		}
		else{
			for(int i = 1; i <=n ;i++)
				cout << i << " ";
		}
		cout << "\n";
	}

}