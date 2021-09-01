#include <bits/stdc++.h>

using namespace std;

inline int read()
{
	int x=0;char c=getchar();
	for(;c<48||c>57;c=getchar());
	for(;c>47&&c<58;c=getchar())
		x=(x<<1)+(x<<3)+c-48;
	return x;
}

int a[101][101][11], psum[101][101][11];

int main()
{
    int n = read(), q = read(), c = read();
    for(int i = 0; i < n; i++)
    {
        int x = read(), y = read(), si = read();
        a[x][y][si]++;
    }
    
    for(int i = 1; i < 101; i++)
    {
        for(int j = 1; j < 101; j++)
        {
            for(int l = 0; l < 11; l++)
            {
                psum[i][j][l] = a[i][j][l]+psum[i-1][j][l]
                   + psum[i][j-1][l] - psum[i-1][j-1][l];
            }
        }
    }
    while(q--)
    {
        int t = read(), x1 = read(), y1 = read(),
            x2 = read(), y2 = read();
        int ans = 0;
        for(int i = 0; i < 11; i++)
        {
            int x = (psum[x2][y2][i]+psum[x1-1][y1-1][i])
                - (psum[x2][y1-1][i]+psum[x1-1][y2][i]);
            ans += ((i+t)%(c+1))*x;
        }
        cout << ans << '\n';
    }
    return 0;
}