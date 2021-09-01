#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>v(n+1, 0);
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v[x] = i;
    }
    int ans = 1, cnt = 1;
    for(int i = 2; i <= n; i++)
    {
        if(v[i] > v[i-1])
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else cnt = 1;
    }
    cout << n - ans << endl;
    return 0;
}