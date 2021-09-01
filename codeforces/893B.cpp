#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 1e5+1;

int main()
{
    vector<int> v;
    for(int i = 1; i; i++)
    {
        int x = (pow(2, i)-1) *  pow(2, i-1);
        if(x <= N)
            v.push_back(x);
        else break;
    }
    int n; cin >> n;
    for(int i = v.size()-1; i >= 0; i--)
    {
        if(n%v[i] == 0)
        {
            cout << v[i] << endl;
            return 0;
        }
    }
    return 0;
}