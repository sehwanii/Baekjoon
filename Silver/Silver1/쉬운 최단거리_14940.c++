#include <iostream>
#include <queue>
#include <vector>
#define MAX_INT 987654321
#define MIN_INT -987654321

using namespace std;

int temp;
int ret[1002][1002];
int n,m;
queue <pair <int,int> > q;
int main(){
	cin >>n>>m;
	for (int i = 0; i< n ;i++){
		for(int j = 0; j<m;j++)
		{
			cin>>temp;
			if(temp == 2){
				q.push(make_pair(i+1,j+1));
			}
			else if(temp == 1)
				ret[i+1][j+1] = MAX_INT;
			else
				ret[i+1][j+1] = MIN_INT;
		}
	}
	int x,y;
	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		if(ret[x-1][y]>ret[x][y] + 1)
		{
			q.push(make_pair(x-1,y));
			ret[x-1][y] = ret[x][y] +1;
		}
		if(ret[x+1][y]>ret[x][y] + 1)
		{
			q.push(make_pair(x+1,y));
			ret[x+1][y] = ret[x][y] +1;
		}
		if(ret[x][y-1]>ret[x][y] + 1)
		{
			q.push(make_pair(x,y-1));
			ret[x][y-1] = ret[x][y] +1;
		}
		if(ret[x][y+1]>ret[x][y] + 1)
		{
			q.push(make_pair(x,y+1));
			ret[x][y+1] = ret[x][y] +1;
		}
	}
	for(int i = 1; i<= n;i++ ){
		for(int j = 1; j <= m;j++){
			if(ret[i][j] == MIN_INT)
				cout<<"0 ";
			else if(ret[i][j] >= MAX_INT)
				cout<<"-1 ";
			else
				cout<<ret[i][j]<<" ";
		}
		cout<<"\n";
	}
}