#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int a,b,c,temp;
vector<int> aa,bb,cc;
int m;
int main(){
	cin >>a >>b>>c;
	m = min(a,min(b,c));
	for(int i = 0; i<a;i++)
	{
		cin>>temp;
		aa.push_back(temp);
	}
	for(int i = 0; i<b;i++){
		cin>>temp;
		bb.push_back(temp);
	}
	for(int i = 0; i< c;i++){
		cin>>temp;
		cc.push_back(temp);
	}
	sort(aa.begin(),aa.end(),greater<int>());
	sort(bb.begin(),bb.end(),greater<int>());
	sort(cc.begin(),cc.end(),greater<int>());
	int sum = 0;
	sum = accumulate(aa.begin(),aa.end(),0);
	sum = accumulate(bb.begin(),bb.end(),sum);
	sum = accumulate(cc.begin(),cc.end(),sum);
	cout<<sum<<"\n";
	for(int i = 0; i< m;i++){
		aa[i] = aa[i] * 0.9;
		bb[i] = bb[i] * 0.9;
		cc[i] = cc[i] * 0.9;
	}
	sum = accumulate(aa.begin(),aa.end(),0);
	sum = accumulate(bb.begin(),bb.end(),sum);
	sum = accumulate(cc.begin(),cc.end(),sum);
	cout<<sum;
}