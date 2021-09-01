#include <bits/stdc++.h>

using namespace std;

void print(int i, int j, int x, int y)
{
	while(i != x)
	{
		if(i < x)
			i++;
		else i--;
		cout << i << " " << j << endl;
	}

	while(j != y)
	{
		if(j < y)
			j++;
		else j--;
		cout << i << " " << j << endl;
	}
}

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int mx = max({x1, x2, x3});
	int my = max({y1, y2, y3});
	int ans = (mx-min({x1,x2,x3})) + (my-min({y1,y2,y3
				})) + 1;

	pair<int,int> p = {-1,-1};

	for(int i = 0; i <= mx; i++)
	{
		for(int j = 0; j <= my; j++)
		{
			int d = 1;
			d += abs(i-x1) + abs(j-y1);
			d += abs(i-x2) + abs(j-y2);
			d += abs(i-x3) + abs(j-y3);

			if(d == ans)
			{
				p = make_pair(i,j);
				break;
			}
		}
		if(p.first != -1)
			break;
	}
	cout << ans << endl;
	cout << p.first << " " << p.second << endl;
	print(p.first,p.second,x1,y1);
	print(p.first,p.second,x2,y2);
	print(p.first,p.second,x3,y3);

    return 0;
}