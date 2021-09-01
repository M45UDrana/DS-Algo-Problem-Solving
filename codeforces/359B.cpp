#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int n, k; cin >> n >> k;
    n *= 2;
    if(k == 0)
    {
        for(int i = 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
        return 0;
    }

    int a = n-1, b = a - k;
    cout << b << " " << a << " ";
    for(int i = n; i >= 1; i--)
    {
        if(i != a and i != b)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}