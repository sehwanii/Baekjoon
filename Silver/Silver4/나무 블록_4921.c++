#include <iostream>

using namespace std;

int block1(int idx);
int block2(int idx);
int block3(int idx);
int block4(int idx);
int block5(int idx);
int block6(int idx);
int block7(int idx);
int block8(int idx);

string s;

int main(){
	int n = 0;

	cin >> s;
	while (s != "0") {
        int len = s.length();
		int flag = 0;
		cout << ++n <<". ";
		if (s[0] == '1'){
			if (block1(0) == 1)
				cout << "VALID\n";
			else
				cout << "NOT\n";
		}
		else
			cout << "NOT\n";
		cin >> s;
    }
}

int block1(int idx){
	if(s[idx+1] == '4')
		return (block4(idx + 1));
	else if(s[idx+1] == '5')
		return (block5(idx + 1));
	else
		return (0);
}

int block2(int idx){
	if(idx + 1 == s.length())
		return (1);
	else
		return (0);
}

int block3(int idx){
	if(s[idx+1] == '4')
		return (block4(idx + 1));
	else if(s[idx+1] == '5')
		return (block5(idx + 1));
	else
		return (0);
}

int block4(int idx){
	if(s[idx+1] == '2')
		return (block2(idx + 1));
	else if(s[idx+1] == '3')
		return (block3(idx + 1));
	else
		return (0);
}

int block5(int idx){
	if(s[idx+1] == '8')
		return (block8(idx + 1));
	else
		return (0);
}

int block6(int idx){
	if(s[idx+1] == '2')
		return (block2(idx + 1));
	else if(s[idx+1] == '3')
		return (block3(idx + 1));
	else
		return (0);
}

int block7(int idx){
	if(s[idx+1] == '8')
		return (block8(idx + 1));
	else
		return (0);
}

int block8(int idx){
	if(s[idx+1] == '6')
		return (block6(idx + 1));
	else if(s[idx+1] == '7')
		return (block7(idx + 1));
	else
		return (0);
}
