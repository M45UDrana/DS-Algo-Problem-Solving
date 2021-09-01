#include <iostream>
#include <algorithm>

using namespace std;

bool comp(const int &a, const int &b)
{
    return b < a;
}
int main()
{
    int n; cin >> n;
    int a[n], b[n], c[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[i] = b[i] = a[i];
    }
    sort(b, b+n);
    sort(c, c+n, comp);

    if(n <= 2 or b[0] == b[n-1])
    {
        cout << -1 << endl;
        return 0;
    }
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] != a[i+1])
        {
            if((a[i] != b[i+1] or a[i+1] != b[i]) and (a[i] != c[i+1] or a[i+1] != c[i]))
            {
                cout << i+1 << " " << i+2 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}