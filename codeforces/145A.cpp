#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int four = 0, seven = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            if(b[i] == '4')
                four++;
            else seven++;
        }
    }
    cout << min(four, seven) + (max(four, seven) - min(four, seven)) << endl;
    return 0;
}