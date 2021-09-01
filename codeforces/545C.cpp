#include <iostream>
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    int p[n], h[n];
    for(int i = 0; i < n; i++)
        cin >> p[i] >> h[i];
    int ans = 0, pos = 1e9+10;
    for(int i = 0; i < n; i++)
    {
        if(i == 0 || ((p[i]-h[i] > pos) && (p[i]-h[i] > p[i-1])))
        {
            ans++;
            pos = p[i];
        }
        else if(i == n-1 || p[i]+h[i] < p[i+1])
        {
            ans++;
            pos = p[i]+h[i];
        }
        else pos = p[i];
    }
    cout << ans << endl;
}