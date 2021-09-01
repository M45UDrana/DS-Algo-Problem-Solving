#include <bits/stdc++.h>

using namespace std;
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int m, n;
    cin >> n >> m;
    int a[m];
    priority_queue<int>p;
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
        p.push(a[i]);
    }
    int mns = 0, mxs = 0;
    sort(a, a+m);
    for(int i = 0, j = 0; i < m;)
    {
        if(a[i] != 0)
        {
            mns += a[i];
            a[i]--;
            j++;
        }
        else i++;
        if(j==n) break;
    }
    int j = 0;
    while(!p.empty())
    {
        int tmp = p.top();
        mxs += tmp; tmp--;
        p.pop(); p.push(tmp);
        j++;
        if(j == n) break;
    }

    cout << mxs << " " << mns << endl;
    return 0;
}

/*
40 10
1 2 3 4 5 6 7 10 10 10

*/