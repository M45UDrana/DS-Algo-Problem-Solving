#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n1, n2, n3; cin >> n1 >> n2 >> n3;
    vector<int> a(n1), b(n2), c(n3);
    for(int i = 0; i < n1; i++)
        cin >> a[i];
    for(int i = 0; i < n2; i++)
        cin >> b[i];
    for(int i = 0; i < n3; i++)
        cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int n = n1+n2+n3;
    vector<int>p, lis(n+1, 0);

    for(int i = 0; i < n1; i++)
        p.push_back(a[i]);
    for(int i = 0; i < n2; i++)
        p.push_back(b[i]);
    for(int i = 0; i < n3; i++)
        p.push_back(c[i]);

    lis[0] = p[0];
    int len = 1;
    for(int i = 1; i < n; i++)
    {
        auto it = lower_bound(lis.begin(), lis.begin()+len, p[i]);
        if(it == lis.begin()+len)
            lis[len++] = p[i];
        else
            *it = p[i];
    }
    cout <<n-len<< endl;
    return 0;
}