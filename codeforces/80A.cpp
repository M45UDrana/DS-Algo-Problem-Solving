#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int n, m, i;
    cin >> n >> m;
    for(int temp = n+1; temp; temp++)
    {
        for(i = 2; i <= temp; i++)
        {
            if(temp % i == 0)
                break;
        }
        if(temp == i && temp == m){
            cout << "YES" << endl; break;}
        else if(temp == i){
            cout << "NO" << endl; break;}

    }
    return 0;
}