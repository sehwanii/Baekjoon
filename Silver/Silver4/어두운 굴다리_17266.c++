#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int len, num;
double temp;
vector<int> v;

int main(){
	cin >> len >> num;
	if (num == 1)
	{
	    cin >> temp;
	    cout<<ceil(temp / 2);
	}
	for (int i = 0; i < num; i++){
		cin >> temp;
		if (i == 0 && num != 1)
		    v.push_back((int)temp);
		else
		{
			v.push_back(ceil(((temp - (double)v[i - 1]) /2)));
		}
	}
	v.push_back(len - temp);
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i< num + 1 ;i++)
	    cout<<v[i];
}
