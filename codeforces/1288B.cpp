#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long a, b, ans = 0; cin >> a >> b;
        for(int i = 9; i <= b; i = i*10+9)
            ans += a;
        cout << ans << endl;
    }
    return 0;
}