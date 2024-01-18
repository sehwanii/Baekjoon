#include <iostream>

using namespace std;

string needle, haystack;
int N, ret, flag;

int main(){
	cin >>needle;
	cin >>N;
	for(int i = 0; i< N;i++)
	{
		cin >> haystack;
		for(int j = 0; j < 10; j++)
		{
		    flag = 1;
			for (int k = 0; k< needle.length();k++)
			{
				if (haystack[(j + k)%10] != needle[k])
				{
				    flag = 0;
					break;
				}
			}
			if (flag)
			{
    			ret ++;	
			    break;
			}
		}
	}
	cout << ret;
}