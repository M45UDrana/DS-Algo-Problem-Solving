#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
const int N = 1e5+1;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int avr , eqlty; avr = eqlty = sum / n;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > avr)  eqlty += a[i] - avr;
        else            eqlty -= avr - a[i];
    }

    if(avr == eqlty)    cout << n << endl;
    else                cout << n-1 << endl;

    return 0;
}