#include <iostream>

using namespace std;

int main()
{
    string s, g = ""; cin >> s;
    int n = s.size();
    bool ok = true;
    g += s[0];
    for(int i = 1; i < n; i++)
    {
        if(s[i] == 'a' and s[i+1] == 't' and ok and
                i+1 < n-1)
        {
            g += '@';
            ok = false;
            i++;
        }
        else if(s[i] == 'd' and s[i+1] == 'o' and
                s[i+2] == 't' and i+2 < n-1)
        {
            g += '.';
            i+=2;
        }
        else g += s[i];
    }
    cout << g << endl;
    return 0;
}