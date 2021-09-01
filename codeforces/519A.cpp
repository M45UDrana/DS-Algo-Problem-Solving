#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	map<char, int> mp;
	mp['Q'] = 9;
	mp['q'] = 9;
	mp['R'] = 5;
	mp['r'] = 5;
	mp['B'] = 3;
	mp['b'] = 3;
	mp['N'] = 3;
	mp['n'] = 3;
	mp['P'] = 1;
	mp['p'] = 1;
	mp['K'] = 0;
	mp['k'] = 0;

	int white = 0, black = 0;

	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			char c; cin >> c;
			if(c == '.')
				continue;
			if('A' <= c and c <= 'Z')
				white += mp[c];
			else black += mp[c];
		}
	}

	if(white > black)
		cout << "White" << endl;
	else if(white < black)
		cout << "Black" << endl;
	else cout << "Draw" << endl;
    return 0;
}