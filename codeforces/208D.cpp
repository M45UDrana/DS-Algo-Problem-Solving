#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    ll v[n], sum = 0;
    for(int i = 0; i < n; i++)
        cin >> v[i];

    ll a[5], ans[5] = {0};
    for(ll i = 0; i < 5; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        v[i] += sum;
        for(int j = 4; j >= 0; j--)
        {
            ans[j] += v[i]/a[j];
            v[i] %= a[j];
        }
        sum = v[i];
    }

    for(int i = 0; i < 5; i++)
        cout << ans[i] << " ";
    cout << endl << sum << endl;

}