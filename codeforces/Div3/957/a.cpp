#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,b,c;
	int test;
	long long int MAX;
	cin >>test;
	while(test--){
		cin >> a>>b>>c;
		MAX = -99999999999;
		for (int i = 0; i< 5; i++){
			if (a<=b&& a<=c)
				a++;
			else if (b<=a&&b<=c)
				b++;
			else if (c <=a&&c<=b)
				c++;
		}
		cout << a*b* c<<"\n";
	}

}