#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n+1], b[n+1];
    int suma = 0, sumb = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        suma += a[i];
        sumb += b[i];
    }
    int dif = abs(suma-sumb), in = 0;
    for(int i = 1; i <= n; i++)
    {
        if(abs((suma+b[i]-a[i])-(sumb+a[i]-b[i])) > dif)
        {
            in = i;
            dif = abs((suma+b[i]-a[i])-(sumb+a[i]-b[i]));
        }
    }
    cout << in << endl;
    return 0;
}