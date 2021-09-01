#include <iostream>

using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    if((a*2)+2 < b || a > b+1)
    {
        cout << -1 << endl;
        return 0;
    }
    if(a > b)
    {
        for(int i = 0;a || b ; i++)
        {
            if(a)
            {
                cout<<0;
                a--;
            }
            if(b)
            {
                cout<<1;
                b--;
            }
        }
    }
    else
    {
        for(int i = 0; a || b ; i++)
        {
            if(b)
            {
                cout<<1;
                b--;
                if(a < b)
                {
                    cout<<1;
                    b--;
                }
            }
            if(a)
            {
                cout<<0;
                a--;
            }
        }
    }
    cout << endl;
    return 0;
}