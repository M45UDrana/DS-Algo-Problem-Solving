#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 1e5+7;

int main()
{
    IO;
    int t = 1;
    while(t--)
    {
		int n; cin >> n;
		int a[n]; char c[n];

		vector<int> v;
		for(int i = 0; i < n; i++)
		{
			cin >> c[i] >> a[i];
			if(c[i] == 'L')
				v.push_back(a[i]);
		}

		reverse(v.begin(), v.end());
		for(int i = 0; i < n; i++)
			if(c[i] == 'R')
				v.push_back(a[i]);

		int N = 2e5+7, m = v.size();
		vector<pair<int,int> > cnt(N, {0,0});

		for(int i = 0; i < v.size(); i++)
			cnt[v[i]] = {i, m-(i+1)};


		vector<int> ans;
		int lft = 0, rht = 0;
		for(int i = n-1; i >= 0; i--)
		{
			if(c[i] == 'L')
				lft++;
			else if(c[i] == 'R')
				rht++;
			else
			{
				ans.push_back(min(cnt[a[i]].first-lft,
						cnt[a[i]].second-rht));
			}

		}
		for(int i = (int)ans.size()-1; i >= 0; i--)
			cout << ans[i] << endl;

	}
	return 0;
}