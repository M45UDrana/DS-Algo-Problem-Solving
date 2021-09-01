#include <bits/stdc++.h>

using namespace std;

main()
{
    int p, x, y;
    cin >> p >> x >> y;
    for(int s = y;1; s++)
    {
        if((s-x)%50)
            continue;
        int i = (s/50)%475;
        for(int j = 0; j < 25; j++)
        {
            i = (i*96+42) % 475;
            if(i+26 == p)
            {
                cout << max((s-x+50)/100, 0) << endl;
                return 0;
            }
        }
    }
    return 0;
}