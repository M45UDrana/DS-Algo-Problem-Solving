#include <bits/stdc++.h>

using namespace std;

int a[125];
int main()
{
    int a[5][5];
    vector<int>v = {0 ,1, 2, 3, 4};
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            cin >> a[i][j];
    }
    int ans = 0, tmp;
    do{
        tmp = 0;
        for(int i = 0; i < 5; i++)
        {
            for(int j = i; j+1 < 5; j+=2)
            {
                tmp += a[v[j]][v[j+1]] + a[v[j+1]][v[j]];
            }
        }
        ans = max(ans, tmp);
    }
    while(next_permutation(v.begin(), v.end()));

    cout << ans << endl;


    return 0;
}