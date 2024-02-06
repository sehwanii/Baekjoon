#include <iostream>
#include <cmath>
using namespace std;

int arr[10];
string s;

int main(){
    cin >> s;
    for (char c:s)
        arr[c - '0']++;
    arr[6] = ceil((float)(arr[6] + arr[9]) / 2);
    arr[9] = 0;
    int max = -1;
    for(int i = 0; i<= 9; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    cout<<max;
}