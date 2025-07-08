#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long n,k,c,m;
vector<int> v;

void bs(vector<int> v, long long start, long long end){
  if(start>=end){
    cout<<end;
    return;
  }
  long long sum = 0;
  for(int i = 0; i<v.size();i++){
    sum+= v[i]/end;
  }
  if(sum<n){
    bs(v, start, (start+end)/2);
  }
  else
    bs(v,end, end + (end-start+1)/2);
}

int main(){
  cin>>k>>n;
  m=-1;
  for(int i = 0;i<k;i++){
    cin>>c;
    if(c>m)
      m=c;
    v.emplace_back(c);
  }
  bs(v, 1, m);
}