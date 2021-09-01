#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int m = 4*n+1; 
	vector<pair<int,int> > v(m);

	for(int i = 0; i < m; i++)
		cin >> v[i].first >> v[i].second;

	for(int x1 = 0; x1 <= 50; x1++)
	{
		for(int y1 = 0; y1 <= 50; y1++)
		{
			for(int k = 0; k+y1 <= 50; k++)
			{
				int cnt = 0, idx, x2 = x1+k, y2 = y1+k;

				for(int i = 0; i < m; i++)
				{
					if((v[i].first == x1 or v[i].first == x2) and (y1 <= v[i].second and v[i].second <= y2))
						continue;
					if((v[i].second == y1 or v[i].second == y2) and (x1 <= v[i].first and v[i].first <= x2))
						continue;
					cnt++;
					idx = i;
				}
				if(cnt == 1)
					cout << v[idx].first << " " << v[idx].second << endl;
			}
		}
	}

    return 0;
}