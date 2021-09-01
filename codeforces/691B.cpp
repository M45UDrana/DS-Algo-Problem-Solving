#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char,char> mp;
    mp['A'] = 'A';
    mp['b'] = 'd';
    mp['d'] = 'b';
    mp['H'] = 'H';
    mp['I'] = 'I';
    mp['M'] = 'M';
    mp['O'] = 'O';
    mp['o'] = 'o';
    mp['p'] = 'q';
    mp['q'] = 'p';
    mp['T'] = 'T';
    mp['U'] = 'U';
    mp['V'] = 'V';
    mp['v'] = 'v';
    mp['W'] = 'W';
    mp['w'] = 'w';
    mp['X'] = 'X';
    mp['x'] = 'x';
    mp['Y'] = 'Y';
    string s; cin >> s;
    int n = s.size();
    int i = n/2;
    while(i < n)
    {
        int j = n-i-1;
        if(mp[s[i]] != s[j])
            return !(cout << "NIE" << endl);
        i++;
    }
    cout << "TAK" << endl;
    return 0;
}