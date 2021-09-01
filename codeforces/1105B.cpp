#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int a[130];
int main()
{
    int n, k, cnt = 1, i;
    string str;

    cin >> n >> k;
    cin >> str;
    for(i = 1; i < n; i++)
    {
        if(str[i] == str[i-1])
            cnt++;
        else
        {
            a[(int)str[i-1]] += cnt / k;
            cnt = 1;
        }
    }
    a[(int)str[i-1]] += cnt / k;
    sort(a, a+130);
    debugsssssssssss(a[129], "", "");
    return 0;
}