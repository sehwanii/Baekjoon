#include <iostream>
#include <cmath>
using namespace std;

char arr[7000][3500];

char base[3][6] = { "  *  ",
  " * * ",
  "*****" };

int n;

void draw(int size, int x, int y){
  if(size == 3){
    for(int i = -2;i<=2;i++){
      for(int j = 0; j<3;j++){
        arr[x+i][y+j] = base[j][i+2];
      }
    } 
    return;
  }
  draw(size/2,x,y);
  draw(size/2,x - size/2, y + size/2);
  draw(size/2,x + size/2, y + size/2);

}

int main(){
  cin>>n;
  draw(n,n,0);
  for(int j = 0;j<n;j++){
    for(int i = 1; i<n*2+1;i++){
      if(arr[i][j] == '\0')
        cout<<' ';
      else
        cout<<arr[i][j];

    }
    cout<<"\n";
    }

}