#include <iostream>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int mn[n] = {0}, mx[n] = {0};
    if(k == 0 && n <= 1)
    {
        cout << "0 0" << endl;
        return 0;
    }
    for(int i = 0, m = k; i < n; i++)
    {
        mx[i] = min(m, 9);
        m -= min(m, 9);
        if(!m)
            break;
    }
    int m = k;
    mn[0] = max(m-(9*(n-1)), 1);
    m -= max(m-(9*(n-1)), 1);
    for(int i = 1; i < n; i++)
    {
        mn[i] = max(m-(9*(n-i-1)), 0);
        m -= max(m-(9*(n-i-1)), 0);
        if(!m)
            break;
    }
    int suma = 0, sumb = 0;
    for(int i = 0; i < n; i++)
    {
        suma += mn[i];
        sumb += mx[i];
        if(mx[i] > 9 || mn[i] > 9)
        {
            cout << "-1 -1" << endl;
            return 0;
        }
    }
    if(suma == k && sumb == k)
    {
        for(int i = 0; i < n; i++)
            cout << mn[i];
        cout << " ";
        for(int i = 0; i < n; i++)
            cout << mx[i];
        cout << endl;
    }
    else cout << "-1 -1" << endl;
    return 0;
}