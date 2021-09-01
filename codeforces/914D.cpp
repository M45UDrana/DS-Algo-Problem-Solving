#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 5e5+7;
int a[N];
int tree[N*3];

void build(int nd, int bn, int en)
{
	if(bn == en)
	{
		tree[nd] = a[bn];
		return;
	}
	build(nd*2, bn, (bn+en)/2);
	build(nd*2+1, (bn+en)/2+1, en);
	tree[nd] = __gcd(tree[nd*2], tree[nd*2+1]);
	return;
}

int query(int nd, int bn, int en, int l, int r, int x)
{
	if(r < bn or l > en)
		return 0;
	int cur = 0;
	if(bn == en)
		return bool(tree[nd]%x);
	if(l <= bn and en <= r)
	{
		if(tree[nd]%x == 0)
			return 0;
		if(tree[nd*2]%x and tree[nd*2+1]%x)
			return 2;
	}

	cur += query(nd*2, bn, (bn+en)/2, l, r, x);
	cur += query(nd*2+1, (bn+en)/2+1, en, l, r, x);
	return cur;
}

void update(int nd, int bn, int en, int i, int val)
{
	if(i < bn or i > en)
		return;
	if(i <= bn and en <= i)
	{
		tree[nd] = val;
		return;
	}
	update(nd*2, bn, (bn+en)/2, i, val);
	update(nd*2+1, (bn+en)/2+1, en, i, val);
	tree[nd] = __gcd(tree[nd*2], tree[nd*2+1]);
	return;
}


int main()
{
    IO;
	int n; cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	build(1, 1, n);
	int Q; cin >> Q;
	while(Q--)
	{
		int q; cin >> q;
		if(q%2)
		{
			int l, r, x; cin >> l >> r >> x;
			int cnt = query(1, 1, n, l, r, x);
			if(cnt <= 1)
				cout << "YES\n";
			else cout << "NO\n";
		}
		else
		{
			int i, y; cin >> i >> y;
			update(1, 1, n, i, y);
		}
	}
	return 0;
}