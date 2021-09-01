#include <bits/stdc++.h>

using namespace std;

#define ff first 
#define ss second

bool check(char v)
{
    return (v == 'a' or v == 'e' or v == 'i' or v == 'o'
            or v == 'u');
}
int main()
{
    int n; cin >> n;
    vector<string> s(n);
    vector<pair<pair<int,char>,int> >v(n), eq_ch, eq_nbr;
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
        int cnt = 0;
        char ch;
        for(int j = 0; j < s[i].size(); j++)
        {
            if(check(s[i][j]))
            {
                ch = s[i][j];
                cnt++;
            }
        }
        v[i] = make_pair(make_pair(cnt, ch), i);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n-1; i++)
    {
        if(v[i].ff.ss==v[i+1].ff.ss and
                v[i].ff.ff == v[i+1].ff.ff)
        {
            eq_ch.push_back(v[i]);
            eq_ch.push_back(v[i+1]);
            v[i].ff.ff = -1;
            v[i+1].ff.ff = -2;
            i++;
        }
    }
    for(int i = 0; i < n;)
    {
        while(i < n and v[i].ff.ff < 0)
            i++;
        int j = i+1;
        while(j < n and v[j].ff.ff < 0)
            j++;
        if(j < n and v[i].ff.ff == v[j].ff.ff)
        {
            eq_nbr.push_back(v[i]);
            eq_nbr.push_back(v[j]);
            i = j+1;
        }
        else i = j;
    }
    vector<pair<int,int> > ans;
    int i = (int)eq_ch.size()-1, j = (int)eq_nbr.size()-1;
    while(j >= 1 and i >= 1)
    {
        ans.push_back(make_pair(eq_nbr[j].ss,eq_ch[i].ss));
        i--; j--;
        ans.push_back(make_pair(eq_nbr[j].ss,eq_ch[i].ss));
        i--; j--;
    }
    while(i >= 3)
    {
        ans.push_back(make_pair(eq_ch[i].ss,eq_ch[i-2].ss));
        ans.push_back(make_pair(eq_ch[i-1].ss,eq_ch[i-3].ss));
        i -= 4;
    }
    cout << (int)ans.size()/2 << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << s[ans[i].ff] << " " << s[ans[i].ss] << endl;
    return 0;
}