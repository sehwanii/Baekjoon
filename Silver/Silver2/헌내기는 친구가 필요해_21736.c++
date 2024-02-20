#include <iostream>
#include <queue>
using namespace std;

int row, col, ret;
string s;
int arr[602][602];
queue <pair<int,int> > q;
int main(){
	cin >> row >> col;
	for(int i = 0 ; i < row ;i++){
		cin >> s;
		for(int j = 0 ; j< col; j++){
			switch(s[j]){
				case 'O' : arr[i+1][j+1] = 1;break;
				case 'P' : arr[i+1][j+1] = 2;break;
				case 'I' : q.push(make_pair(i+1, j+1));arr[i+1][j+1] = 1;break;
				case 'X' :arr[i+1][j+1] = 0;
			}
		}
	}
	while (!q.empty()){
		pair<int,int> temp = q.front();
		q.pop();
		if(arr[temp.first][temp.second] == 0)
			continue;
		if(arr[temp.first][temp.second] == 2)
			ret++;
		arr[temp.first][temp.second] = 0;
		q.push(make_pair(temp.first - 1, temp.second));
		q.push(make_pair(temp.first, temp.second - 1));
		q.push(make_pair(temp.first, temp.second + 1));
		q.push(make_pair(temp.first + 1, temp.second));
	}
	if (ret == 0)
		cout <<"TT";
	else
		cout<< ret;
}