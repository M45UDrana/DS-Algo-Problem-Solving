#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    long long lter[26];
    memset(lter, 0, sizeof(lter));
    long long a[26][26];
    memset(a, 0, sizeof(a));

    for(int i = 0; i < n; i++)
    {
        int c = s[i] - 'a';
        for(int j = 0; j < 26; j++)
        {
            a[j][c] += lter[j];
        }
        lter[c]++;
    }
    long long ans = 0;
    for(int i = 0; i < 26; i++)
        ans = max(ans, lter[i]);
    for(int i = 0; i < 26; i++)
        for(int j = 0; j < 26; j++)
            ans = max(ans, a[i][j]);
    cout << ans << endl;
    return 0;
}