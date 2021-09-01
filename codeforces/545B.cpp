#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    IO
    string s, t;
    vector <char> a;
    cin >> s >> t;
    int n = s.size();
    int dif_s = 0, dif_t = 0, flag = 0, i;

    for(i = 0; i < n; i++)
    {
        if(s[i] == '0' && t[i] == '0')
        {
            a.push_back('1');
        }
        else if(s[i] == '1' && t[i] == '1')
        {
            a.push_back('0');
        }
        else
        {
            if(flag)
            {
                a.push_back(s[i]);
                dif_s++;
                flag ^= 1;
            }
            else
            {
                a.push_back(t[i]);
                dif_t++;
                flag ^= 1;
            }
        }
    }

    if(dif_s == dif_t)
    {
        for(int i = 0; i < n; i++)
            cout << a[i];
    }
    else
        cout << "impossible" << endl;

    return 0;
}