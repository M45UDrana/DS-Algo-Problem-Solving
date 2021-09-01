#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 505;
int a[N], b[N][N];

int n, cur, x;

void dfs(int i, int j)
{
	if((!x) or b[i][j])
		return;
	b[i][j] = a[cur];
	x--;
	if(i+1 < n)
		dfs(i+1, j);
	while(j > 0)
	{
		j--;
		dfs(i, j);
	}
}

int main()
{
    IO;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = n-1; i >= 0; i--)
	{
		cur = i;
		x = a[i];
		dfs(i, i);
		if(x)
			return !(cout << -1 << endl);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
	return 0;
}