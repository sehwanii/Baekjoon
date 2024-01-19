#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, temp;
long long ret;
vector <int> v;
int main(){
	cin >>N;
	for(int i = 0; i<N;i++){
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	for(int i = 1; i<= N;i++)
		ret += abs(v[i - 1] - i);
	cout<<ret;
}