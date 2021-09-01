#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int n, T; 
vector<pair<int,int>>v;
bool res = false;

bool cmp(const pair<int,int> &a, 
		const pair<int,int> &b)
{
	if(a.ff == b.ff)
		return a.ss < b.ss;
	else return b.ff < a.ff;
}

bool check(int x)
{
	priority_queue<pair<int,int> > pq;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(v[i].ff >= x)
		{
			if(sum + v[i].ss <= T)
			{
				pq.push(mp(v[i].ss,i));
				sum += v[i].ss;
			}
			else if(pq.size() and (pq.top()).ff >
				v[i].ss)
			{
				sum -= (pq.top()).ff;
				pq.pop();
				pq.push(mp(v[i].ss,i));
				sum += v[i].ss;
			}
		}
	}
	if(pq.size() >= x)
	{
		if(res)
		{
			cout << x << endl;
			while(pq.size() and x)
			{
				cout << (pq.top()).ss+1 << " ";
				pq.pop();
				x--;
			}
			cout << endl;
		}
		return true;
	}
	return false;
}

int main()
{
	cin >> n >> T;
	for(int i = 0; i < n; i++)
	{
		int a, t; cin >> a >> t;
		v.pb(mp(a,t));
	}
	int lft = 0, rht = n;
	while(lft < rht)
	{
		int md = (rht+lft+1)/2;
		if(check(md))
			lft = md;
		else rht = md-1;
	}
	cout << lft << endl;
	res = true;
	check(lft);
	return 0;
}