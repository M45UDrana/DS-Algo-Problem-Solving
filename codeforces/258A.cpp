#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

const int N = 1e7+5;
bool status[N]={0};
int main()
{
    IO
    string str;
    cin >> str;
    int i, n = str.size();
    for(i = 0; i < n; i++)
    {
        if(str[i] == '0')   break;
        if(i+1 == n)        break;
    }
    for(int j = 0; j < n; j++)
    {
        if(j == i) continue;
        cout << str[j];
    }

    return 0;
}