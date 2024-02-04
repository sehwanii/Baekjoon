#include <iostream>

using namespace std;

int N;
int arr[128][128];

int solve(int a, int b, int c, int d){
	int sum = 0;

	if(a==c)
		return arr[a][b];
	for(int i = a; i<=c; i++){
		for(int j = b; j<=d;j++){
			sum += arr[i][j];
		}
	}
	if (sum == (c-a + 1)*(d-b +1))
		return 1;
	else if(sum == 0)
		return 0;
	else if(c-a == 1){
		return (sum);
	}
	else{
		return (solve(a,b,(a + c)/2,(b + d)/2) + solve((a+c+1)/2,b,c,(b+d)/2) + solve(a,(b+d+1)/2,(a+c)/2,d) + solve((a+c+1)/2,(b+d+1)/2, c,d));
	}
}

int main(){
	// N = 2;
	// arr[0][0] = 1;
	// arr[0][1] = 1;
	// arr[1][0] = 1;
	// arr[1][1] = 0;
	cin>>N;
	for(int i = 0; i< N;i++){
		for(int j = 0;j<N;j++){
			cin >>arr[i][j];
		}
	}
	int temp =solve(0,0,N -1,N -1);
	cout << N*N -temp<<"\n"<<temp; 
}