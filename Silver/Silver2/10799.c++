#include <iostream>

using namespace std;
int level, blocks;
int main(){
  string s;
  cin>>s;
  for(int i = 0; i< s.length();i++){
    if(i != s.length() - 1 && s[i] == '(' && s[i+1] == ')'){
      blocks+=level;
      i++;
    }
    else if(s[i] == '(')
      level++;
    else if(s[i] == ')'){
      level--;
      blocks++;
    }
  }
  cout<<blocks;
}