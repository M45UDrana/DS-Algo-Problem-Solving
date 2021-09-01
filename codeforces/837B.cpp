#include <bits/stdc++.h>

using namespace std;

bool eq(int l, int h, int l1, int h1)
{
    return (l == l1 and h == h1);
          //  or (l == h1 and h == l1));
}
int main()
{
    int n, m; cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];

    int R[4] = {-1,-1,-1,-1};
    int G[4] = {-1,-1,-1,-1};
    int B[4] = {-1,-1,-1,-1};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(s[i][j] == 'R')
            {
                R[2] = i; R[3] = j;
                if(R[0] == -1)
                {
                    R[0] = i; R[1] = j;
                }
            }
            if(s[i][j] == 'G')
            {
                G[2] = i; G[3] = j;
                if(G[0] == -1)
                {
                    G[0] = i; G[1] = j;
                }
            }
            if(s[i][j] == 'B')
            {
                B[2] = i; B[3] = j;
                if(B[0] == -1)
                {
                    B[0] = i; B[1] = j;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(s[i][j] == 'R')
            {
                if(i < R[0] or j < R[1] or i > R[2] or
                        j > R[3])
                    return !(cout << "NO" << endl);
            }
            if(s[i][j] == 'G')
            {
                if(i < G[0] or j < G[1] or i > G[2] or
                        j > G[3])
                    return !(cout << "NO" << endl);
            }
            if(s[i][j] == 'B')
            {
                if(i < B[0] or j < B[1] or i > B[2] or
                        j > B[3])
                    return !(cout << "NO" << endl);
            }
        }
    }

    int rl = R[3]-R[1]+1, rh = R[2]-R[0]+1;
    int gl = G[3]-G[1]+1, gh = G[2]-G[0]+1;
    int bl = B[3]-B[1]+1, bh = B[2]-B[0]+1;
    if(eq(rl,rh,gl,gh) and eq(rl,rh,bl,bh) and
            (rl*rh+gl*gh+bl*bh == m*n))
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}