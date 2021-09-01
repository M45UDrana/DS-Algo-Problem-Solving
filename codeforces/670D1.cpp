#include <bits/stdc++.h>

using namespace std;

const int N = 1e3+5;

int n, k;
int a[N], b[N];

bool isPosible(int c)
{
    int mg = k;
    for(int i = 0; i < n; i++)
    {
        mg -= max(0, (a[i]*c) - b[i]);
    }
    return (mg >= 0);
}
int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int j = 0; j < n; j++)
        cin >> b[j];
    int left = 0, right = (int)2e3+5;
    while(left < right)
    {
        int mid = left + (right + 1 - left)/2;
        if(isPosible(mid))
            left = mid;
        else right = mid - 1;
    }
    cout << left << endl;
    return 0;
}