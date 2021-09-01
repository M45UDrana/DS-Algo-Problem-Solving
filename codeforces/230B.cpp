#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define ll long long
const int N=1e5+5;

int distinct[N], state[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int n;
    cin >> n;
    ll ar[n], root, dble_rot, j;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(ar[i] == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        root = sqrt(ar[i]);
        if(root * root == ar[i])
        {
            if(root == 2)
            {
                cout << "YES" << '\n';
                continue;
            }
            if(root % 2 == 0 )
            {
                cout << "NO" << '\n';
                continue;
            }
            dble_rot = sqrt(root) + 1;
            for(j = 3; j <= dble_rot; j++)
            {
                if(root % j == 0)
                {
                    cout << "NO" << '\n';
                    break;
                }
            }
            if(dble_rot <= j)
            {
                cout << "YES" << '\n';
            }
        }
        else
            cout << "NO" << "\n";
    }

    return 0;
}