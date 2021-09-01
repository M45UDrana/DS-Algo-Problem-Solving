#include <bits/stdc++.h>

using namespace std;

#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
    input;
    output;
    int n;
    scanf("%d", &n);
    vector<pair<int,int>>v(n*2);
    for(int i = 0; i < 2*n; i++)
    {
        scanf("%d", &v[i].first);
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < 2*n; i+=2)
    {
        if(v[i].first != v[i+1].first)
        {
            printf("-1\n");
            return 0;
        }
    }
    for(int i = 0; i < 2*n; i+=2)
    {
        printf("%d %d\n", v[i].second, v[i+1].second);
    }

    return 0;
}