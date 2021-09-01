#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    int m; cin >> m;
    vector<int>last(n+1, 0), suf_max(m+1, 0);
    for(int i = 1; i <= m; i++)
    {
        int typ; cin >> typ;
        if(typ == 1)
        {
            int p, x; cin >> p >> x;
            a[p] = x;
            last[p] = i;
        }
        else 
        {
            int x; cin >> x;
            suf_max[i] = x;
        }
    }
    for(int i = m-1; i >= 0; i--)
        suf_max[i] = max(suf_max[i], suf_max[i+1]);
    for(int i = 1; i <= n; i++)
    {
        a[i] = max(a[i], suf_max[last[i]]);
    }
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    puts("");
    return 0;
}