#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b, p;
    cin >> n >> b >> p;
    int ans1 = 0, ans2 = n*p;
    int wb = b+b+1;
    int i = 8;
    while(n != 1)
    {
        if(n >= pow(2, i))
        {
            n -= pow(2, i)/2;
            ans1 += (pow(2, i)/2)*wb;
        }
        else 
            i--;
    }
    cout << ans1 << " " << ans2 <<endl;
    return 0;
}