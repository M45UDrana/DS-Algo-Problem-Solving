#include <bits/stdc++.h>

using namespace std;

int n; 

int srch(int n)
{
    int lft = 1, rht = 500;
    while(lft < rht)
    {
        int m = (lft+rht+1)/2;
        if((m*(m+1))/2 <= n)
            lft = m;
        else rht = m-1;
    }
    return lft;
}
int main()
{
    cin >> n;
    string s = "z";
    int c = 0;
    while(n)
    {
        int x = srch(n);
        for(int i = 0; i <= x; i++)
            s += char(c+'a');
        c++;
        n -= (x*(x+1))/2;
    }
    cout << s << endl;
    return 0;
}