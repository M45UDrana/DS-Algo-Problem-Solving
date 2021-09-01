#include <iostream>

using namespace std;

int main()
{
    int x, y; cin >> x >> y;
    int a = max(abs(x), abs(y));
    int ans = max(0, (a-1) * 4);

    if((x == a && y == (a-1)*-1) || (x == 0 && y == 0))
        ans = ans;
    else if(x == a && y <= a && y > (a-1)*-1)
        ans++;
    else if(x >= (a*-1) && y == a)
        ans+=2;
    else if(x == (a*-1) && y >= (a*-1))
        ans+=3;
    else ans += 4;
    cout << ans << endl;
}