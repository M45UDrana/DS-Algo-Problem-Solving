#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t; cin >> t;
    int cnt = 0;
    vector<char>snd;
    char fst = '1';
    while(t--)
    {
        string s; cin >> s;
        if(s == "0")
        {
            cout << 0 << endl;
            return 0;
        }
        int n = s.size();
        bool flg = true;
        for(int i = n-1; i > 0; i--)
        {
            if(flg and s[i] == '0')
                cnt++;
            else
            {
                snd.push_back(s[i]);
                flg = false;
            }
        }
        if(s[0] != '1')
            fst = s[0];
    }
    reverse(snd.begin(), snd.end());
    cout << fst;
    for(int i = 0; i < snd.size(); i++)
        cout << snd[i];
    for(int i = 0; i < cnt ; i++)
        cout << 0;
    cout << endl;
    return 0;
}