#include <iostream>
#include <vector>
#include <algorithm>
//7 : 544
//8 : 2770
using namespace std;
long int arr[101];
int combi[101][101];

long int combination(int n, int r)
{
    if(n == r || r == 0) 
        return 1; 
    else if(combi[n][r])
		return combi[n][r];
	else{
		combi[n][r]= (combination(n - 1, r - 1) + combination(n - 1, r))%1000000;
		return combi[n][r];
	}

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	arr[0]=1;
	arr[1]=1;
	arr[2]=1;
	arr[3]=2;
	arr[4]=5;
		
	if(n==1){
		cout<<1;
		return 0;
	}	
	else if( n == 2){
		cout<<2;
		return 0;
	}
	else if( n == 3){
		cout<<4;
		return 0;
	}
	long long int sum=0;
	for(int j = 4;j<=n;j++){
		for(int i = 0; i<j;i++){
			sum+=combination(j-1,i)*((arr[i]*arr[j-i-1])%1000000);
		}
		arr[j]=(sum/2)%1000000;
		sum=0;
	}
	cout<<(arr[n]*2)%1000000;
}