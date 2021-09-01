#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int r, b;
    cin >> r >> b;
    int ans1 = min(r, b);
    int ans2 = ((r - ans1) + (b - ans1)) / 2;
    dcoutsssssssssss(ans1, ans2, "");
    return 0;
}