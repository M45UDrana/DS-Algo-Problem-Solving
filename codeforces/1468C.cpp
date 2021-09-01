#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define fi first
#define si second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
	IO;
	int used[int(5e5+5)];
	memset(used, 0, sizeof(used));
	vector<int> v;
	priority_queue<pair<int,int>> pq;
	int Case, cur = 0, idx = 0;
	cin >> Case;
	while(Case--)
	{
		int t; cin >> t;
		if(t == 1)
		{
			int x; cin >> x;
			v.push_back(x);
			pq.push({x, idx*-1});
			idx++;
		}
		else if(t == 2)
		{
			while(used[cur])
				cur++;
			used[cur] = true;
			cur++;
			cout << cur << " ";
		}
		else
		{
			while(used[pq.top().si*-1])
				pq.pop();
			used[pq.top().si*-1] = true;
			cout << (pq.top().si*-1)+1 << " ";
		}
	}
	cout << endl;
	return 0;
}