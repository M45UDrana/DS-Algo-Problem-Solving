#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, cnt = 0;
    string str;
    cin >> n >> str;
    char r = 'R', b = 'B', g = 'G';
    for(int i = 0; i < n-1; i++)
    {
        if(str[i] == str[i+1])
        {
            cnt++;
            if(i == n-2)
            {
                if(str[i+1] != r)
                    str[i+1] = r;
                else if(str[i] != b)
                    str[i+1] = b;
                else if(str[i] != g)
                    str[i+1] = g;
            }
            else
            {
                if(str[i] != r && str[i+2] != r)
                    str[i+1] = r;
                else if(str[i] != b && str[i+2] != b)
                    str[i+1] = b;
                else if(str[i] != g && str[i+2] != g)
                    str[i+1] = g;
            }
        }

    }
    cout << cnt << endl << str << endl;
    return 0;
}