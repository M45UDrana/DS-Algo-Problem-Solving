#include <bits/stdc++.h>

using namespace std;

int a[125];
int main()
{
    int n, sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey;
    string str;
    cin >> str;

    int minx = abs(ex - sx), miny = abs(ey - sy);
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'E')
        {
            if(abs(ex - (sx+1)) < minx)
            {
                sx++;
                minx = abs(ex - sx);
            }
        }
        else if(str[i] == 'S')
        {
            if(abs(ey - (sy-1)) < miny)
            {
                sy--;
                miny = abs(ey - sy);
            }
        }
        else if(str[i] == 'W')
        {
            if(abs(ex - (sx-1)) < minx)
            {
                sx--;
                minx = abs(ex - sx);
            }
        }
        else if(str[i] == 'N')
        {
            if(abs(ey - (sy+1)) < miny)
            {
                sy++;
                miny = abs(ey - sy);
            }
        }
        if(sx == ex && sy == ey)
        {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}