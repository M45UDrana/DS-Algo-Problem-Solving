#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int find_mex(int a[], int n)
{
	vector<int> used(n+1, 0);
	for(int i = 0;i < n; i++)
		used[a[i]]++;
	for(int i = 0; i <= n; i++)
		if(!used[i])
			return i;
	return n;
}

int main()
{
    IO;
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		vector<int> ans;
		while(1)
		{
			int x = find_mex(a, n);
			if(x == n)
			{
				int idx = n;
				for(int i = 0; i < n; i++)
				{
					if(a[i] != i)
					{
						idx = i;
						break;
					}
				}
				if(idx < n)
				{
					a[idx] = n;
					ans.push_back(idx+1);
				}
				else break;
			}
			else
			{
				a[x] = x;
				ans.push_back(x+1);
			}
		}
		cout << ans.size() << endl;
		for(int i = 0; i < ans.size(); i++)
			cout << ans[i] << " " ;
		cout << endl;
	}
	return 0;
}