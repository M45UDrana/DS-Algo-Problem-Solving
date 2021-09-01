#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    vector<int> len;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        len.push_back((int)s.size());
    }
    sort(len.begin(), len.end());
    string s; cin >> s;
    for(int i = 0; i < len.size(); i++)
    {
        if(s.size() == len[i])
        {
            cout << (int)((i) / k) * 5 + (i+1) << " ";
            break;
        }
    }
    for(int i = len.size()-1; i >= 0; i--)
    {
        if(s.size() == len[i])
        {
            cout << (int)((i) / k) * 5 + (i+1) << endl;
            break;
        }
    }
    return 0;
}