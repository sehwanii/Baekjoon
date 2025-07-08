#include <iostream>
#include <map>
using namespace std;

int a,c;
map<int, int> m;

int main(){

  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin>>a;
  for(int i = 0; i< a;i ++){
    cin>>c;
    m[c]++;
  }
  cin>>a;
  for(int i = 0; i< a; i++){
    cin>>c;
    cout<<m[c]<<" ";
  }
}