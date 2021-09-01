#include <bits/stdc++.h>

using namespace std;

#define fr(i,n) for(int i=0; i < (int)n; i++)
int b[52][52]={0};
int main()
{
    int a[51][51];
    int n, m, coun = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < m-1; j++)
        {
            if(a[i][j] == 1)
            {
                if((a[i][j] == 1 || a[i][j] == -1) && (a[i+1][j] == 1 || a[i+1][j] == -1) && (a[i][j+1] == 1 || a[i][j+1] == -1) && (a[i+1][j+1] == 1 || a[i+1][j+1] == -1))
                {
                    b[i][j]=1;

                    a[i][j] = -1;
                    a[i+1][j] = -1;
                    a[i][j+1] = -1;
                    a[i+1][j+1] = -1;
                    coun++;
                }
                else if(a[i][j] == 1)
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
            else if(a[i][j] == -1)
            {
                if((a[i][j] == 1 || a[i][j] == -1) && (a[i+1][j] == 1 || a[i+1][j] == -1) && (a[i][j+1] == 1 || a[i][j+1] == -1) && (a[i+1][j+1] == 1 || a[i+1][j+1] == -1))
                {
                    b[i][j]=1;

                    a[i][j] = -1;
                    a[i+1][j] = -1;
                    a[i][j+1] = -1;
                    a[i+1][j+1] = -1;
                    coun++;
                }
            }

        }
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i][m-1] == 1)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    for(int i = 0; i < m; i++)
    {
        if(a[n-1][i] == 1)
        {
            cout << -1 << endl;
            return 0;
        }
    }


    if(!coun)
        cout << 0 << endl;
    else
        {
            cout << coun << endl;
            for(int i = 0; i < 51; i++)
            {
                for(int j = 0; j < 51; j++)
                {
                    if(b[i][j] == 1)
                        cout << i+1 << " " << j+1 << endl;
                }
            }
        }

}