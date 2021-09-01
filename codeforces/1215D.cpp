#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int lft = 0, rht = 0, lft_ = 0, rht_ = 0;
	for(int i = 1; i <= n; i++)
	{
		char c; cin >> c;
		if(i <= n/2)
		{
			if(c != '?')
				lft += (c-'0');
			else lft_++;
		}
		else
		{
			if(c != '?')
				rht += (c-'0');
			else rht_++;
		}
	}
	if(lft == rht)
	{
		if(lft_==rht_)
			cout << "Bicarp" << endl;
		else cout << "Monocarp" << endl;
		return 0;
	}
		lft += ((lft_+1)/2)*9;
		rht += ((rht_+1)/2)*9;
		if(lft == rht)
			cout << "Bicarp" << endl;
		else cout << "Monocarp" << endl;
	return 0;
}