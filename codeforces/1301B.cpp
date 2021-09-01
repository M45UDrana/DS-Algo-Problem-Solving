#include <bits/stdc++.h>

using namespace std;

const int R = 1e9;
const int N = 1e5+5;
vector<int> a(N);
int n;

int mabs(int d)
{
    int dif = -1;
    for(int i = 0; i < n-1; i++)
    {
        int x = a[i];
        if(x < 0) x = d;
        int y = a[i+1];
        if(y < 0) y = d;
        dif = max(dif, abs(x-y));
    }
    return dif;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int left = 0, right = R, mid;
        while(left < right)
        {
            mid = left + (right-left)/2;
            if(mabs(mid) < mabs(mid+1))
                right = mid;
            else left = mid+1;
        }
        int ans = mabs(left);
        cout << ans << " " << left << endl;
    }
    return 0;
}