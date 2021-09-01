#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        ll cnt = 0, lst = -1;
        bool flg = true;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                cnt++;
                if(lst == -1)
                    lst = i;
            }
            else if(cnt < k and lst != -1)
            {
                swap(s[lst], s[i]);
                lst++;
                k -= cnt;
            }
            else if(lst != -1)
            {
                swap(s[i], s[i-k]);
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}