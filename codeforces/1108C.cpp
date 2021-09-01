#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n;
    string str;
    cin >> n >> str;
    pair<int, int> cst_min;
    cst_min.first = 1e9;

    string ar[6] = {"BGR", "BRG", "GBR", "GRB", "RBG", "RGB"};

    for(int i = 0, cost = 0; i < 6; i++, cost = 0)
    {
        for(int j = 0; j < n ; j++)
        {
            if(j == n) break;
            if(str[j] != ar[i][j%3])
                cost++;
        }
        if(cst_min.first > cost)
        {
            cst_min.first = cost;
            cst_min.second = i;
        }
    }
    cout << cst_min.first << endl;
    for(int i = 0; i < n; i++)
        cout << ar[cst_min.second][i%3];

    return 0;
}