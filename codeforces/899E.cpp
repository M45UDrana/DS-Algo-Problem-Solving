#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);


int main()
{
	int n; cin >> n;
	int a[n];
	set<pair<int,int> > len, seg;
	for(int i = 0, j = 0, cnt = 1; i < n; i++)
	{
		cin >> a[i];
		if(i)
		{
			if(a[i] == a[i-1])
				cnt++;
			else
			{
				len.insert(mp(cnt*-1, j));
				seg.insert(mp(j, cnt));
				j = i;
				cnt = 1;
			}
		}
		if(i+1 == n)
		{
			len.insert(mp(cnt*-1, j));
			seg.insert(mp(j, cnt));
		}
	}

	int ans = 0;
	while(len.size())
	{
		ans++;
		pair<int,int> u = *(len.begin());
		len.erase(u);
		auto it = seg.lower_bound(mp(u.ss, u.ff*-1));
		pair<int,int> nxt = {-1,-1}, pre ={-1,-1};
		if(it != seg.begin())
		{
			it--;
			pre = *it;
			it++; 
		}
		it++;
		if(it != seg.end())
		{
			nxt = *it;
		}
		it--;

		seg.erase(*it);
		if(pre != mp(-1,-1) and nxt != mp(-1,-1))
		{
			if(a[pre.ff] == a[nxt.ff])
			{
				len.erase(mp(pre.ss*-1, pre.ff));
				len.erase(mp(nxt.ss*-1, nxt.ff));
				seg.erase(pre);
				seg.erase(nxt);
				pre.ss += nxt.ss;
				len.insert(mp(pre.ss*-1, pre.ff));
				seg.insert(pre);
			}
		}
	}
	cout << ans << endl;
	return 0;
}