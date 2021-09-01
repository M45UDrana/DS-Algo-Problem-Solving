#include <bits/stdc++.h>

using namespace std;

struct Node{
	int rw, cl, l, r;
};

int main()
{
	int n, m; cin >> n >> m;
	int R, C; cin >> R >> C;
	int X, Y; cin >> X >> Y;

	string s[n];
	for(int i = 0; i < n; i++)
		cin >> s[i];

	bool visit[n][m];
	memset(visit, 0, sizeof(visit));

	queue<Node> Q;
	Q.push({R-1,C-1,0,0});

	while(!Q.empty())
	{
		Node u = Q.front();
		Q.pop();
		if(visit[u.rw][u.cl] or s[u.rw][u.cl] == '*')
			continue;
		if(u.l > X or u.r > Y)
			continue;
		visit[u.rw][u.cl] = true;
		int i = 0; 
		while(u.rw+i < n and s[u.rw+i][u.cl] == '.')
		{
			visit[u.rw+i][u.cl] = true;
			if(u.cl-1 >= 0)
				Q.push({u.rw+i, u.cl-1,u.l+1,u.r});
			if(u.cl+1 < m)
				Q.push({u.rw+i, u.cl+1,u.l,u.r+1});
			i++;
		}
		i = 1;
		while(u.rw-i >= 0 and s[u.rw-i][u.cl] == '.')
		{
			visit[u.rw-i][u.cl] = true;
			if(u.cl-1 >= 0)
				Q.push({u.rw-i, u.cl-1,u.l+1,u.r});
			if(u.cl+1 < m)
				Q.push({u.rw-i, u.cl+1,u.l,u.r+1});
			i++;
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			ans += visit[i][j];
	cout << ans << endl;
    return 0;
}