#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    string s[n];
    for(int i = 0; i < n; i++)
        s[i].resize(n, 'S');
    int snd = ((n+1)/2) * ((n+1)/2);
    snd += (n/2) * (n/2);
    if(snd < k)
    {
        cout << "NO" << endl;
        return 0;
    }
    int cnt = 0;
    cout << "YES" << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n and cnt < k; j++)
        {
            if(i%2)
            {
                if(j%2)
                {
                    s[i][j] = 'L';
                    cnt++;
                }
            }
            else 
            {
                if(!(j%2))
                {
                    s[i][j] = 'L';
                    cnt++;
                }
            }
        }
        cout << s[i] << endl;
    }
    return 0;
}