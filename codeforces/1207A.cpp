#include <bits/stdc++.h>

using namespace std;

#define fr(i,n) for(int i=0; i < (int)n; i++)

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int b=0, bp=0, cf=0, h=0, c=0, hcoun=0, ccoun=0;
        cin >> b >> bp >> cf >> h >> c;
        if(h > c)
        {
            hcoun = min(b, bp*2);
            ccoun = min(b-hcoun, cf*2);
        }
        else
        {
            ccoun = min(b, cf*2);
            hcoun = min(b-ccoun, bp*2);
        }
        int ans = ((ccoun / 2) * c) + ((hcoun / 2) * h);
        cout << ans << endl;
    }

}