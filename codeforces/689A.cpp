#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    bool up = true, down = true, left = true, right = true;
    for(int i = 0; i < n; i++)
    {
        int x = (int)s[i] - '0';
        if(x == 1)
        {
            left = false;
            up = false;
        }
        else if(x == 2)
            up = false;
        else if(x == 3)
        {
            up = false;
            right = false;
        }
        else if(x == 4)
            left = false;
        else if(x == 6)
            right = false;
        else if(x == 7)
        {
            left = false;
            down = false;
        }
        else if(x == 9)
        {
            right = false;
            down = false;
        }
        else if(x == 0)
        {
            left = false;
            right = false;
            down = false;
        }
    }
    if(!left and !right and !up and !down)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}