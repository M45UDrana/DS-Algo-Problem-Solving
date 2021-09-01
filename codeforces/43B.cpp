#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int a[125];
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for(int i = 0; i < s1.size(); i++)
        a[s1[i]]++;

    for(int i = 0; i < s2.size(); i++)
    {
        if(s2[i] != ' ')
        {
            if(a[s2[i]] > 0)
                a[s2[i]]--;
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}