#include <iostream>
#include <queue>
using namespace std;

int n,m,c;
queue<int> q;
int main(){
  cin>>n>>m;
  for(int i = 0 ;i < n ;i++){
    q.push(i+1);
  }
  cout<<"<";
  while(!q.empty()){
    for(int i = 0; i<m-1;i++){
      c = q.front();
      q.pop();
      q.push(c);
    }
    c = q.front();
    q.pop();
    cout<<c;
    if(!q.empty())
      cout<<", ";
  }
  cout<<">";
}

/*
7 3
예제 출력 1 
<3, 6, 2, 7, 5, 1, 4>
*/