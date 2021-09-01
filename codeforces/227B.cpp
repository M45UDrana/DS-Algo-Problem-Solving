#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=3e5+5;

int ar[N];
int main()
{
    int n, m;
    long long vas = 0, pet = 0;
    cin >> n;
    for(int i = 1, temp; i <= n; i++)
    {
        cin >> temp;
        ar[temp] = i;
    }
    cin >> m;
    for(int i = 0, temp; i < m; i++)
    {
        cin >> temp;
        vas += ar[temp];
        pet += (n - ar[temp]) + 1;
    }
    cout << vas << " " << pet << endl;
    return 0;
}