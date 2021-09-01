#include <bits/stdc++.h>

using namespace std;

bool vecOrder(const pair<int,int>&a,
		const pair<int,int>&b)
{
	if(a.first != b.first) 
		return (a.first > b.first);
	return ( a.second < b.second);
}

int main()
{
	int n, k,ans = 0;
	cin >> n >> k;
	vector<pair<int,int>>v(n);
	pair<int,int>p;
	for(int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), vecOrder);
	p.first = v[k-1].first;
	p.second = v[k-1].second;
	for(int i = 0; i < n; i++)
        {
                if(v[i].first == p.first && v[i].second == p.second)
			ans++;
        }
	cout << ans << endl;
	return 0;
}