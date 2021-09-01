#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int cnt = 0, n = s.size(), c = 0;
    for(int i = n-1; i > 0; i--)
    {
        if(c)
        {
            if(s[i] == '0')
                cnt += 2;
            else cnt++;
        }
        else 
        {
            if(s[i] == '0')
                cnt++;
            else
            {
                cnt += 2;
                c = 1;
            }
        }
    }
    if(c)
        cnt++;
    cout << cnt << endl;
    
    return 0;
}