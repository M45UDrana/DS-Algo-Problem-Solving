#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	string s1, s2; cin >> s1 >> s2;

	bool used1[n], used2[n];
	memset(used1, 0, sizeof(used1));
	memset(used2, 0, sizeof(used2));

	queue<int> q[26];

	for(int i = 0; i < n; i++)
	{
		if(s2[i] != '?')
			q[s2[i]-'a'].push(i);
	}

	vector<pair<int,int> > ans;
	for(int i = 0; i < n; i++)
	{
		int x = s1[i]-'a';
		if(s1[i] != '?' and q[x].size())
		{
			int j = q[x].front();
			q[x].pop();
			used1[i] = true;
			used2[j] = true;
			ans.push_back({i+1, j+1});
		}
	}

	for(int i = 0, j = 0; i < n; i++)
	{
		if(s1[i] == '?')
		{
			while(j < n and (s2[j] == '?' or used2[j]))
				j++;
			if(j < n)
			{
				used1[i] = true;
				used2[j] = true;
				ans.push_back({i+1, j+1});
			}
		}
	}

	for(int j = 0, i = 0; j < n; j++)
	{
		if(s2[j] == '?')
		{
			while(i < n and used1[i])
				i++;
			if(i < n)
			{
				used1[i] = true;
				used2[j] = true;
				ans.push_back({i+1, j+1});
			}
		}
	}

	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i].first << " " << ans[i].second << endl;

    return 0;
}