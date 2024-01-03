#include <iostream>
#include <cmath>
using namespace std;

int N;

void solve(){
    string s,ret;
    cin>>s;
    int len = s.length();
    int k = (int)sqrt(len);
    for(int i = k-1; i>=0;i--)
    {
        for(int j = 0; j<k;j++){
            ret.push_back(s[i+j*k]);
        }
    }
    cout<<ret<<endl;
}

int main()
{
    cin >> N;
    for(int i = 0; i< N ; i++){
        solve();
    }

    return 0;
}