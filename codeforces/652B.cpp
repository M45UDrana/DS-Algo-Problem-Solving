#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    int i = 0, j = n-1;
    while(i <= j)
    {
        if(i == j)
            cout << a[i];
        else cout << a[i] << " " << a[j] << " ";
        i++; j--;
    }
    cout << endl;
    return 0;
}