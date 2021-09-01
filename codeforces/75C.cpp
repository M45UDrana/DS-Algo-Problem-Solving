#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int a, b; cin >> a >> b;
    vector<int>gcd;
    int az = sqrt(a)+0.5;
    for(int i = 1; i <= az; i++)
    {
        if(a%i == 0)
        {
            if(b%i == 0)
                gcd.push_back(i);
            if(a / i != i && b%(a/i) == 0)
                gcd.push_back(a / i);
        }
    } 
    sort(gcd.begin(), gcd.end());
    int n; cin >> n;
    while(n--)
    {
        int x, y; cin >> x >> y;
        int in = lower_bound(gcd.begin(), gcd.end(), y) - gcd.begin();
        if(gcd.size() == in || gcd[in] > y)
            in--;
        if(x <= gcd[in] && gcd[in] <= y)
            cout << gcd[in] << endl;
        else cout << -1 << endl;
    }
    return 0;
}