#include <iostream>

#define MINE -987654321
using namespace std;

int input[1002][1002];
int output[1002][1002];
string s;
int N,temp;
int main(){
	cin >> N;
	for (int i = 1; i<= N; i++){
		cin>>s;
		for(int j = 1 ;j <=N;j++){
			if (s[j-1] != '.'){
				output[i][j] = MINE;
				temp = s[j-1] - '0';
				output[i-1][j-1] += temp;
				output[i-1][j] += temp;
				output[i-1][j+1] += temp;
				output[i][j-1] += temp;
				output[i][j+1] += temp;
				output[i+1][j-1] += temp;
				output[i+1][j] += temp;
				output[i+1][j+1] += temp;
			}
		}
	}
	for(int i = 1; i<=N;i++){
		for(int j = 1; j<= N;j++){
			if(output[i][j]<0)
				cout<<"*";
			else if(output[i][j]>=10)
				cout<<"M";
			else
				cout<<output[i][j];
		}
		cout<<"\n";
	}
}