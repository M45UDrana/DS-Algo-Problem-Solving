#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;

		vector<pair<int,char> >v(3);
		v[0] = make_pair(0, 'S');
		v[1] = make_pair(0, 'P');
		v[2] = make_pair(0, 'R');

		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == 'P')
				v[0].first++;
			else if(s[i] == 'R')
				v[1].first++;
			else v[2].first++;
		}
		sort(v.begin(), v.end());

		for(int i = 0; i < s.size(); i++)
			cout << v[2].second;
		cout << endl;
	}
    return 0;
}