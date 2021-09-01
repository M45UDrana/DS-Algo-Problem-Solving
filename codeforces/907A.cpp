#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f, m, s, mh; 
    cin >> f >> m >> s >> mh;
    for(int i = 1; i <= 200; i++)
    {
        for(int j = 1; j < i; j++)
        {
            for(int k = 1; k < j; k++)
            {
                if(i >= f and f*2 >= i and j >= m and 
                        m*2 >= j and k >= s and s*2 >= k 
                        and k >= mh and mh*2 >= s and mh*2 < j)
                    return!(cout<<i<<'\n'<<j<<'\n'<<k<<'\n');
            }
        }
    }
    cout << -1 << endl;

    return 0;
}