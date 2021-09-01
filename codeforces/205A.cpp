#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=3e5+5;

int main()
{
    int n;
    cin >> n;
    vector<pair <int, int>> p(n);
    for(int i = 0, temp; i < n; i++)
    {
        cin >> temp;
        p[i].first = temp;
        p[i].second = i+1;
    }
    sort(p.begin(), p.end());
    if(p[0].first == p[1].first)
        cout << "Still Rozdil" << endl;
    else cout << p[0].second << endl;
    return 0;
}