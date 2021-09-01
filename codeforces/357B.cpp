#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int clr[n+1], clr_in[] = {0, 1, 2, 3, 1, 2, 3};
    memset(clr, 0, sizeof(clr));
    for(int i = 0; i < m; i++)
    {
        int x, y, z; cin >> x >> y >> z;
        if(clr[x] != 0)
        {
            clr[y] = clr_in[clr[x]+1];
            clr[z] = clr_in[clr[x]+2];
        }
        else if(clr[y] != 0)
        {
            clr[x] = clr_in[clr[y]+1];
            clr[z] = clr_in[clr[y]+2];
        }
        else if(clr[z] != 0)
        {
            clr[x] = clr_in[clr[z]+1];
            clr[y] = clr_in[clr[z]+2];
        }
        else 
        {
            clr[x] = 1;
            clr[y] = 2;
            clr[z] = 3;
        }
    }
    for(int i = 1; i <= n; i++)
        cout << clr[i] << " ";
    cout << endl;
    return 0;
}