#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

int main(){
  
  cin>>n>>m;
  if(n==1)
    cout<<1;
  else if(n==2){
    if(m<3)
      cout<<1;
    else if(m<5)
      cout<<2;
    else
      cout<<min((m+1)/2,4);
  }
  else{
    if(m<=4)
      cout<<m;
    else if(m<=5)
      cout<<4;
    else
      cout<<m-2;
  }
}