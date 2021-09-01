#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, n1, n2; cin >> n >> n1 >> n2;
    vector<double> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<double>());
    int m = min(n1, n2);
    double suma = 0;
    for(int i = 0; i < m; i++)
        suma += a[i];
    double sumb = 0;
    for(int i = m; i < n1+n2; i++)
        sumb += a[i];
    suma /= (double)m;
    sumb /= (double)max(n1, n2);
    cout << setprecision(20) << suma + sumb << endl;
    return 0;
}